#include "kirjautuminen.h"
#include "ui_kirjautuminen.h"

kirjautuminen::kirjautuminen(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::kirjautuminen)
{
    ui->setupUi(this);
    luekortti = new Rfid;
    luekortti->yhdista();
    qDebug()<<pin;
    connect(luekortti, SIGNAL(sigLue()), this, SLOT(kortinluku()));
    ui->ekaNumero->hide();
    ui->tokaNumero->hide();
    ui->kolmasNumero->hide();
    ui->neljasNumero->hide();


}



kirjautuminen::~kirjautuminen()
{
    delete ui;
}


void kirjautuminen::kortinluku()
{

}

void kirjautuminen::receivedNMBR()
{
    emit numerosaatu();
}

void kirjautuminen::nmrfunc()
{
    ui->label->setText(kortinNumero);
    qDebug() << kortinNumero;
}



void kirjautuminen::testi()
{
    kortinNumero = luekortti->readCard();
    ui->label->setText("kortti");
    qDebug() << kortinNumero;

    connect(this, SIGNAL(numerosaatu()), this, SLOT(nmrfunc()));
}




void kirjautuminen::on_panelButton_1_clicked()
{
    if(ui->ekaNumero->value() == 10)
    {
        ui->ekaNumero->setValue(1);
        ui->ekaNumero->show();
        return;
    }
    if(ui->tokaNumero->value() == 10)
    {
        ui->tokaNumero->setValue(1);
        ui->tokaNumero->show();
        return;
    }
    if(ui->kolmasNumero->value() == 10)
    {
        ui->kolmasNumero->setValue(1);
        ui->kolmasNumero->show();
        return;
    }
    if(ui->neljasNumero->value() == 10)
    {
        ui->neljasNumero->setValue(1);
        ui->neljasNumero->show();
        return;
    }

}

void kirjautuminen::on_panelButton_2_clicked()
{
    if(ui->ekaNumero->value() == 10)
    {
        ui->ekaNumero->setValue(2);
        ui->ekaNumero->show();
        return;
    }
    if(ui->tokaNumero->value() == 10)
    {
        ui->tokaNumero->setValue(2);
        ui->tokaNumero->show();
        return;
    }
    if(ui->kolmasNumero->value() == 10)
    {
        ui->kolmasNumero->setValue(2);
        ui->kolmasNumero->show();
        return;
    }
    if(ui->neljasNumero->value() == 10)
    {
        ui->neljasNumero->setValue(2);
        ui->neljasNumero->show();
        return;
    }
}

void kirjautuminen::on_panelButton_3_clicked()
{
    if(ui->ekaNumero->value() == 10)
    {
        ui->ekaNumero->setValue(3);
        ui->ekaNumero->show();
        return;
    }
    if(ui->tokaNumero->value() == 10)
    {
        ui->tokaNumero->setValue(3);
        ui->tokaNumero->show();
        return;
    }
    if(ui->kolmasNumero->value() == 10)
    {
        ui->kolmasNumero->setValue(3);
        ui->kolmasNumero->show();
        return;
    }
    if(ui->neljasNumero->value() == 10)
    {
        ui->neljasNumero->setValue(3);
        ui->neljasNumero->show();
        return;
    }
}

void kirjautuminen::on_panelButton_4_clicked()
{
    if(ui->ekaNumero->value() == 10)
    {
        ui->ekaNumero->setValue(4);
        ui->ekaNumero->show();
        return;
    }
    if(ui->tokaNumero->value() == 10)
    {
        ui->tokaNumero->setValue(4);
        ui->tokaNumero->show();
        return;
    }
    if(ui->kolmasNumero->value() == 10)
    {
        ui->kolmasNumero->setValue(4);
        ui->kolmasNumero->show();
        return;
    }
    if(ui->neljasNumero->value() == 10)
    {
        ui->neljasNumero->setValue(4);
        ui->neljasNumero->show();
        return;
    }
}

void kirjautuminen::on_panelButton_5_clicked()
{
    if(ui->ekaNumero->value() == 10)
    {
        ui->ekaNumero->setValue(5);
        ui->ekaNumero->show();
        return;
    }
    if(ui->tokaNumero->value() == 10)
    {
        ui->tokaNumero->setValue(5);
        ui->tokaNumero->show();
        return;
    }
    if(ui->kolmasNumero->value() == 10)
    {
        ui->kolmasNumero->setValue(5);
        ui->kolmasNumero->show();
        return;
    }
    if(ui->neljasNumero->value() == 10)
    {
        ui->neljasNumero->setValue(5);
        ui->neljasNumero->show();
        return;
    }
}

void kirjautuminen::on_panelButton_6_clicked()
{
    if(ui->ekaNumero->value() == 10)
    {
        ui->ekaNumero->setValue(6);
        ui->ekaNumero->show();
        return;
    }
    if(ui->tokaNumero->value() == 10)
    {
        ui->tokaNumero->setValue(6);
        ui->tokaNumero->show();
        return;
    }
    if(ui->kolmasNumero->value() == 10)
    {
        ui->kolmasNumero->setValue(6);
        ui->kolmasNumero->show();
        return;
    }
    if(ui->neljasNumero->value() == 10)
    {
        ui->neljasNumero->setValue(6);
        ui->neljasNumero->show();
        return;
    }
}

void kirjautuminen::on_panelButton_7_clicked()
{
    if(ui->ekaNumero->value() == 10)
    {
        ui->ekaNumero->setValue(7);
        ui->ekaNumero->show();
        return;
    }
    if(ui->tokaNumero->value() == 10)
    {
        ui->tokaNumero->setValue(7);
        ui->tokaNumero->show();
        return;
    }
    if(ui->kolmasNumero->value() == 10)
    {
        ui->kolmasNumero->setValue(7);
        ui->kolmasNumero->show();
        return;
    }
    if(ui->neljasNumero->value() == 10)
    {
        ui->neljasNumero->setValue(7);
        ui->neljasNumero->show();
        return;
    }
}

void kirjautuminen::on_panelButton_8_clicked()
{
    if(ui->ekaNumero->value() == 10)
    {
        ui->ekaNumero->setValue(8);
        ui->ekaNumero->show();
        return;
    }
    if(ui->tokaNumero->value() == 10)
    {
        ui->tokaNumero->setValue(8);
        ui->tokaNumero->show();
        return;
    }
    if(ui->kolmasNumero->value() == 10)
    {
        ui->kolmasNumero->setValue(8);
        ui->kolmasNumero->show();
        return;
    }
    if(ui->neljasNumero->value() == 10)
    {
        ui->neljasNumero->setValue(8);
        ui->neljasNumero->show();
        return;
    }
}

void kirjautuminen::on_panelButton_9_clicked()
{
    if(ui->ekaNumero->value() == 10)
    {
        ui->ekaNumero->setValue(9);
        ui->ekaNumero->show();
        return;
    }
    if(ui->tokaNumero->value() == 10)
    {
        ui->tokaNumero->setValue(9);
        ui->tokaNumero->show();
        return;
    }
    if(ui->kolmasNumero->value() == 10)
    {
        ui->kolmasNumero->setValue(9);
        ui->kolmasNumero->show();
        return;
    }
    if(ui->neljasNumero->value() == 10)
    {
        ui->neljasNumero->setValue(9);
        ui->neljasNumero->show();
        return;
    }
}

void kirjautuminen::on_panelButton_0_clicked()
{
    if(ui->ekaNumero->value() == 10)
    {
        ui->ekaNumero->setValue(0);
        ui->ekaNumero->show();
        return;
    }
    if(ui->tokaNumero->value() == 10)
    {
        ui->tokaNumero->setValue(0);
        ui->tokaNumero->show();
        return;
    }
    if(ui->kolmasNumero->value() == 10)
    {
        ui->kolmasNumero->setValue(0);
        ui->kolmasNumero->show();
        return;
    }
    if(ui->neljasNumero->value() == 10)
    {
        ui->neljasNumero->setValue(0);
        ui->neljasNumero->show();
        return;
    }
}


void kirjautuminen::on_pushButtonRESET_clicked()
{
    ui->ekaNumero->setValue(10);
    ui->tokaNumero->setValue(10);
    ui->kolmasNumero->setValue(10);
    ui->neljasNumero->setValue(10);
}
