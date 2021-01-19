#include "saldo.h"
#include "ui_saldo.h"

saldo::saldo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::saldo)
{
    ui->setupUi(this);
    timer = new QTimer(this);
    timer->setInterval(1000);
    connect(timer, SIGNAL(timeout()),this, SLOT(paivita()));
}

saldo::~saldo()
{
    delete ui;
    delete timer;
}

void saldo::start()
{
    timer->start();
}


void saldo::on_pushButton_clicked()
{
    timer->stop();
    this->hide();
    loginOk *ok = new(loginOk);
    ok->show();
    ok->start();
}

void saldo::paivita()
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

