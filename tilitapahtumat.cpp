#include "tilitapahtumat.h"
#include "ui_tilitapahtumat.h"

tilitapahtumat::tilitapahtumat(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tilitapahtumat)
{
    ui->setupUi(this);
    timer = new QTimer(this);
    timer->setInterval(1000);
    connect(timer, SIGNAL(timeout()),this, SLOT(paivita()));
}

tilitapahtumat::~tilitapahtumat()
{
    delete ui;
    delete timer;
}

void tilitapahtumat::paivita()
{
    --timerAika;
    qDebug()<<timerAika;
    if(timerAika==0)
    {
        timer->stop();
        this->hide();
        MainWindow *takaisin = new(MainWindow);
        takaisin->show();
    }
}

void tilitapahtumat::on_pushButton_9_clicked()
{
    timer->stop();
    this->hide();
    loginOk *ok = new(loginOk);
    ok->show();
    ok->start();
}

void tilitapahtumat::start()
{
    timer->start();
}

void tilitapahtumat::on_pushButton_clicked()
{
    timer->stop();
    timerAika=30;
    timer->start();
}


void tilitapahtumat::on_pushButton_2_clicked()
{
    timer->stop();
    timerAika=30;
    timer->start();
}

void tilitapahtumat::on_pushButton_3_clicked()
{
    timer->stop();
    timerAika=30;
    timer->start();
}
