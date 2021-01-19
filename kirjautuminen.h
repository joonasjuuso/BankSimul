#ifndef KIRJAUTUMINEN_H
#define KIRJAUTUMINEN_H

#include <QDialog>
#include "rfid.h"
#include <QDebug>
#include "loginok.h"
#include <QtGui>
#include <QtCore>
#include <QWidget>
#include <QChar>
#include <QEvent>
#include <QApplication>
#include <QValidator>
#include <string>
#include <sstream>
#include <vector>
namespace Ui {
class kirjautuminen;
}

class kirjautuminen : public QDialog
{
    Q_OBJECT

public:
    explicit kirjautuminen(QWidget *parent = nullptr);
    ~kirjautuminen();

    void testi();
    void checkNum();
public slots:


private slots:
    void kortinluku();
    void receivedNMBR();
    void nmrfunc();


    void on_panelButton_1_clicked();

    void on_panelButton_2_clicked();

    void on_panelButton_3_clicked();

    void on_panelButton_4_clicked();

    void on_panelButton_5_clicked();

    void on_panelButton_6_clicked();

    void on_panelButton_7_clicked();

    void on_panelButton_8_clicked();

    void on_panelButton_9_clicked();

    void on_panelButton_0_clicked();

    void on_pushButtonRESET_clicked();

signals:
    void numerosaatu();

private:
    int pin[4] = { 1,2,3,4 };
    kirjautuminen *ok;
    Ui::kirjautuminen *ui;
    Rfid * luekortti;
    QString kortinNumero;

};

#endif // KIRJAUTUMINEN_H
