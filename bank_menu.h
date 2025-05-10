#ifndef BANK_MENU_H
#define BANK_MENU_H

#include <QWidget>

namespace Ui {
class Bank_menu;
}

class Bank_menu : public QWidget
{
    Q_OBJECT

public:
    explicit Bank_menu(QWidget *parent = nullptr);
    ~Bank_menu();

private:
    Ui::Bank_menu *ui;
};

#endif // BANK_MENU_H
