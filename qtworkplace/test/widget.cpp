#include "widget.h"
#include "ui_widget.h"
#include<QDebug>
#include<QString>

float a = 0.096;
uchar tempProcessBar = 0;
int TT = 0;
float FF = 0.0;

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    if(a < 0.096)
    {
        qDebug()<<"111111"<<endl;
    }
    else
    {
        qDebug()<<"222222"<<endl;
    }

    //

    timerProcessbar = new QTimer();
    connect(timerProcessbar,SIGNAL(timeout()),this,SLOT(processSlot()));
    timerProcessbar->start(1000);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_horizontalScrollBar_sliderMoved(int position)
{
    ui->lineEdit->setText(QString::number(position));
}

void Widget::processSlot()
{
    ui->progressBar->setValue(tempProcessBar++);
    ui->dial->setValue(tempProcessBar);
    ui->label->setText(QString::number(tempProcessBar));
    ui->horizontalScrollBar->setValue(tempProcessBar);
    ui->verticalScrollBar->setValue(100-tempProcessBar);

    ui->progressBar->setStyleSheet("\
                                   QProgressBar::chunk {\
                                       background-color: #CD96CD;\
                                       width: 10px;\
                                       margin: 0.5px;\
                                   }");

   ui->line->setVisible(true);

   TT++;
    FF = TT;
   FF = FF/10;

   qDebug()<<"TT = "<<TT<<endl;
   ui->lineEdit->setText(QString::number(FF,'f',1));
   ui->label_2->setText(QString::number(FF,'f',3));

    if(tempProcessBar>=100)
    {
        tempProcessBar = 0;
    }

}
