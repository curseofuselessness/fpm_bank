/********************************************************************************
** Form generated from reading UI file 'bank_menu.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BANK_MENU_H
#define UI_BANK_MENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Bank_menu
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;

    void setupUi(QWidget *Bank_menu)
    {
        if (Bank_menu->objectName().isEmpty())
            Bank_menu->setObjectName("Bank_menu");
        Bank_menu->resize(800, 600);
        Bank_menu->setMinimumSize(QSize(800, 600));
        Bank_menu->setMaximumSize(QSize(800, 600));
        gridLayoutWidget = new QWidget(Bank_menu);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(0, 0, 801, 601));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);

        retranslateUi(Bank_menu);

        QMetaObject::connectSlotsByName(Bank_menu);
    } // setupUi

    void retranslateUi(QWidget *Bank_menu)
    {
        Bank_menu->setWindowTitle(QCoreApplication::translate("Bank_menu", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Bank_menu: public Ui_Bank_menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BANK_MENU_H
