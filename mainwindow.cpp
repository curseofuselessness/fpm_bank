#include "mainwindow.h"
#include "ui_bank_menu.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QMessageBox>
//extern
 QString u_name, u_surname, u_password, u_password_tw;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
   // qApp->installEventFilter(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_enter_name_line_textChanged(const QString &arg1)
{
    u_name = arg1;

}
void MainWindow::on_enter_surname_line_textChanged(const QString &arg1)
{
    u_surname = arg1;
}

void MainWindow::on_enter_pass_line_textChanged(const QString &arg1)
{
    u_password = arg1;
    qDebug() << u_password << " f";
}

void MainWindow::on_enter_pass_twice_line_2_textChanged(const QString &arg1)
{
    u_password_tw = arg1;
    qDebug() << u_password_tw;
}
void MainWindow::on_enter_pass_twice_line_textEdited(const QString &arg1)
{
    u_password_tw = arg1;
    qDebug() << u_password_tw;
}

void MainWindow::on_ready_btn_clicked()
{
    if(u_name != nullptr and u_surname != nullptr and u_password != nullptr and u_password_tw != nullptr)
    {
        if(u_password == u_password_tw){
            if(isPasswordValid(u_password)){
                ui->ready_btn->setText("Принято!");
                hide();
                w2 = new Bank_menu();
                w2->show();
                // переход к новому окну
            }
            else{

                QMessageBox::warning(this, "Ошибка", "Пароль должен содержать от 5 символов, включая минимум 1 заглавную букву, 1 строчную и 1 цифру, используя только латинские буквы!");
            }

        }
        else{
            QMessageBox::warning(this, "Ошибка", "Пароли не совпадают!");
        }
    }
    else{
        QMessageBox::warning(this, "Ошибка", "Не оставляйте пустых форм!");
    }
}


void MainWindow::on_show_pass_pressed()
{
    ui->enter_pass_line->setEchoMode(QLineEdit::Normal);
}


void MainWindow::on_show_pass_released()
{
    ui->enter_pass_line->setEchoMode(QLineEdit::Password);
}


void MainWindow::on_show_pass_tw_pressed()
{
    ui->enter_pass_twice_line_2->setEchoMode(QLineEdit::Normal);
}


void MainWindow::on_show_pass_tw_released()
{
    ui->enter_pass_twice_line_2->setEchoMode(QLineEdit::Password);
}



/* bool MainWindow::eventFilter(QObject *watched, QEvent *event)
{
     QObject::eventFilter(watched, event);

}
*/



