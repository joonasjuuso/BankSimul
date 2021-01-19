#ifndef LOGINOK_H
#define LOGINOK_H

#include <QDialog>
#include "mainwindow.h"
#include "nostarahaa.h"
#include "saldo.h"
#include "siirrarahaa.h"
#include "tilitapahtumat.h"
#include <QTimer>
#include <QDebug>


namespace Ui {
class loginOk;
}

class loginOk : public QDialog
{
    Q_OBJECT

public:
    explicit loginOk(QWidget *parent = 0);
    ~loginOk();
    void start();

private slots:
    void paivita();
    void on_pushButton_5_clicked();

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_2_clicked();

private:
    int timerAika=30;
    Ui::loginOk *ui;
    QTimer *timer;
};

#endif // LOGINOK_H
