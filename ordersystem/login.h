#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>
#include <QtWidgets/QMessageBox>
#include <QDebug>
#include <QString>
#include <QSqlQuery>
#include <QCryptographicHash>
#include <global.h>


namespace Ui {
class Login;
}

class Login : public QDialog
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = nullptr);
    ~Login();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Login *ui;
};

#endif // LOGIN_H
