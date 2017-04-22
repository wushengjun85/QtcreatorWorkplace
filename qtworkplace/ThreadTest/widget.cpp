#include "widget.h"
#include "ui_widget.h"
#include<QPainter>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    mythreadfun.start();


    timer_Main = new QTimer(this);   //声明一个定时器
    connect(timer_Main, SIGNAL(timeout()), this, SLOT(update()));  //连接信号槽，定时器超时触发窗体更新
    timer_Main->start(100);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::paintEvent(QPaintEvent *)
{

    QPainter painter(this);
    QPixmap pix;
    pix.load("C:/Users/Administrator/Desktop/YZT_10.bmp");
    painter.drawPixmap(0,0,800,480,pix);
}
