/********************************************************************************
** Form generated from reading UI file 'student.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENT_H
#define UI_STUDENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Student
{
public:
    QGroupBox *groupBox;
    QTableWidget *tableWidget_roomMargin;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QComboBox *comboBox_orderDate;
    QComboBox *comboBox_orderTime;
    QComboBox *comboBox_orderRoom;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_applyOrder_checkMargin;
    QPushButton *pushButton_applyOrder;
    QTableView *tableView;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_checkSelfOrder;
    QPushButton *pushButton_checkAllOrder;
    QPushButton *pushButton_cancleOrder;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *Student)
    {
        if (Student->objectName().isEmpty())
            Student->setObjectName(QString::fromUtf8("Student"));
        Student->resize(700, 480);
        Student->setMinimumSize(QSize(700, 480));
        Student->setMaximumSize(QSize(700, 480));
        groupBox = new QGroupBox(Student);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 10, 421, 151));
        tableWidget_roomMargin = new QTableWidget(groupBox);
        if (tableWidget_roomMargin->columnCount() < 4)
            tableWidget_roomMargin->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_roomMargin->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_roomMargin->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_roomMargin->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget_roomMargin->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        if (tableWidget_roomMargin->rowCount() < 3)
            tableWidget_roomMargin->setRowCount(3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget_roomMargin->setVerticalHeaderItem(0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget_roomMargin->setVerticalHeaderItem(1, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget_roomMargin->setVerticalHeaderItem(2, __qtablewidgetitem6);
        tableWidget_roomMargin->setObjectName(QString::fromUtf8("tableWidget_roomMargin"));
        tableWidget_roomMargin->setGeometry(QRect(0, 20, 431, 131));
        widget = new QWidget(Student);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(460, 20, 221, 111));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        comboBox_orderDate = new QComboBox(widget);
        comboBox_orderDate->addItem(QString());
        comboBox_orderDate->addItem(QString());
        comboBox_orderDate->addItem(QString());
        comboBox_orderDate->addItem(QString());
        comboBox_orderDate->addItem(QString());
        comboBox_orderDate->setObjectName(QString::fromUtf8("comboBox_orderDate"));
        comboBox_orderDate->setEditable(false);

        gridLayout->addWidget(comboBox_orderDate, 0, 1, 1, 1);

        comboBox_orderTime = new QComboBox(widget);
        comboBox_orderTime->addItem(QString());
        comboBox_orderTime->addItem(QString());
        comboBox_orderTime->setObjectName(QString::fromUtf8("comboBox_orderTime"));

        gridLayout->addWidget(comboBox_orderTime, 1, 1, 1, 1);

        comboBox_orderRoom = new QComboBox(widget);
        comboBox_orderRoom->addItem(QString());
        comboBox_orderRoom->addItem(QString());
        comboBox_orderRoom->addItem(QString());
        comboBox_orderRoom->setObjectName(QString::fromUtf8("comboBox_orderRoom"));

        gridLayout->addWidget(comboBox_orderRoom, 2, 1, 1, 1);

        widget_2 = new QWidget(Student);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(460, 130, 221, 41));
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton_applyOrder_checkMargin = new QPushButton(widget_2);
        pushButton_applyOrder_checkMargin->setObjectName(QString::fromUtf8("pushButton_applyOrder_checkMargin"));

        horizontalLayout->addWidget(pushButton_applyOrder_checkMargin);

        pushButton_applyOrder = new QPushButton(widget_2);
        pushButton_applyOrder->setObjectName(QString::fromUtf8("pushButton_applyOrder"));

        horizontalLayout->addWidget(pushButton_applyOrder);

        tableView = new QTableView(Student);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(30, 170, 641, 211));
        widget_3 = new QWidget(Student);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setGeometry(QRect(30, 400, 641, 41));
        horizontalLayout_2 = new QHBoxLayout(widget_3);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        pushButton_checkSelfOrder = new QPushButton(widget_3);
        pushButton_checkSelfOrder->setObjectName(QString::fromUtf8("pushButton_checkSelfOrder"));

        horizontalLayout_2->addWidget(pushButton_checkSelfOrder);

        pushButton_checkAllOrder = new QPushButton(widget_3);
        pushButton_checkAllOrder->setObjectName(QString::fromUtf8("pushButton_checkAllOrder"));

        horizontalLayout_2->addWidget(pushButton_checkAllOrder);

        pushButton_cancleOrder = new QPushButton(widget_3);
        pushButton_cancleOrder->setObjectName(QString::fromUtf8("pushButton_cancleOrder"));

        horizontalLayout_2->addWidget(pushButton_cancleOrder);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        retranslateUi(Student);

        QMetaObject::connectSlotsByName(Student);
    } // setupUi

    void retranslateUi(QWidget *Student)
    {
        Student->setWindowTitle(QApplication::translate("Student", "Form", nullptr));
        groupBox->setTitle(QApplication::translate("Student", "\345\221\250\344\270\200\346\234\272\346\210\277\344\275\231\351\207\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_roomMargin->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Student", "\346\234\272\346\210\277ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_roomMargin->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Student", "\346\234\272\346\210\277\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_roomMargin->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("Student", "\344\270\212\345\215\210\344\275\231\351\207\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_roomMargin->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("Student", "\344\270\213\345\215\210\344\275\231\351\207\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_roomMargin->verticalHeaderItem(0);
        ___qtablewidgetitem4->setText(QApplication::translate("Student", "1", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_roomMargin->verticalHeaderItem(1);
        ___qtablewidgetitem5->setText(QApplication::translate("Student", "2", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget_roomMargin->verticalHeaderItem(2);
        ___qtablewidgetitem6->setText(QApplication::translate("Student", "3", nullptr));
        label->setText(QApplication::translate("Student", "\351\242\204\347\272\246\346\227\245\346\234\237", nullptr));
        label_2->setText(QApplication::translate("Student", "\351\242\204\347\272\246\346\227\266\351\227\264", nullptr));
        label_3->setText(QApplication::translate("Student", "\351\242\204\347\272\246\346\234\272\346\210\277", nullptr));
        comboBox_orderDate->setItemText(0, QApplication::translate("Student", "\345\221\250\344\270\200", nullptr));
        comboBox_orderDate->setItemText(1, QApplication::translate("Student", "\345\221\250\344\272\214", nullptr));
        comboBox_orderDate->setItemText(2, QApplication::translate("Student", "\345\221\250\344\270\211", nullptr));
        comboBox_orderDate->setItemText(3, QApplication::translate("Student", "\345\221\250\345\233\233", nullptr));
        comboBox_orderDate->setItemText(4, QApplication::translate("Student", "\345\221\250\344\272\224", nullptr));

        comboBox_orderTime->setItemText(0, QApplication::translate("Student", "\344\270\212\345\215\210", nullptr));
        comboBox_orderTime->setItemText(1, QApplication::translate("Student", "\344\270\213\345\215\210", nullptr));

        comboBox_orderRoom->setItemText(0, QApplication::translate("Student", "1\345\217\267\346\234\272\346\210\277", nullptr));
        comboBox_orderRoom->setItemText(1, QApplication::translate("Student", "2\345\217\267\346\234\272\346\210\277", nullptr));
        comboBox_orderRoom->setItemText(2, QApplication::translate("Student", "3\345\217\267\346\234\272\346\210\277", nullptr));

        pushButton_applyOrder_checkMargin->setText(QApplication::translate("Student", "\346\237\245\347\234\213\346\234\272\346\210\277\344\275\231\351\207\217", nullptr));
        pushButton_applyOrder->setText(QApplication::translate("Student", "\347\224\263\350\257\267\351\242\204\347\272\246", nullptr));
        pushButton_checkSelfOrder->setText(QApplication::translate("Student", "\346\237\245\347\234\213\350\207\252\345\267\261\351\242\204\347\272\246", nullptr));
        pushButton_checkAllOrder->setText(QApplication::translate("Student", "\346\237\245\347\234\213\346\211\200\346\234\211\351\242\204\347\272\246", nullptr));
        pushButton_cancleOrder->setText(QApplication::translate("Student", "\345\217\226\346\266\210\351\242\204\347\272\246\351\242\204\347\272\246", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Student: public Ui_Student {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENT_H
