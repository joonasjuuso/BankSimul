#include "rfid.h"
#include <QDebug>

/*Rfid::Rfid()
{

}
*/

void Rfid::yhdista()
{
    ser = new QSerialPort(this);
    ser->setPortName("com8");
    ser->setBaudRate(QSerialPort::Baud9600);
    ser->setDataBits(QSerialPort::Data8);
    ser->setParity(QSerialPort::NoParity);
    ser->setStopBits(QSerialPort::OneStop);
    ser->setFlowControl(QSerialPort::HardwareControl);

    if (ser->open(QIODevice::ReadWrite))
    {
        qDebug() << ser->portName();
        qDebug() << "Onnistuit!";
    }
    else {
        qDebug() << "Portin avaaminen epäonnistui";
    }

    QObject::connect(ser,SIGNAL(readyRead()), this,SLOT(readCard()));
}



QString Rfid::readCard()
{

    char data[20];
    int bytesread;
    bytesread = ser->read(data,20);
    data[bytesread] = '\0';
    if (bytesread>10)
    {
        for (int i=0; i<=9; i++)
        {
            kortti = data;
        }
        kortti.remove(0, 3);
        kortti.remove(10, 15);
        qDebug() << "Kortin numero: " << kortti;
    }

    else
    {
        qDebug() << "Virhe korttia lukiessa";
    }

    return kortti;

    

}



void Rfid::rajapintasignaali()
{
    emit sigLue();
}


Rfid::~Rfid()
{
    delete ser;
    ser = nullptr;
}
