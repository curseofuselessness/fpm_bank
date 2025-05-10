#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QRegularExpression>
#include "bank_menu.h"


QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    bool isPasswordValid(const QString &password) {
        QRegularExpression regex("^(?=.*[A-Z])(?=.*[a-z])(?=.*\\d)[A-Za-z\\d@$!%*?&]{4,}$");
         QRegularExpressionMatch match = regex.match(password);
        return match.hasMatch();
    }
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_enter_name_line_textChanged(const QString &arg1);

    void on_enter_surname_line_textChanged(const QString &arg1);

    void on_enter_pass_line_textChanged(const QString &arg1);

    void on_enter_pass_twice_line_textEdited(const QString &arg1);

    void on_ready_btn_clicked();

    void on_show_pass_pressed();

    void on_show_pass_released();

    void on_show_pass_tw_pressed();

    void on_show_pass_tw_released();

    void on_enter_pass_twice_line_2_textChanged(const QString &arg1);

protected:
    //bool eventFilter(QObject *watched, QEvent *event);
private:

    Ui::MainWindow *ui;
    Bank_menu *w2;
};
#endif // MAINWINDOW_H
