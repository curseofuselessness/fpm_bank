/********************************************************************************
** Form generated from reading UI file 'bank_menu.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BANK_MENU_H
#define UI_BANK_MENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Bank_menu
{
public:
    QLabel *label_name_surname;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *addto_btn;
    QPushButton *take_btn;
    QLabel *BAN;
    QLabel *label_bill;
    QLabel *label_5;
    QLineEdit *enter_sum_line;
    QLabel *label_6;

    void setupUi(QWidget *Bank_menu)
    {
        if (Bank_menu->objectName().isEmpty())
            Bank_menu->setObjectName("Bank_menu");
        Bank_menu->resize(800, 600);
        Bank_menu->setMinimumSize(QSize(800, 600));
        Bank_menu->setMaximumSize(QSize(800, 600));
        label_name_surname = new QLabel(Bank_menu);
        label_name_surname->setObjectName("label_name_surname");
        label_name_surname->setGeometry(QRect(270, 20, 381, 41));
        QFont font;
        font.setPointSize(24);
        font.setBold(true);
        font.setItalic(true);
        label_name_surname->setFont(font);
        label = new QLabel(Bank_menu);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 90, 291, 51));
        QFont font1;
        font1.setPointSize(26);
        label->setFont(font1);
        label_2 = new QLabel(Bank_menu);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(440, 90, 291, 51));
        QFont font2;
        font2.setPointSize(22);
        label_2->setFont(font2);
        label_3 = new QLabel(Bank_menu);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(90, 210, 151, 51));
        QFont font3;
        font3.setPointSize(16);
        label_3->setFont(font3);
        addto_btn = new QPushButton(Bank_menu);
        addto_btn->setObjectName("addto_btn");
        addto_btn->setGeometry(QRect(190, 290, 171, 81));
        QFont font4;
        font4.setPointSize(18);
        font4.setItalic(true);
        addto_btn->setFont(font4);
        take_btn = new QPushButton(Bank_menu);
        take_btn->setObjectName("take_btn");
        take_btn->setGeometry(QRect(410, 290, 171, 81));
        take_btn->setFont(font4);
        BAN = new QLabel(Bank_menu);
        BAN->setObjectName("BAN");
        BAN->setGeometry(QRect(340, 550, 651, 41));
        QFont font5;
        font5.setPointSize(16);
        font5.setBold(true);
        BAN->setFont(font5);
        label_bill = new QLabel(Bank_menu);
        label_bill->setObjectName("label_bill");
        label_bill->setGeometry(QRect(320, 80, 411, 71));
        QFont font6;
        font6.setPointSize(36);
        font6.setBold(true);
        label_bill->setFont(font6);
        label_5 = new QLabel(Bank_menu);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(20, 30, 231, 31));
        QFont font7;
        font7.setPointSize(18);
        label_5->setFont(font7);
        enter_sum_line = new QLineEdit(Bank_menu);
        enter_sum_line->setObjectName("enter_sum_line");
        enter_sum_line->setGeometry(QRect(250, 210, 291, 51));
        QFont font8;
        font8.setPointSize(16);
        font8.setBold(false);
        enter_sum_line->setFont(font8);
        label_6 = new QLabel(Bank_menu);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(10, 550, 331, 41));
        label_6->setFont(font5);

        retranslateUi(Bank_menu);

        QMetaObject::connectSlotsByName(Bank_menu);
    } // setupUi

    void retranslateUi(QWidget *Bank_menu)
    {
        Bank_menu->setWindowTitle(QCoreApplication::translate("Bank_menu", "\320\233\320\270\321\207\320\275\321\213\320\271 \320\272\320\260\320\261\320\270\320\275\320\265\321\202", nullptr));
        label_name_surname->setText(QCoreApplication::translate("Bank_menu", "name_p", nullptr));
        label->setText(QCoreApplication::translate("Bank_menu", "\320\236\321\201\321\202\320\260\321\202\320\276\320\272 \320\275\320\260 \321\201\321\207\321\221\321\202\320\265:", nullptr));
        label_2->setText(QString());
        label_3->setText(QCoreApplication::translate("Bank_menu", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\201\321\203\320\274\320\274\321\203:", nullptr));
        addto_btn->setText(QCoreApplication::translate("Bank_menu", "\320\237\320\276\320\273\320\276\320\266\320\270\321\202\321\214", nullptr));
        take_btn->setText(QCoreApplication::translate("Bank_menu", "\320\241\320\275\321\217\321\202\321\214", nullptr));
        BAN->setText(QCoreApplication::translate("Bank_menu", "1234 1234 1234 1234", nullptr));
        label_bill->setText(QCoreApplication::translate("Bank_menu", "0 ", nullptr));
        label_5->setText(QCoreApplication::translate("Bank_menu", "\320\224\320\276\320\261\321\200\320\276 \320\277\320\276\320\266\320\260\320\273\320\276\320\262\320\260\321\202\321\214,", nullptr));
        label_6->setText(QCoreApplication::translate("Bank_menu", "\320\222\320\260\321\210 \321\203\320\275\320\270\320\272\320\260\320\273\321\214\320\275\321\213\320\271 \320\275\320\276\320\274\320\265\321\200 \321\201\321\207\321\221\321\202\320\260:  ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Bank_menu: public Ui_Bank_menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BANK_MENU_H
