#include "nostarahaa.h"
#include "ui_nostarahaa.h"

nostarahaa::nostarahaa(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::nostarahaa)
{
    ui->setupUi(this);
    timer = new QTimer(this);
    timer->setInterval(1000);
    connect(timer, SIGNAL(timeout()),this, SLOT(paivita()));
}

nostarahaa::~nostarahaa()
{
    delete ui;
    delete timer;
}

void nostarahaa::paivita()
{
    --timerAika;
    qDebug()<<timerAika;
    if(timerAika==0)
    {
        timer->stop();
        this->hide();
        loginOk *takaisin = new(loginOk);
        takaisin->show();
        takaisin->start();
    }
}

void nostarahaa::start()
{
    timer->start();
}

void nostarahaa::on_pushButton_9_clicked()
{
    timer->stop();
    this->hide();
    loginOk *ok = new(loginOk);
    ok->show();
    ok->start();
}

void nostarahaa::on_pushButton_clicked()
{
    timer->stop();
    timerAika=10;
    timer->start();
}

void nostarahaa::on_pushButton_4_clicked()
{
    timer->stop();
    timerAika=10;
    timer->start();
}

void nostarahaa::on_pushButton_2_clicked()
{
    timer->stop();
    timerAika=10;
    timer->start();
}

void nostarahaa::on_pushButton_5_clicked()
{
    timer->stop();
    timerAika=10;
    timer->start();
}

void nostarahaa::on_pushButton_3_clicked()
{
    timer->stop();
    timerAika=10;
    timer->start();
}

void nostarahaa::on_pushButton_6_clicked()
{
    timer->stop();
    timerAika=10;
    timer->start();
}
