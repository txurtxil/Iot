#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    ui->graph->setBackground(QColor(0,0,0,150));

    ui->graph->addGraph();

    ui->graph->graph(0)->setPen(QPen(QColor(255, 255, 0)));
    ui->graph->graph(0)->setBrush(QBrush(QColor(255, 255, 0, 20)));

    ui->graph->xAxis->setRange(0, 30);
    ui->graph->yAxis->setRange(0, 100);

    ui->graph->xAxis->setVisible(false);
    ui->graph->yAxis->setAutoTickCount(5);
    ui->graph->yAxis->setTickLabels(true);

    QFont font;
    font.setPointSize(5);

    ui->graph->yAxis->setTickLabelFont(font);

    ui->graph->xAxis->setBasePen(QPen(Qt::white));
    ui->graph->xAxis->setTickPen(QPen(Qt::white));
    ui->graph->xAxis->setSubTickPen(QPen(Qt::white));
    ui->graph->xAxis->setTickLabelColor(Qt::white);

    ui->graph->yAxis->setBasePen(QPen(Qt::white));
    ui->graph->yAxis->setTickPen(QPen(Qt::white));
    ui->graph->yAxis->setSubTickPen(QPen(Qt::white));
    ui->graph->yAxis->setTickLabelColor(Qt::white);

    bot = new Telegram::Bot(TOKEN, true, 500, 4);
    connect(bot, SIGNAL(message(Message)),this,SLOT(message(Message)));

    connect(&process,SIGNAL(relay(quint8,quint8)),this,SLOT(relay(quint8,quint8)));
    connect(&process,SIGNAL(data(qreal,qreal)),this,SLOT(data(qreal,qreal)));
}

Widget::~Widget()
{
    delete ui;
}

void Widget::relay(quint8 n, quint8 state)
{
    if(n==1){
        ui->pbRelay1->setChecked(state==1?true:false);
    }
    if(n==2){
        ui->pbRelay2->setChecked(state==1?true:false);
    }
}

void Widget::data(qreal temp, qreal humi)
{
    ui->label->setText(QString("%1 C - %2 %").arg(temp).arg(humi));

    QVector<double> x,y;

    m_storge.insert(0, humi);

    if(m_storge.count() > 30){
        m_storge.remove(30);
    }

    for (int index = 0; index < m_storge.count(); ++index){
        x.append(30-index);
        y.append(m_storge.at(index));
    }

    ui->graph->graph(0)->clearData();
    ui->graph->graph(0)->setData(x,y);

    ui->graph->replot();

}

void Widget::message(Message m)
{
//    qDebug() << "new message:" << m;

    if (bot && m.type == Message::TextType) {
        if(m.string.toLower() == "temp") {
            bot->sendMessage(m.from.id, QString("%1 C - %2 %").arg(process.getTemp()).arg(process.getHumi()));
        }
        if(m.string.toLower().contains("relay1")){
            process.changeRelayState("relay1",m.string.toLower().section('=',1,1).toInt());
        }
        if(m.string.toLower().contains("relay2")){
            process.changeRelayState("relay2",m.string.toLower().section('=',1,1).toInt());
        }
//        else{
//            bot->sendMessage(m.from.id, m.string);
//        }
    }
}

void Widget::on_pbRelay1_clicked(bool checked)
{
    process.changeRelayState("relay1" , (quint8)checked);
}

void Widget::on_pbRelay2_clicked(bool checked)
{
    process.changeRelayState("relay2" , (quint8)checked);
}

void Widget::keyPressEvent(QKeyEvent *event)
{
    if (event->modifiers()==Qt::ControlModifier && event->key()==Qt::Key_Q)
    {
        close();
    }

    QWidget::keyPressEvent(event);
}
