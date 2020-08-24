/********************************************************************************
** Form generated from reading UI file 'manager.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGER_H
#define UI_MANAGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Manager
{
public:
    QTableView *tableView_manager;
    QWidget *widget;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_serchRoomInfo;
    QPushButton *pushButton_clearOrder;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton_serchUser;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;
    QPushButton *pushButton_deleteUser;
    QPushButton *pushButton_addUser;
    QPushButton *pushButton_updateUserInfo;
    QSpacerItem *horizontalSpacer_3;
    QGroupBox *groupBox;
    QWidget *widget_2;
    QGridLayout *gridLayout_2;
    QLabel *label_4;
    QLineEdit *lineEdit_name;
    QComboBox *comboBox_identy;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label;
    QLabel *label_3;
    QLineEdit *lineEdit_pwd;
    QLineEdit *lineEdit_number;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_5;

    void setupUi(QWidget *Manager)
    {
        if (Manager->objectName().isEmpty())
            Manager->setObjectName(QString::fromUtf8("Manager"));
        Manager->resize(640, 480);
        Manager->setMinimumSize(QSize(640, 480));
        Manager->setMaximumSize(QSize(640, 480));
        tableView_manager = new QTableView(Manager);
        tableView_manager->setObjectName(QString::fromUtf8("tableView_manager"));
        tableView_manager->setGeometry(QRect(15, 31, 610, 240));
        tableView_manager->setMinimumSize(QSize(610, 240));
        tableView_manager->setMaximumSize(QSize(610, 240));
        widget = new QWidget(Manager);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(330, 300, 281, 161));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 0, 1, 1);

        pushButton_serchRoomInfo = new QPushButton(widget);
        pushButton_serchRoomInfo->setObjectName(QString::fromUtf8("pushButton_serchRoomInfo"));
        pushButton_serchRoomInfo->setMinimumSize(QSize(90, 30));
        pushButton_serchRoomInfo->setMaximumSize(QSize(90, 30));

        gridLayout->addWidget(pushButton_serchRoomInfo, 2, 3, 1, 1);

        pushButton_clearOrder = new QPushButton(widget);
        pushButton_clearOrder->setObjectName(QString::fromUtf8("pushButton_clearOrder"));
        pushButton_clearOrder->setMinimumSize(QSize(90, 30));
        pushButton_clearOrder->setMaximumSize(QSize(90, 30));

        gridLayout->addWidget(pushButton_clearOrder, 4, 3, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 1, 1, 1);

        pushButton_serchUser = new QPushButton(widget);
        pushButton_serchUser->setObjectName(QString::fromUtf8("pushButton_serchUser"));
        pushButton_serchUser->setMinimumSize(QSize(90, 30));
        pushButton_serchUser->setMaximumSize(QSize(90, 30));

        gridLayout->addWidget(pushButton_serchUser, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 2, 4, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 3, 3, 1, 1);

        pushButton_deleteUser = new QPushButton(widget);
        pushButton_deleteUser->setObjectName(QString::fromUtf8("pushButton_deleteUser"));
        pushButton_deleteUser->setMinimumSize(QSize(90, 30));
        pushButton_deleteUser->setMaximumSize(QSize(90, 30));

        gridLayout->addWidget(pushButton_deleteUser, 2, 1, 1, 1);

        pushButton_addUser = new QPushButton(widget);
        pushButton_addUser->setObjectName(QString::fromUtf8("pushButton_addUser"));
        pushButton_addUser->setMinimumSize(QSize(90, 30));
        pushButton_addUser->setMaximumSize(QSize(90, 30));

        gridLayout->addWidget(pushButton_addUser, 4, 1, 1, 1);

        pushButton_updateUserInfo = new QPushButton(widget);
        pushButton_updateUserInfo->setObjectName(QString::fromUtf8("pushButton_updateUserInfo"));
        pushButton_updateUserInfo->setMinimumSize(QSize(90, 30));
        pushButton_updateUserInfo->setMaximumSize(QSize(90, 30));

        gridLayout->addWidget(pushButton_updateUserInfo, 0, 3, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 2, 2, 1, 1);

        groupBox = new QGroupBox(Manager);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(40, 290, 241, 181));
        widget_2 = new QWidget(groupBox);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(10, 20, 221, 151));
        gridLayout_2 = new QGridLayout(widget_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_4 = new QLabel(widget_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 3, 1, 1, 1);

        lineEdit_name = new QLineEdit(widget_2);
        lineEdit_name->setObjectName(QString::fromUtf8("lineEdit_name"));

        gridLayout_2->addWidget(lineEdit_name, 1, 2, 1, 1);

        comboBox_identy = new QComboBox(widget_2);
        comboBox_identy->addItem(QString());
        comboBox_identy->addItem(QString());
        comboBox_identy->addItem(QString());
        comboBox_identy->setObjectName(QString::fromUtf8("comboBox_identy"));

        gridLayout_2->addWidget(comboBox_identy, 3, 2, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_4, 2, 0, 1, 1);

        label = new QLabel(widget_2);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 0, 1, 1, 1);

        label_3 = new QLabel(widget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 2, 1, 1, 1);

        lineEdit_pwd = new QLineEdit(widget_2);
        lineEdit_pwd->setObjectName(QString::fromUtf8("lineEdit_pwd"));

        gridLayout_2->addWidget(lineEdit_pwd, 2, 2, 1, 1);

        lineEdit_number = new QLineEdit(widget_2);
        lineEdit_number->setObjectName(QString::fromUtf8("lineEdit_number"));

        gridLayout_2->addWidget(lineEdit_number, 0, 2, 1, 1);

        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 1, 1, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_5, 2, 3, 1, 1);


        retranslateUi(Manager);

        QMetaObject::connectSlotsByName(Manager);
    } // setupUi

    void retranslateUi(QWidget *Manager)
    {
        Manager->setWindowTitle(QApplication::translate("Manager", "Form", nullptr));
        pushButton_serchRoomInfo->setText(QApplication::translate("Manager", "\346\237\245\347\234\213\346\234\272\346\210\277\344\277\241\346\201\257", nullptr));
        pushButton_clearOrder->setText(QApplication::translate("Manager", "\346\270\205\347\251\272\351\242\204\347\272\246", nullptr));
        pushButton_serchUser->setText(QApplication::translate("Manager", "\346\237\245\350\257\242\347\224\250\346\210\267", nullptr));
        pushButton_deleteUser->setText(QApplication::translate("Manager", "\345\210\240\351\231\244\347\224\250\346\210\267", nullptr));
        pushButton_addUser->setText(QApplication::translate("Manager", "\346\267\273\345\212\240\347\224\250\346\210\267", nullptr));
        pushButton_updateUserInfo->setText(QApplication::translate("Manager", "\344\277\256\346\224\271\347\224\250\346\210\267\344\277\241\346\201\257", nullptr));
        groupBox->setTitle(QApplication::translate("Manager", "\346\267\273\345\212\240\347\224\250\346\210\267\344\277\241\346\201\257", nullptr));
        label_4->setText(QApplication::translate("Manager", "\350\272\253 \344\273\275\357\274\232", nullptr));
        comboBox_identy->setItemText(0, QApplication::translate("Manager", "student", nullptr));
        comboBox_identy->setItemText(1, QApplication::translate("Manager", "teacher", nullptr));
        comboBox_identy->setItemText(2, QApplication::translate("Manager", "manager", nullptr));

        label->setText(QApplication::translate("Manager", "\345\255\246 \345\217\267\357\274\232", nullptr));
        label_3->setText(QApplication::translate("Manager", "\345\257\206 \347\240\201\357\274\232", nullptr));
        label_2->setText(QApplication::translate("Manager", "\345\247\223 \345\220\215\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Manager: public Ui_Manager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGER_H
