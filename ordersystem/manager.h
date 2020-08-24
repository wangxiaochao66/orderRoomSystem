#ifndef MANAGER_H
#define MANAGER_H

#include <QWidget>
#include <QDebug>
#include <QtWidgets/QMessageBox>
#include <QSqlDatabase>
#include <QDebug>
#include <QSqlQuery>
#include <QSqlError>
#include <QString>
#include <QSqlTableModel>
#include <QCryptographicHash>
#include "global.h"

QT_BEGIN_NAMESPACE
namespace Ui
{
class Manager;
}
QT_END_NAMESPACE
class Manager : public QWidget
{
    Q_OBJECT

public:
     Manager(QWidget *parent = nullptr);
    ~Manager();

private slots:
    void on_pushButton_serchUser_clicked();

    void on_pushButton_updateUserInfo_clicked();

    void on_pushButton_addUser_clicked();

    void on_pushButton_deleteUser_clicked();

    void on_pushButton_clearOrder_clicked();

    void on_pushButton_serchRoomInfo_clicked();

    void on_comboBox_currentIndexChanged(int index);


private:
    Ui::Manager *ui;
    QSqlTableModel *model;
    QSqlTableModel *roomModel;
    QSqlTableModel *orderModel;
    QString identity = "student";
    int identityID = 0;
};

#endif // MANAGER_H
