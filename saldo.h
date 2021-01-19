#ifndef SALDO_H
#define SALDO_H

#include <QDialog>
#include "loginok.h"
namespace Ui {
class saldo;
}

class saldo : public QDialog
{
    Q_OBJECT

public:
    explicit saldo(QWidget *parent = 0);
    ~saldo();
    void start();

private slots:
    void on_pushButton_clicked();
    void paivita();

private:
    int timerAika = 30;
    Ui::saldo *ui;
    QTimer *timer;
};

#endif // SALDO_H
