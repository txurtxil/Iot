/****************************************************************************
** Meta object code from reading C++ file 'qmqtt_client.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qmqtt_client.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qmqtt_client.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QMQTT__Client_t {
    QByteArrayData data[77];
    char stringdata0[910];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QMQTT__Client_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QMQTT__Client_t qt_meta_stringdata_QMQTT__Client = {
    {
QT_MOC_LITERAL(0, 0, 13), // "QMQTT::Client"
QT_MOC_LITERAL(1, 14, 9), // "connected"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 12), // "disconnected"
QT_MOC_LITERAL(4, 38, 5), // "error"
QT_MOC_LITERAL(5, 44, 18), // "QMQTT::ClientError"
QT_MOC_LITERAL(6, 63, 10), // "subscribed"
QT_MOC_LITERAL(7, 74, 5), // "topic"
QT_MOC_LITERAL(8, 80, 3), // "qos"
QT_MOC_LITERAL(9, 84, 12), // "unsubscribed"
QT_MOC_LITERAL(10, 97, 9), // "published"
QT_MOC_LITERAL(11, 107, 14), // "QMQTT::Message"
QT_MOC_LITERAL(12, 122, 7), // "message"
QT_MOC_LITERAL(13, 130, 5), // "msgid"
QT_MOC_LITERAL(14, 136, 8), // "received"
QT_MOC_LITERAL(15, 145, 8), // "pingresp"
QT_MOC_LITERAL(16, 154, 7), // "setHost"
QT_MOC_LITERAL(17, 162, 12), // "QHostAddress"
QT_MOC_LITERAL(18, 175, 4), // "host"
QT_MOC_LITERAL(19, 180, 11), // "setHostName"
QT_MOC_LITERAL(20, 192, 8), // "hostName"
QT_MOC_LITERAL(21, 201, 7), // "setPort"
QT_MOC_LITERAL(22, 209, 4), // "port"
QT_MOC_LITERAL(23, 214, 11), // "setClientId"
QT_MOC_LITERAL(24, 226, 8), // "clientId"
QT_MOC_LITERAL(25, 235, 11), // "setUsername"
QT_MOC_LITERAL(26, 247, 8), // "username"
QT_MOC_LITERAL(27, 256, 11), // "setPassword"
QT_MOC_LITERAL(28, 268, 8), // "password"
QT_MOC_LITERAL(29, 277, 10), // "setVersion"
QT_MOC_LITERAL(30, 288, 11), // "MQTTVersion"
QT_MOC_LITERAL(31, 300, 7), // "version"
QT_MOC_LITERAL(32, 308, 12), // "setKeepAlive"
QT_MOC_LITERAL(33, 321, 9), // "keepAlive"
QT_MOC_LITERAL(34, 331, 15), // "setCleanSession"
QT_MOC_LITERAL(35, 347, 12), // "cleanSession"
QT_MOC_LITERAL(36, 360, 16), // "setAutoReconnect"
QT_MOC_LITERAL(37, 377, 5), // "value"
QT_MOC_LITERAL(38, 383, 24), // "setAutoReconnectInterval"
QT_MOC_LITERAL(39, 408, 21), // "autoReconnectInterval"
QT_MOC_LITERAL(40, 430, 12), // "setWillTopic"
QT_MOC_LITERAL(41, 443, 9), // "willTopic"
QT_MOC_LITERAL(42, 453, 10), // "setWillQos"
QT_MOC_LITERAL(43, 464, 7), // "willQos"
QT_MOC_LITERAL(44, 472, 13), // "setWillRetain"
QT_MOC_LITERAL(45, 486, 10), // "willRetain"
QT_MOC_LITERAL(46, 497, 14), // "setWillMessage"
QT_MOC_LITERAL(47, 512, 11), // "willMessage"
QT_MOC_LITERAL(48, 524, 13), // "connectToHost"
QT_MOC_LITERAL(49, 538, 18), // "disconnectFromHost"
QT_MOC_LITERAL(50, 557, 9), // "subscribe"
QT_MOC_LITERAL(51, 567, 11), // "unsubscribe"
QT_MOC_LITERAL(52, 579, 7), // "publish"
QT_MOC_LITERAL(53, 587, 18), // "onNetworkConnected"
QT_MOC_LITERAL(54, 606, 21), // "onNetworkDisconnected"
QT_MOC_LITERAL(55, 628, 17), // "onNetworkReceived"
QT_MOC_LITERAL(56, 646, 12), // "QMQTT::Frame"
QT_MOC_LITERAL(57, 659, 5), // "frame"
QT_MOC_LITERAL(58, 665, 14), // "onTimerPingReq"
QT_MOC_LITERAL(59, 680, 14), // "onNetworkError"
QT_MOC_LITERAL(60, 695, 28), // "QAbstractSocket::SocketError"
QT_MOC_LITERAL(61, 724, 5), // "_port"
QT_MOC_LITERAL(62, 730, 5), // "_host"
QT_MOC_LITERAL(63, 736, 9), // "_hostName"
QT_MOC_LITERAL(64, 746, 9), // "_clientId"
QT_MOC_LITERAL(65, 756, 9), // "_username"
QT_MOC_LITERAL(66, 766, 9), // "_password"
QT_MOC_LITERAL(67, 776, 10), // "_keepAlive"
QT_MOC_LITERAL(68, 787, 8), // "_version"
QT_MOC_LITERAL(69, 796, 14), // "_autoReconnect"
QT_MOC_LITERAL(70, 811, 22), // "_autoReconnectInterval"
QT_MOC_LITERAL(71, 834, 13), // "_cleanSession"
QT_MOC_LITERAL(72, 848, 10), // "_willTopic"
QT_MOC_LITERAL(73, 859, 8), // "_willQos"
QT_MOC_LITERAL(74, 868, 11), // "_willRetain"
QT_MOC_LITERAL(75, 880, 12), // "_willMessage"
QT_MOC_LITERAL(76, 893, 16) // "_connectionState"

    },
    "QMQTT::Client\0connected\0\0disconnected\0"
    "error\0QMQTT::ClientError\0subscribed\0"
    "topic\0qos\0unsubscribed\0published\0"
    "QMQTT::Message\0message\0msgid\0received\0"
    "pingresp\0setHost\0QHostAddress\0host\0"
    "setHostName\0hostName\0setPort\0port\0"
    "setClientId\0clientId\0setUsername\0"
    "username\0setPassword\0password\0setVersion\0"
    "MQTTVersion\0version\0setKeepAlive\0"
    "keepAlive\0setCleanSession\0cleanSession\0"
    "setAutoReconnect\0value\0setAutoReconnectInterval\0"
    "autoReconnectInterval\0setWillTopic\0"
    "willTopic\0setWillQos\0willQos\0setWillRetain\0"
    "willRetain\0setWillMessage\0willMessage\0"
    "connectToHost\0disconnectFromHost\0"
    "subscribe\0unsubscribe\0publish\0"
    "onNetworkConnected\0onNetworkDisconnected\0"
    "onNetworkReceived\0QMQTT::Frame\0frame\0"
    "onTimerPingReq\0onNetworkError\0"
    "QAbstractSocket::SocketError\0_port\0"
    "_host\0_hostName\0_clientId\0_username\0"
    "_password\0_keepAlive\0_version\0"
    "_autoReconnect\0_autoReconnectInterval\0"
    "_cleanSession\0_willTopic\0_willQos\0"
    "_willRetain\0_willMessage\0_connectionState"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QMQTT__Client[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      36,   14, // methods
      16,  292, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  194,    2, 0x06 /* Public */,
       3,    0,  195,    2, 0x06 /* Public */,
       4,    1,  196,    2, 0x06 /* Public */,
       6,    2,  199,    2, 0x06 /* Public */,
       6,    1,  204,    2, 0x26 /* Public | MethodCloned */,
       9,    1,  207,    2, 0x06 /* Public */,
      10,    2,  210,    2, 0x06 /* Public */,
      10,    1,  215,    2, 0x26 /* Public | MethodCloned */,
      14,    1,  218,    2, 0x06 /* Public */,
      15,    0,  221,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      16,    1,  222,    2, 0x0a /* Public */,
      19,    1,  225,    2, 0x0a /* Public */,
      21,    1,  228,    2, 0x0a /* Public */,
      23,    1,  231,    2, 0x0a /* Public */,
      25,    1,  234,    2, 0x0a /* Public */,
      27,    1,  237,    2, 0x0a /* Public */,
      29,    1,  240,    2, 0x0a /* Public */,
      32,    1,  243,    2, 0x0a /* Public */,
      34,    1,  246,    2, 0x0a /* Public */,
      36,    1,  249,    2, 0x0a /* Public */,
      38,    1,  252,    2, 0x0a /* Public */,
      40,    1,  255,    2, 0x0a /* Public */,
      42,    1,  258,    2, 0x0a /* Public */,
      44,    1,  261,    2, 0x0a /* Public */,
      46,    1,  264,    2, 0x0a /* Public */,
      48,    0,  267,    2, 0x0a /* Public */,
      49,    0,  268,    2, 0x0a /* Public */,
      50,    2,  269,    2, 0x0a /* Public */,
      50,    1,  274,    2, 0x2a /* Public | MethodCloned */,
      51,    1,  277,    2, 0x0a /* Public */,
      52,    1,  280,    2, 0x0a /* Public */,
      53,    0,  283,    2, 0x09 /* Protected */,
      54,    0,  284,    2, 0x09 /* Protected */,
      55,    1,  285,    2, 0x09 /* Protected */,
      58,    0,  288,    2, 0x09 /* Protected */,
      59,    1,  289,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::UChar,    7,    8,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, 0x80000000 | 11, QMetaType::UShort,   12,   13,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void, QMetaType::QString,   20,
    QMetaType::Void, QMetaType::UShort,   22,
    QMetaType::Void, QMetaType::QString,   24,
    QMetaType::Void, QMetaType::QString,   26,
    QMetaType::Void, QMetaType::QByteArray,   28,
    QMetaType::Void, 0x80000000 | 30,   31,
    QMetaType::Void, QMetaType::UShort,   33,
    QMetaType::Void, QMetaType::Bool,   35,
    QMetaType::Void, QMetaType::Bool,   37,
    QMetaType::Void, QMetaType::Int,   39,
    QMetaType::Void, QMetaType::QString,   41,
    QMetaType::Void, QMetaType::UChar,   43,
    QMetaType::Void, QMetaType::Bool,   45,
    QMetaType::Void, QMetaType::QByteArray,   47,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::UChar,    7,    8,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::UShort, 0x80000000 | 11,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 56,   57,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 60,    4,

 // properties: name, type, flags
      61, QMetaType::UShort, 0x00095003,
      62, 0x80000000 | 17, 0x0009500b,
      63, QMetaType::QString, 0x00095003,
      64, QMetaType::QString, 0x00095003,
      65, QMetaType::QString, 0x00095003,
      66, QMetaType::QByteArray, 0x00095003,
      67, QMetaType::UShort, 0x00095003,
      68, 0x80000000 | 30, 0x0009500b,
      69, QMetaType::Bool, 0x00095003,
      70, QMetaType::Int, 0x00095003,
      71, QMetaType::Bool, 0x00095003,
      72, QMetaType::QString, 0x00095003,
      73, QMetaType::UChar, 0x00095003,
      74, QMetaType::Bool, 0x00095003,
      75, QMetaType::QByteArray, 0x00095003,
      76, QMetaType::QString, 0x00095001,

       0        // eod
};

void QMQTT::Client::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Client *_t = static_cast<Client *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->connected(); break;
        case 1: _t->disconnected(); break;
        case 2: _t->error((*reinterpret_cast< const QMQTT::ClientError(*)>(_a[1]))); break;
        case 3: _t->subscribed((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const quint8(*)>(_a[2]))); break;
        case 4: _t->subscribed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->unsubscribed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->published((*reinterpret_cast< const QMQTT::Message(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 7: _t->published((*reinterpret_cast< const QMQTT::Message(*)>(_a[1]))); break;
        case 8: _t->received((*reinterpret_cast< const QMQTT::Message(*)>(_a[1]))); break;
        case 9: _t->pingresp(); break;
        case 10: _t->setHost((*reinterpret_cast< const QHostAddress(*)>(_a[1]))); break;
        case 11: _t->setHostName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: _t->setPort((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 13: _t->setClientId((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 14: _t->setUsername((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 15: _t->setPassword((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 16: _t->setVersion((*reinterpret_cast< const MQTTVersion(*)>(_a[1]))); break;
        case 17: _t->setKeepAlive((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 18: _t->setCleanSession((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 19: _t->setAutoReconnect((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 20: _t->setAutoReconnectInterval((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 21: _t->setWillTopic((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 22: _t->setWillQos((*reinterpret_cast< const quint8(*)>(_a[1]))); break;
        case 23: _t->setWillRetain((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 24: _t->setWillMessage((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 25: _t->connectToHost(); break;
        case 26: _t->disconnectFromHost(); break;
        case 27: _t->subscribe((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const quint8(*)>(_a[2]))); break;
        case 28: _t->subscribe((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 29: _t->unsubscribe((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 30: { quint16 _r = _t->publish((*reinterpret_cast< const QMQTT::Message(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint16*>(_a[0]) = std::move(_r); }  break;
        case 31: _t->onNetworkConnected(); break;
        case 32: _t->onNetworkDisconnected(); break;
        case 33: _t->onNetworkReceived((*reinterpret_cast< const QMQTT::Frame(*)>(_a[1]))); break;
        case 34: _t->onTimerPingReq(); break;
        case 35: _t->onNetworkError((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMQTT::ClientError >(); break;
            }
            break;
        case 35:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketError >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Client::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Client::connected)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Client::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Client::disconnected)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Client::*_t)(const QMQTT::ClientError );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Client::error)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (Client::*_t)(const QString & , const quint8 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Client::subscribed)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (Client::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Client::unsubscribed)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (Client::*_t)(const QMQTT::Message & , quint16 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Client::published)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (Client::*_t)(const QMQTT::Message & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Client::received)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (Client::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Client::pingresp)) {
                *result = 9;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        Client *_t = static_cast<Client *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< quint16*>(_v) = _t->port(); break;
        case 1: *reinterpret_cast< QHostAddress*>(_v) = _t->host(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->hostName(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->clientId(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->username(); break;
        case 5: *reinterpret_cast< QByteArray*>(_v) = _t->password(); break;
        case 6: *reinterpret_cast< quint16*>(_v) = _t->keepAlive(); break;
        case 7: *reinterpret_cast< MQTTVersion*>(_v) = _t->version(); break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->autoReconnect(); break;
        case 9: *reinterpret_cast< int*>(_v) = _t->autoReconnectInterval(); break;
        case 10: *reinterpret_cast< bool*>(_v) = _t->cleanSession(); break;
        case 11: *reinterpret_cast< QString*>(_v) = _t->willTopic(); break;
        case 12: *reinterpret_cast< quint8*>(_v) = _t->willQos(); break;
        case 13: *reinterpret_cast< bool*>(_v) = _t->willRetain(); break;
        case 14: *reinterpret_cast< QByteArray*>(_v) = _t->willMessage(); break;
        case 15: *reinterpret_cast< QString*>(_v) = _t->connectionState(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        Client *_t = static_cast<Client *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setPort(*reinterpret_cast< quint16*>(_v)); break;
        case 1: _t->setHost(*reinterpret_cast< QHostAddress*>(_v)); break;
        case 2: _t->setHostName(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setClientId(*reinterpret_cast< QString*>(_v)); break;
        case 4: _t->setUsername(*reinterpret_cast< QString*>(_v)); break;
        case 5: _t->setPassword(*reinterpret_cast< QByteArray*>(_v)); break;
        case 6: _t->setKeepAlive(*reinterpret_cast< quint16*>(_v)); break;
        case 7: _t->setVersion(*reinterpret_cast< MQTTVersion*>(_v)); break;
        case 8: _t->setAutoReconnect(*reinterpret_cast< bool*>(_v)); break;
        case 9: _t->setAutoReconnectInterval(*reinterpret_cast< int*>(_v)); break;
        case 10: _t->setCleanSession(*reinterpret_cast< bool*>(_v)); break;
        case 11: _t->setWillTopic(*reinterpret_cast< QString*>(_v)); break;
        case 12: _t->setWillQos(*reinterpret_cast< quint8*>(_v)); break;
        case 13: _t->setWillRetain(*reinterpret_cast< bool*>(_v)); break;
        case 14: _t->setWillMessage(*reinterpret_cast< QByteArray*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QMQTT::Client::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QMQTT__Client.data,
      qt_meta_data_QMQTT__Client,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QMQTT::Client::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QMQTT::Client::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QMQTT__Client.stringdata0))
        return static_cast<void*>(const_cast< Client*>(this));
    return QObject::qt_metacast(_clname);
}

int QMQTT::Client::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 36)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 36;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 36)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 36;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 16;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QMQTT::Client::connected()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QMQTT::Client::disconnected()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QMQTT::Client::error(const QMQTT::ClientError _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QMQTT::Client::subscribed(const QString & _t1, const quint8 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 5
void QMQTT::Client::unsubscribed(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QMQTT::Client::published(const QMQTT::Message & _t1, quint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 8
void QMQTT::Client::received(const QMQTT::Message & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void QMQTT::Client::pingresp()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
