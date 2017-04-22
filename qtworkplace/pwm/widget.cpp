#include "widget.h"
#include "ui_widget.h"
#include<QDebug>
uchar nn;
uchar mm;
int flagnum = 99;
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    timerpwm = new QTimer();
    connect(timerpwm,SIGNAL(timeout()),this,SLOT(pwmfun()));
    timerpwm->start(1000);

    timerpwm2 = new QTimer();
    connect(timerpwm2,SIGNAL(timeout()),this,SLOT(pwmfun2()));
    timerpwm2->start(5000);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::pwmfun()
{
    ui->label->setText("howell up up up!!");//QString::number(flagnum)
    qDebug()<<"nn ..."<<nn++<<endl;
    timerpwm2->start();
    timerpwm->stop();
}

void Widget::pwmfun2()
{
    ui->label->setText(" 666");
    qDebug()<<"mm ..."<<mm++<<endl;
    timerpwm->start();
    timerpwm2->stop();
}
