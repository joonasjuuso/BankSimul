#ifndef SIIRRARAHAA_H
#define SIIRRARAHAA_H

#include <QDialog>
#include "loginok.h"

namespace Ui {
class siirrarahaa;
}

class siirrarahaa : public QDialog
{
    Q_OBJECT

public:
    explicit siirrarahaa(QWidget *parent = 0);
    ~siirrarahaa();
    void start();

private slots:
    void paivita();
    void on_pushButton_clicked();

    void on_lineEdit_textEdited(const QString &arg1);

    void on_lineEdit_2_textEdited(const QString &arg1);

    void on_checkBox_stateChanged(int arg1);

    void on_pushButton_2_clicked();

private:
    int timerAika=10;
    Ui::siirrarahaa *ui;
    QTimer *timer;
};

#endif // SIIRRARAHAA_H
