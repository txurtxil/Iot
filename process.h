#ifndef PROCESS_H
#define PROCESS_H

#include <QTimer>
#include <QObject>

#include <QDebug>

#include <wiringPi.h>

#include "settings.h"

#include "dht.h"
#include "qmqtt.h"

#define RELAY1 "relay1"
#define RELAY2 "relay2"

class Process : public QObject
{
    Q_OBJECT
public:
    explicit Process(QObject *parent = nullptr);
    float getTemp();
    float getHumi();

signals:

public slots:
    void timeout();
    void published(QMQTT::Message message, quint16 msgid);
    void received(QMQTT::Message message);
    void connected();
    void changeRelayState(QString name, quint8 state);

signals:
    void relay(quint8 n, quint8 state);
    void data(qreal temp, qreal humi);

private:
    DHT *dht;
    QTimer *timer;
    QMQTT::Client *client;
};

#endif // PROCESS_H
