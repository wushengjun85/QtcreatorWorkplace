#include "widget.h"
#include "ui_widget.h"
#include<QKeyEvent>
#include<QDebug>
#include<QTimer>

uchar flagcount = 0;
bool flagF1 = false;
bool flagF2 = false;

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    timer_Timeout = new QTimer(this);
    connect(timer_Timeout,SIGNAL(timeout()),this,SLOT(timeoutfun()));
    //设置超时判断
    timer_Timeout->start(1000);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::keyPressEvent(QKeyEvent *e)
{
    if ((e->key() == Qt::Key_F1)&&(!e->isAutoRepeat()))//
        {
          flagF1 = true;
         qDebug()<<"F1@@@@@@@@@@@@@@@@@@@@@ =====  "<<flagF1<<endl;
        }
    else if ((e->key() == Qt::Key_F2)&&(flagF1 == true))
    {
        flagF2 = true;
        qDebug()<<"F2@@@@@@@@@@@@@@@@@@@@@@@@@@@@"<<flagF2<<endl;
    }
}

void Widget::keyReleaseEvent(QKeyEvent *e)
{
    if ((e->key() == Qt::Key_F1)&&(flagF1 == true) &&(!e->isAutoRepeat()))//
        {
         qDebug()<<"release key_F111"<<endl;
         flagF1 = false;
        }
    else if ((e->key() == Qt::Key_F2)&&(flagF2 == true) &&(!e->isAutoRepeat()))//
    {

        qDebug()<<"release key_F2222"<<endl;
        flagF2 = false;
    }
}

void Widget::timeoutfun()
{

    if(flagF1 == true)
    {
        flagcount++;
        qDebug()<<"flagcount"<<flagcount<<endl;
        if(flagcount>5)
        {
            flagcount = 0;
            //超时操作
            qDebug()<<"超时操作"<<endl;
        }
    }
    else
    {
       flagcount = 0;
    }

}
