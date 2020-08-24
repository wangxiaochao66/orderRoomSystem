#include <QApplication>
#include <QDebug>

#include "login.h"
#include "student.h"
#include "teacher.h"
#include "manager.h"
#include "connection.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Login login;
    //login.show();

    if( connectDatabase() )
    {
        qDebug()<<"连接成功"<<endl;
        if(login.exec() == QDialog::Accepted)
        {
            switch (globalIndex) //globalIndex 从connectDatabase()函数中获取
            {
                case 0:{
                    Student stu;
                    stu.show();
                    return a.exec();
                }
                break;
                case 1:{
                    Teacher teacher;
                    teacher.show();
                    return a.exec();
                }
                break;
                case 2:{
                    Manager manager;
                    manager.show();
                    return a.exec();
                }
                break;
                default:
                    break;
            }

        }
    }
    else
    {
        qDebug()<<"连接失败"<<endl;
    }

    return a.exec();
}
