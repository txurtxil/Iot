#-------------------------------------------------
#
# Project created by QtCreator 2017-12-07T19:56:40
#
#-------------------------------------------------

QT += core gui
QT += network
QT += widgets
QT += printsupport

TARGET = iot
TEMPLATE = app

LIBS += -lwiringPi
LIBS += -lQt5Qmqtt

target.path = /usr/bin
INSTALLS += target

INCLUDEPATH += $$PWD/lib/mqtt-inc

include($$PWD/lib/QtTelegramBot/QtTelegramBot.pri)

SOURCES += \
        main.cpp \
        widget.cpp \
    process.cpp \
    settings.cpp \
    dht.cpp \
    qcustomplot.cpp

HEADERS += \
        widget.h \
    settings.h \
    process.h \
    settings.h \
    dht.h \
    defines.h \
     qcustomplot.h

FORMS += \
        widget.ui
