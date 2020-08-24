#include "manager.h"
#include "ui_manager.h"

Manager::Manager(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Manager)
{
    ui->setupUi(this);

    model = new QSqlTableModel(this);
    model->setTable("user_info");   // 设置查询表

    this->setWindowTitle(QString("欢迎 %1 使用预约系统").arg(userName));
}

Manager::~Manager()
{
    delete ui;
    delete model;
    delete roomModel;
    delete orderModel;
}

/************************************************
* 函数名：Widget::on_pushButton_clicked()
* 参数：无
* 返回值：无
* 描述：查询用户信息按钮
************************************************/
void Manager::on_pushButton_serchUser_clicked()
{
    qDebug() << "查询";

    model->setEditStrategy(QSqlTableModel::OnManualSubmit); //选编辑策略
    model->select(); //选取整个表的所有行  相当于select all
    // model->removeColumn(0); //不显示id属性列,如果这时添加记录，则该属性的值添加不上

    ui->tableView_manager->setModel(model);


    QSqlQuery query;

    query.exec("select * from user_info");
    while(query.next()){
        qDebug() << query.value(0).toInt() << query.value(1).toString() << query.value(2).toString() << query.value(3).toString();
    }

}

/************************************************
* 函数名：Widget::on_pushButton_roomInfo_clicked()
* 参数：无
* 返回值：无
* 描述：查询机房信息  2
************************************************/
void Manager::on_pushButton_serchRoomInfo_clicked()
{
    roomModel = new QSqlTableModel(this);
    roomModel->setTable("room_info");   // 设置查询表
    roomModel->setEditStrategy(QSqlTableModel::OnManualSubmit);
    roomModel->select();
    model->removeColumn(3); //不显示座位余量
    ui->tableView_manager->setModel(roomModel);

    QSqlQuery query;

    query.exec("select * from room_info");
    while(query.next()){
        qDebug() << "机房：" << query.value(0).toInt() << "最大容量：" << query.value(1).toInt();
    }

}

/************************************************
* 函数名：Widget::on_pushButton_addUser_clicked()
* 参数：无
* 返回值：无
* 描述：添加用户
************************************************/
void Manager::on_pushButton_addUser_clicked()
{
    QString id = ui->lineEdit_number->text();
    QString name = ui->lineEdit_name->text();
    QString pwd = ui->lineEdit_pwd->text();

    // 判断用户信息是否全
    if(id == "" || name == "" || pwd == ""){
        QMessageBox::information(nullptr, "Title", "用户信息不全！");
        return;
    }

    // 判断用户ID的长度是否符合要求
    switch (identityID) {
        case 0:
            // 检查学生ID
            if(id.length() != 9){
                QMessageBox::information(nullptr, "Title", "用户ID错误！");
                return;
            }
            break;
        case 1:
            // 检查教师ID
            if(id.length() != 3){
                QMessageBox::information(nullptr, "Title", "用户ID错误！");
                return;
            }
            break;
        case 2:
            // 检查管理员ID
            if(id.length() != 1){
                QMessageBox::information(nullptr, "Title", "用户ID错误！");
                return;
            }
            break;
        default:
            break;
    }

    if(pwd.length() != 6){
        QMessageBox::information(nullptr, "Title", "请设置6位密码！");
        return;
    }

    qDebug() << id << name << pwd << identity;

    // MD5对密码进行加密
    QString pwdMD5;
    QByteArray str;
    str = QCryptographicHash::hash(pwd.toLatin1(), QCryptographicHash::Md5);
    pwdMD5.append(str.toHex());

    QString str1 = QString("insert into user_info values('%1', '%2', '%3', '%4')").arg(id)
            .arg(name).arg(pwdMD5).arg(identity);
    qDebug() << str1;

    // 判断用户名是否已经存在
    QSqlQuery query;
    query.exec(QString("select name from user_info where user_id = %1").arg(id));
    query.next();
    QString nameFlag = query.value(0).toString();
    if(nameFlag != ""){
        QMessageBox::information(nullptr, "Title", "该用户已存在");
        qDebug() << "该用户已存在";
        return;
    }
    else{
        bool flag = query.exec(str1);
        if(flag){
            QMessageBox::information(nullptr, "Title", "添加用户成功");
            ui->lineEdit_number->setText("");
            ui->lineEdit_name->setText("");
            ui->lineEdit_pwd->setText("");
        }
        else{
            QMessageBox::information(nullptr, "Title", "数据库发生错误");
        }
    }
}

/************************************************
* 函数名：Widget::on_pushButton_delUser_clicked()
* 参数：无
* 返回值：无
* 描述：删除用户
************************************************/
void Manager::on_pushButton_deleteUser_clicked()
{
    // 获取选中的行
    int curRow = ui->tableView_manager->currentIndex().row();
    // 删除该行
    model->removeRow(curRow);
    int ok = QMessageBox::warning(this,tr("删除当前行!"),
    tr("你确定删除当前行吗？ "),QMessageBox::Yes, QMessageBox::No);
    if(ok == QMessageBox::No)
    {
        // 如果不删除， 则撤销
        model->revertAll();
    }
    else
    {
        // 否则提交， 在数据库中删除该行
        model->submitAll();
    }
}

/************************************************
* 函数名：Widget::on_pushButton_clearOrder_clicked()
* 参数：无
* 返回值：无
* 描述：清除预约信息
************************************************/
void Manager::on_pushButton_clearOrder_clicked()
{
    QSqlQuery query;
    // 删除操作前给出提示信息，方便确认
    QMessageBox:: StandardButton result = QMessageBox::information(nullptr, "Title", "确认清空预约记录？",
                             QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
    switch (result) {
        case QMessageBox::Yes:{
            qDebug()<<"Yes";
            query.exec("delete from order_info");
            QMessageBox::information(nullptr, "Title", "已清空预约!");
            QSqlQuery queryRoom;
            queryRoom.exec("update room_info set room_margin = 20 where room_id = 1");
            queryRoom.exec("update room_info set room_margin = 50 where room_id = 2");
            queryRoom.exec("update room_info set room_margin = 100 where room_id = 3");
            break;
            }
        case QMessageBox::No:
            qDebug()<<"NO";
            break;
        default:
            break;
    }

}

/************************************************
* 函数名：Widget::on_pushButton_modifyUserInfo_clicked()
* 参数：无
* 返回值：无
* 描述：修改用户信息，添加和删除也得点击
************************************************/
void Manager::on_pushButton_updateUserInfo_clicked()
{
    qDebug() << "修改";
    model->database().transaction(); //开始事务操作
    if (model->submitAll())
    {
       qDebug() << "修改ok";
       model->database().commit(); //提交
    }
    else
    {
       model->database().rollback(); //回滚
       QMessageBox::warning(this, tr("tableModel"),
       tr("数据库错误: %1").arg(model->lastError().text()));
    }
}

/************************************************
* 函数名：Widget::on_comboBox_currentIndexChanged(int index)
* 参数：无
* 返回值：无
* 描述：身份下拉框选择
************************************************/
void Manager::on_comboBox_currentIndexChanged(int index)
{
    index = ui->comboBox_identy->currentIndex();
    identityID = index;
    identity = ui->comboBox_identy->currentText();
}
