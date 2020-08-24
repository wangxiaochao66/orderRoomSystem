#include "login.h"
#include "ui_login.h"



Login::Login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
}

Login::~Login()
{
    delete ui;
}

/************************************************
* 函数名：Widget::on_pushButton_clicked()
* 参数：无
* 返回值：无
* 描述：登录按钮槽函数
************************************************/
void Login::on_pushButton_clicked()
{
    //qDebug()<<"login";

    QString userPWD;    // 对话框中的密码
    QString truePWD;    // 数据库中的密码
    QString identity;

    // 获取对话框中的密码
    userPWD = ui->lineEdit_userpwd->text();

    // 从数据库中获取密码
    QSqlQuery query;
    //预处理
    query.prepare("select pwd,identity,name from user_info where user_id = ?");

    //获取输入的userid
    QString user_id = ui->lineEdit_userid->text();
    userID = user_id;

    //"select pwd,identity,name from user_info where user_id = user_id"
    query.addBindValue(user_id);
    query.exec();
    query.next();
    truePWD = query.value(0).toString();
    identity = query.value(1).toString();

    QString user_name = query.value(2).toString();
    // 对密码进行MD5加密
    QString pwdMD5;
    QByteArray str;
    str = QCryptographicHash::hash(userPWD.toLatin1(), QCryptographicHash::Md5);
    pwdMD5.append(str.toHex());
//    qDebug() << pwdMD5;

    // 根据用户身份确认接下来打开的窗口
    if(identity == "student"){
        globalIndex = 0;
    }
    else if(identity == "teacher"){
        globalIndex = 1;
    }
    else {
        globalIndex = 2;
    }

    if(userPWD != NULL && truePWD == pwdMD5){
        qDebug() << "登录";
        userName = user_name;   // 如果登录成功，则赋给全局变量后面用
        accept();
    }
    else{
        QMessageBox::warning(this, "waring", "用户名或密码错误！", QMessageBox::Yes);
    }
}
