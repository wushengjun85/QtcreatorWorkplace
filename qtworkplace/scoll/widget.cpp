#include "widget.h"
#include "ui_widget.h"
#include<QTimer>
#include<QPainter>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->label->setText("hello world");
    scroll(0,130);
}

Widget::~Widget()
{
    delete ui;
}
void Widget::paintEvent(QPaintEvent *event)
{

    QPainter painter(ui->label);
    //scroll(0, 1);    // X 轴不变，Y 轴 向上偏移 1

}
