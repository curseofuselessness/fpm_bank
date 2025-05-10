#include "bank_menu.h"
#include "ui_bank_menu.h"

Bank_menu::Bank_menu(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Bank_menu)
{
    ui->setupUi(this);
}

Bank_menu::~Bank_menu()
{
    delete ui;
}
