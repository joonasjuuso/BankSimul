/********************************************************************************
** Form generated from reading UI file 'kirjautuminen.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KIRJAUTUMINEN_H
#define UI_KIRJAUTUMINEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_kirjautuminen
{
public:
    QLabel *label;
    QLabel *label_2;
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *panelButton_2;
    QPushButton *panelButton_5;
    QPushButton *panelButton_6;
    QPushButton *panelButton_0;
    QPushButton *panelButton_4;
    QPushButton *panelButton_1;
    QPushButton *panelButton_7;
    QPushButton *panelButton_3;
    QPushButton *panelButton_8;
    QPushButton *panelButton_9;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout;
    QSpinBox *ekaNumero;
    QSpinBox *tokaNumero;
    QSpinBox *kolmasNumero;
    QSpinBox *neljasNumero;

    void setupUi(QDialog *kirjautuminen)
    {
        if (kirjautuminen->objectName().isEmpty())
            kirjautuminen->setObjectName(QStringLiteral("kirjautuminen"));
        kirjautuminen->resize(317, 220);
        label = new QLabel(kirjautuminen);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(130, 0, 101, 21));
        label_2 = new QLabel(kirjautuminen);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, 0, 91, 21));
        widget = new QWidget(kirjautuminen);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(30, 80, 260, 141));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        panelButton_2 = new QPushButton(widget);
        panelButton_2->setObjectName(QStringLiteral("panelButton_2"));

        gridLayout->addWidget(panelButton_2, 0, 1, 1, 1);

        panelButton_5 = new QPushButton(widget);
        panelButton_5->setObjectName(QStringLiteral("panelButton_5"));

        gridLayout->addWidget(panelButton_5, 1, 1, 1, 1);

        panelButton_6 = new QPushButton(widget);
        panelButton_6->setObjectName(QStringLiteral("panelButton_6"));

        gridLayout->addWidget(panelButton_6, 1, 2, 1, 1);

        panelButton_0 = new QPushButton(widget);
        panelButton_0->setObjectName(QStringLiteral("panelButton_0"));

        gridLayout->addWidget(panelButton_0, 3, 1, 1, 1);

        panelButton_4 = new QPushButton(widget);
        panelButton_4->setObjectName(QStringLiteral("panelButton_4"));

        gridLayout->addWidget(panelButton_4, 1, 0, 1, 1);

        panelButton_1 = new QPushButton(widget);
        panelButton_1->setObjectName(QStringLiteral("panelButton_1"));

        gridLayout->addWidget(panelButton_1, 0, 0, 1, 1);

        panelButton_7 = new QPushButton(widget);
        panelButton_7->setObjectName(QStringLiteral("panelButton_7"));

        gridLayout->addWidget(panelButton_7, 2, 0, 1, 1);

        panelButton_3 = new QPushButton(widget);
        panelButton_3->setObjectName(QStringLiteral("panelButton_3"));

        gridLayout->addWidget(panelButton_3, 0, 2, 1, 1);

        panelButton_8 = new QPushButton(widget);
        panelButton_8->setObjectName(QStringLiteral("panelButton_8"));

        gridLayout->addWidget(panelButton_8, 2, 1, 1, 1);

        panelButton_9 = new QPushButton(widget);
        panelButton_9->setObjectName(QStringLiteral("panelButton_9"));

        gridLayout->addWidget(panelButton_9, 2, 2, 1, 1);

        widget1 = new QWidget(kirjautuminen);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(50, 50, 221, 22));
        horizontalLayout = new QHBoxLayout(widget1);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        ekaNumero = new QSpinBox(widget1);
        ekaNumero->setObjectName(QStringLiteral("ekaNumero"));
        ekaNumero->setButtonSymbols(QAbstractSpinBox::NoButtons);
        ekaNumero->setValue(10);

        horizontalLayout->addWidget(ekaNumero);

        tokaNumero = new QSpinBox(widget1);
        tokaNumero->setObjectName(QStringLiteral("tokaNumero"));
        tokaNumero->setButtonSymbols(QAbstractSpinBox::NoButtons);
        tokaNumero->setValue(10);

        horizontalLayout->addWidget(tokaNumero);

        kolmasNumero = new QSpinBox(widget1);
        kolmasNumero->setObjectName(QStringLiteral("kolmasNumero"));
        kolmasNumero->setButtonSymbols(QAbstractSpinBox::NoButtons);
        kolmasNumero->setValue(10);

        horizontalLayout->addWidget(kolmasNumero);

        neljasNumero = new QSpinBox(widget1);
        neljasNumero->setObjectName(QStringLiteral("neljasNumero"));
        neljasNumero->setButtonSymbols(QAbstractSpinBox::NoButtons);
        neljasNumero->setValue(10);

        horizontalLayout->addWidget(neljasNumero);


        retranslateUi(kirjautuminen);

        QMetaObject::connectSlotsByName(kirjautuminen);
    } // setupUi

    void retranslateUi(QDialog *kirjautuminen)
    {
        kirjautuminen->setWindowTitle(QApplication::translate("kirjautuminen", "Dialog", Q_NULLPTR));
        label->setText(QString());
        label_2->setText(QApplication::translate("kirjautuminen", "Kortin tunnusluku:", Q_NULLPTR));
        panelButton_2->setText(QApplication::translate("kirjautuminen", "2", Q_NULLPTR));
        panelButton_5->setText(QApplication::translate("kirjautuminen", "5", Q_NULLPTR));
        panelButton_6->setText(QApplication::translate("kirjautuminen", "6", Q_NULLPTR));
        panelButton_0->setText(QApplication::translate("kirjautuminen", "0", Q_NULLPTR));
        panelButton_4->setText(QApplication::translate("kirjautuminen", "4", Q_NULLPTR));
        panelButton_1->setText(QApplication::translate("kirjautuminen", "1", Q_NULLPTR));
        panelButton_7->setText(QApplication::translate("kirjautuminen", "7", Q_NULLPTR));
        panelButton_3->setText(QApplication::translate("kirjautuminen", "3", Q_NULLPTR));
        panelButton_8->setText(QApplication::translate("kirjautuminen", "8", Q_NULLPTR));
        panelButton_9->setText(QApplication::translate("kirjautuminen", "9", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class kirjautuminen: public Ui_kirjautuminen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KIRJAUTUMINEN_H
