#include "widget.h"
#include "ui_widget.h"
#include<QDebug>
float a = 0.096;

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
}

Widget::~Widget()
{
    delete ui;
}
