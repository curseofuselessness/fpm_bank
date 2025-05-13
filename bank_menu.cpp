#include "bank_menu.h"
#include "mainwindow.cpp"
#include "ui_bank_menu.h"

extern QString u_name, u_surname, u_password, u_password_tw, u_BAN = "";
QString currency = "BYN";
 long long u_money, temp_money, u_money_BYN;
 double currency_mul = 1;
Bank_menu::Bank_menu(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Bank_menu)
{
    srand(time(0));
    ui->setupUi(this);
    ui->label_name_surname->setText(u_name + " " + u_surname);
    ui->label_bill->setText(QString::number(u_money) + " " + currency);
    int c = 0;
    for(int i = 0; i < 20; i++){
        int temp_r = rand()%10;
        u_BAN += QString::number(temp_r);
        c++;
        if(c==4){
             u_BAN += " ";
            c=0;
        }

    }
    ui->BAN->setText(u_BAN);
}

Bank_menu::~Bank_menu()
{
    delete ui;
}




void Bank_menu::on_addto_btn_clicked()
{

    if(temp_money > 0 and temp_money <= 700000 and u_money + temp_money < 1000000000 ){
        u_money += temp_money;
        u_money_BYN += temp_money / currency_mul;


        ui->label_bill->setText(QString::number(u_money) + " " + currency);
    }
    else{
         QMessageBox::warning(this, "Ошибка", "Некорректная введенная или конечная сумма");
    }


}
//u_money_BYN  = u_money / currency_mul;
// = u_money_BYN * currency_mul;
void Bank_menu::on_take_btn_clicked()
{

    if(temp_money > 0 and temp_money <= 700000 and u_money - temp_money >= 0 ){
        u_money -= temp_money;
         u_money_BYN -= temp_money / currency_mul;

       ui->label_bill->setText(QString::number(u_money) + " " + currency);
    }
    else{
        QMessageBox::warning(this, "Ошибка", "Некорректная введенная или конечная сумма");
    }

}
void Bank_menu::on_enter_sum_line_textChanged(const QString &arg1)
{
    QString temp = arg1;
    temp_money = temp.toInt();
}





void Bank_menu::on_currency_currentTextChanged(const QString &arg1)
{
    // u_money_BYN = u_money / currency_mul;
     currency = arg1;
    if(currency == "BYN") currency_mul = 1;
    if(currency == "USD") currency_mul = 0.33;
    if(currency == "RUB") currency_mul = 27;
    if(currency == "EUR") currency_mul = 0.3;
     u_money = u_money_BYN * currency_mul;

    ui->label_bill->setText(QString::number(u_money) + " " + currency);
}

