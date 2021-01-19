#-------------------------------------------------
#
# Project created by QtCreator 2020-03-24T11:00:05
#
#-------------------------------------------------

QT       += core gui serialport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = BankSimul
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
    kirjautuminen.cpp \
        main.cpp \
        mainwindow.cpp \
    loginok.cpp \
    nostarahaa.cpp \
    siirrarahaa.cpp \
    tilitapahtumat.cpp \
    saldo.cpp

HEADERS += \
    kirjautuminen.h \
        mainwindow.h \
    loginok.h \
    nostarahaa.h \
    siirrarahaa.h \
    tilitapahtumat.h \
    saldo.h

FORMS += \
    kirjautuminen.ui \
        mainwindow.ui \
    loginok.ui \
    nostarahaa.ui \
    siirrarahaa.ui \
    tilitapahtumat.ui \
    saldo.ui


win32:CONFIG(release, debug|release): LIBS += -L$$PWD/build-rfid-Desktop_Qt_5_12_6_MinGW_32_bit-Release/release/ -lrfid
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/build-rfid-Desktop_Qt_5_12_6_MinGW_32_bit-Release/debug/ -lrfid

INCLUDEPATH += $$PWD/build-rfid-Desktop_Qt_5_12_6_MinGW_32_bit-Release/release
DEPENDPATH += $$PWD/build-rfid-Desktop_Qt_5_12_6_MinGW_32_bit-Release/release
