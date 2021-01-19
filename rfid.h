#ifndef RFID_H
#define RFID_H
#include <QSerialPort>
#include <QObject>
#include <QString>
#include "rfid_global.h"

class RFID_EXPORT Rfid : public QObject
{
    Q_OBJECT


public:
     //Rfid();
     ~Rfid();
     void RFID_EXPORT yhdista();

public slots:
    QString RFID_EXPORT readCard();
    void RFID_EXPORT rajapintasignaali();


signals:
   void sigLue();


private:
    QSerialPort * ser;
    QString palautettavaArvo;
    QString kortti;
};

#endif // RFID_H
