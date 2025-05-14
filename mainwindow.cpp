#include "mainwindow.h"
//#include "ui_bank_menu.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QMessageBox>
//extern
 QString u_name, u_surname, u_password, u_password_tw;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    QPixmap bkgnd("glavka.jpg");
    // Масштабируем изображение под размер окна с сохранением пропорций (обрезая лишнее)
    bkgnd = bkgnd.scaled(800, 600, Qt::KeepAspectRatioByExpanding, Qt::SmoothTransformation);
    QPalette palette;
    palette.setBrush(QPalette::Window, bkgnd);

    this->setPalette(palette);


    this->setStyleSheet(
        "QPushButton {"
        "   background-color: rgba(255, 255, 255, 70%);"
        "   color: black;"
        "   border: 1px solid gray;"
        "}"
        "QPushButton:hover {"
        "   background-color: rgba(255, 255, 255, 70%);"
        "}"
        "QPushButton:pressed {"
        "   background-color: rgba(255, 255, 255, 50%);"
        "}"

        // Стиль для QLabel
        "QLabel {"
        "   background-color: rgba(255, 255, 255, 75%);"  // Полупрозрачный белый фон
        "   color: black;"                  // Чёрный текст
        "}"

        // Стиль для QTextBrowser
        "QTextBrowser {"
        "   color: black;"                  // Чёрный текст
        "   background-color: rgba(255, 255, 255, 75%);"  // Полупрозрачный фон
        "   border: 1px solid gray;"        // Граница (опционально)
        "}"
        "QMessageBox {"
        "   background-color: rgba(255, 255, 255, 100%);"
        "   color: white;"
        "   border: 1px solid gray;"
        "}"

        "QSplitter::handle {"
        "   background: transparent;"  // Прозрачный разделитель
        "}"
        );



    /*

    QPalette P1;
    P1.setBrush(QPalette::Window,QBrush(QPixmap("glavka.jpg")));
    setPalette(P1);

     */


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
    qDebug() << u_password << " *";
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



