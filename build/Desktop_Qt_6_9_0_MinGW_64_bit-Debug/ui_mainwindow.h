/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTextBrowser *textBrowser;
    QPushButton *ready_btn;
    QGroupBox *reg_lines;
    QPushButton *show_pass_tw;
    QPushButton *show_pass;
    QSplitter *splitter;
    QLineEdit *enter_name_line;
    QLineEdit *enter_surname_line;
    QLineEdit *enter_pass_line;
    QLineEdit *enter_pass_twice_line_2;
    QLabel *label_4;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        MainWindow->setMinimumSize(QSize(800, 600));
        MainWindow->setMaximumSize(QSize(800, 600));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(250, 70, 291, 81));
        textBrowser->setVerticalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAlwaysOff);
        textBrowser->setHorizontalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAlwaysOff);
        ready_btn = new QPushButton(centralwidget);
        ready_btn->setObjectName("ready_btn");
        ready_btn->setGeometry(QRect(310, 380, 181, 71));
        ready_btn->setAutoFillBackground(false);
        reg_lines = new QGroupBox(centralwidget);
        reg_lines->setObjectName("reg_lines");
        reg_lines->setGeometry(QRect(100, 180, 531, 171));
        reg_lines->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        reg_lines->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        reg_lines->setFlat(false);
        show_pass_tw = new QPushButton(reg_lines);
        show_pass_tw->setObjectName("show_pass_tw");
        show_pass_tw->setGeometry(QRect(410, 120, 81, 18));
        show_pass = new QPushButton(reg_lines);
        show_pass->setObjectName("show_pass");
        show_pass->setGeometry(QRect(410, 90, 81, 18));
        splitter = new QSplitter(reg_lines);
        splitter->setObjectName("splitter");
        splitter->setGeometry(QRect(220, 30, 179, 118));
        splitter->setMaximumSize(QSize(16777215, 142));
        splitter->setOrientation(Qt::Orientation::Vertical);
        splitter->setHandleWidth(10);
        enter_name_line = new QLineEdit(splitter);
        enter_name_line->setObjectName("enter_name_line");
        enter_name_line->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(100);
        sizePolicy.setVerticalStretch(50);
        sizePolicy.setHeightForWidth(enter_name_line->sizePolicy().hasHeightForWidth());
        enter_name_line->setSizePolicy(sizePolicy);
        enter_name_line->setMaxLength(20);
        splitter->addWidget(enter_name_line);
        enter_surname_line = new QLineEdit(splitter);
        enter_surname_line->setObjectName("enter_surname_line");
        sizePolicy.setHeightForWidth(enter_surname_line->sizePolicy().hasHeightForWidth());
        enter_surname_line->setSizePolicy(sizePolicy);
        enter_surname_line->setMaxLength(20);
        splitter->addWidget(enter_surname_line);
        enter_pass_line = new QLineEdit(splitter);
        enter_pass_line->setObjectName("enter_pass_line");
        sizePolicy.setHeightForWidth(enter_pass_line->sizePolicy().hasHeightForWidth());
        enter_pass_line->setSizePolicy(sizePolicy);
        enter_pass_line->setMaxLength(20);
        enter_pass_line->setEchoMode(QLineEdit::EchoMode::Password);
        splitter->addWidget(enter_pass_line);
        enter_pass_twice_line_2 = new QLineEdit(splitter);
        enter_pass_twice_line_2->setObjectName("enter_pass_twice_line_2");
        sizePolicy.setHeightForWidth(enter_pass_twice_line_2->sizePolicy().hasHeightForWidth());
        enter_pass_twice_line_2->setSizePolicy(sizePolicy);
        enter_pass_twice_line_2->setMaxLength(20);
        enter_pass_twice_line_2->setEchoMode(QLineEdit::EchoMode::Password);
        splitter->addWidget(enter_pass_twice_line_2);
        label_4 = new QLabel(reg_lines);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(0, 120, 211, 21));
        label = new QLabel(reg_lines);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 30, 211, 21));
        label_2 = new QLabel(reg_lines);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(0, 60, 211, 21));
        label_3 = new QLabel(reg_lines);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(0, 90, 211, 21));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "FPM Bank", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt; font-weight:700;\">\320\224\320\276\320\261\321\200\321\213\320\271 \320\264\320\265\320\275\321\214, \320\227\320\260\321\200\320\265\320\263\320\270\321\201\321\202\321\200\320\270\321\200\321\203\320\271\321\202\320\265\321\201\321\214!</span></p></body></html>", nullptr));
        ready_btn->setText(QCoreApplication::translate("MainWindow", "\320\223\320\276\321\202\320\276\320\262\320\276", nullptr));
        reg_lines->setTitle(QString());
        show_pass_tw->setText(QCoreApplication::translate("MainWindow", "\320\277\320\276\320\272\320\260\320\267\320\260\321\202\321\214", nullptr));
        show_pass->setText(QCoreApplication::translate("MainWindow", "\320\277\320\276\320\272\320\260\320\267\320\260\321\202\321\214", nullptr));
        enter_name_line->setText(QString());
        enter_surname_line->setText(QString());
        enter_pass_line->setText(QString());
        enter_pass_twice_line_2->setText(QString());
        label_4->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt; font-weight:700;\">\320\237\320\276\320\262\321\202\320\276\321\200\320\270\321\202\320\265 \320\277\320\260\321\200\320\276\320\273\321\214</span></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt; font-weight:700;\">\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\262\320\260\321\210\320\265 \320\270\320\274\321\217</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt; font-weight:700;\">\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\262\320\260\321\210\321\203 \321\204\320\260\320\274\320\270\320\273\320\270\321\216</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt; font-weight:700;\">\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\277\320\260\321\200\320\276\320\273\321\214</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
