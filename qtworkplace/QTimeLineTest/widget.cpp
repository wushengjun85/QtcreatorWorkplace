#include "widget.h"
#include "ui_widget.h"
#include<QPropertyAnimation>
#include<QPushButton>
#include<QLabel>
#include<QDebug>
#include<QTimeLine>

static int i;
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    QTimeLine *timeline=new QTimeLine(10000);
    timeline->setFrameRange(0, 100);
    timeline->setLoopCount(1);
    //timeline->setUpdateInterval(2);
    timeline->setCurveShape(QTimeLine::EaseOutCurve);
    connect(timeline,SIGNAL(frameChanged(int)),ui->progressBar,SLOT(setValue(int)));
    //connect(timeline,SIGNAL(frameChanged(int)),this,SLOT(paintEvent()));

    timeline->start();
}

Widget::~Widget()
{
    delete ui;
}
void Widget::shanhua()
{

}
