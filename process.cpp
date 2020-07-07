#include "process.h"

Process::Process(QObject *parent) : QObject(parent)
{
    wiringPiSetup();

    digitalWrite(23, LOW);
    digitalWrite(22, LOW);

    dht = new DHT(1);
    timer = new QTimer();
    connect(timer, SIGNAL(timeout()), this, SLOT(timeout()));

    QString host = Settings::value("server/host", "m10.cloudmqtt.com").toString();
    quint16 port = Settings::value("server/port", 11420).toInt();

    QString cid = Settings::value("client/id", "QT").toString();
    QString cuser = Settings::value("client/user", "****USER****").toString();
    QString cpass = Settings::value("client/pass", "****PASS****").toString();

    client = new QMQTT::Client(host, port, false, false);
    client->setClientId(cid);
    client->setUsername(cuser);
    client->setPassword(cpass.toUtf8());
    client->setAutoReconnect(true);
    client->connectToHost();

    connect(client,SIGNAL(received(QMQTT::Message)),this,SLOT(received(QMQTT::Message)));
    connect(client, SIGNAL(connected()), this, SLOT(connected()));

    timer->start(1000);
}

float Process::getTemp()
{
    return dht->getTemp();
}

float Process::getHumi()
{
    return dht->getHum();
}

void Process::timeout()
{
    dht->update();

    QMQTT::Message message1(0, "tempState", QString("%1").arg(dht->getTemp()).toUtf8());
    client->publish(message1);

    QMQTT::Message message2(0, "humiState", QString("%1").arg(dht->getHum()).toUtf8());
    client->publish(message2);

    emit data(dht->getTemp(), dht->getHum());
    qDebug() << "Temp=" << dht->getTemp() << " Hum=" << dht->getHum() ;
}

void Process::published(QMQTT::Message message, quint16 msgid)
{
    qDebug() << message.payload();
}

void Process::received(QMQTT::Message message)
{
   qDebug() << message.topic() << message.payload();
    changeRelayState(message.topic(), message.payload().toInt());
}

void Process::connected()
{
    qDebug() << "connected";
    client->subscribe("relay1");
    client->subscribe("relay2");
}

void Process::changeRelayState(QString name, quint8 state)
{
    if(name == "relay1"){
        digitalWrite(23, state);
        emit relay(1, state);

        QMQTT::Message m(0, "relay1State", QString("%1").arg(state).toUtf8() );
        client->publish(m);
    }

    if(name == "relay2"){
        digitalWrite(22, state);
        emit relay(2, state);

        QMQTT::Message m(0, "relay2State", QString("%1").arg(state).toUtf8() );
        client->publish(m);
    }
}
