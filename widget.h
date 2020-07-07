#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

#include "process.h"
#include "qttelegrambot.h"

#define TOKEN "*****BOT TOKEN*****"

namespace Ui {
class Widget;
}

using namespace Telegram;

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

public slots:
    void relay(quint8,quint8);
    void data(qreal temp, qreal humi);
    void message(Message m);

private slots:
    void on_pbRelay1_clicked(bool checked);
    void on_pbRelay2_clicked(bool checked);

protected:
    void keyPressEvent(QKeyEvent *event);

private:
    Ui::Widget *ui;

    Process process;
    Bot *bot;

//    PlotThread plotThreat;

    QVector<float> m_storge;
};

#endif // WIDGET_H
