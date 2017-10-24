#include "widget.h"
#include "ui_widget.h"
#include<QPainter>
#include<QPaintEvent>
#include<QDebug>
#include<QTime>
#include<QTimer>
//#include<QtSql>
#include <QKeyEvent>
#include <QTextCodec>
#include<QTimeLine>
#include<stdlib.h>
#include <string.h>
#include<QPropertyAnimation>
//设置表盘的中心
#define CenterPoint_X  405
#define CenterPoint_Y  284

//设置指针的中心，注意这里是负的，因为一会我们要平移坐标系
#define NeedleCenter_X     -29   //
#define NeedleCenter_Y     -182

//指针图片的宽度和高度
#define NeedlePic_W         58
#define NeedlePic_H         224

//指针可以活动的最小最大值
#define Needle_MinAngle    -120
//#define Needle_MaxAngle     120
 int Needle_MaxAngle = 120;

//每一次Qt刷新，指针改变的的度数
//#define Needle_Step         1

int Needle_Step = 1;
int d_Pointer_angle_now = 0;


Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    //    QTimeLine *timeline=new QTimeLine(3000);
    //    timeline->setFrameRange(0, 100);
    //    timeline->setLoopCount(0);
    //    timeline->setCurveShape(QTimeLine::LinearCurve);
    //    connect(timeline,SIGNAL(frameChanged(int)),this,SLOT(roatepinghua()));
    //    timeline->start();

        this->resize(800, 600);

        pix_Needle.load("C:/Users/Administrator/Desktop/PINHUAZHUANDONG/img/86.png");

        d_Pointer_angle_now = Needle_MinAngle;   //start angle


        timer_Main = new QTimer(this);   //声明一个定时器
        updatetimer = new QTimer(this);
        connect(timer_Main, SIGNAL(timeout()), this, SLOT(roatepinghua()));  //连接信号槽，定时器超时触发窗体更新
        connect(updatetimer, SIGNAL(timeout()), this, SLOT(update()));  //连接信号槽，定时器超时触发窗体更新
        timer_Main->start(30);   //启动定时器
        updatetimer->start(20);
}

Widget::~Widget()
{
    delete ui;
}

//绘制事件
void Widget::paintEvent(QPaintEvent *)
{
    //每次调用这个函数，改变角度值
    //roatepinghua();

    QPainter paintShanshuo_W(this);
               QPixmap pixShanshuo_W;

               pixShanshuo_W.load("C:/Users/Administrator/Desktop/PINHUAZHUANDONG/img/xingzou.bmp");//01.png
               paintShanshuo_W.drawPixmap(0,0,800,600,pixShanshuo_W);

    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing, true);
    painter.setRenderHint(QPainter::SmoothPixmapTransform);

    //-----------------------------------------
    painter.save();
    //设置新的圆心，其实也是旋转中心
    painter.translate(CenterPoint_X, CenterPoint_Y);
    //旋转一个角度
    painter.rotate(d_Pointer_angle_now);
    //画指针，注意是在指针中心的反方向开始画
    painter.drawPixmap(NeedleCenter_X, NeedleCenter_Y,
                       NeedlePic_W, NeedlePic_H,
                       pix_Needle);
    //使原点复原
    painter.restore();
}

void Widget::roatepinghua()//旋转
{
    static int iDirection = 1;
    d_Pointer_angle_now++;
    if(d_Pointer_angle_now > 10)
    {
        Needle_Step = 3;
    }
//    if(d_Pointer_angle_now >= 120)
//    {
//        d_Pointer_angle_now = 0;
//    }
//    //d_Pointer_angle_now = d_Pointer_angle_now;
      if (d_Pointer_angle_now >= Needle_MaxAngle)
      {
          iDirection = -1;
      }
      else if (d_Pointer_angle_now <= Needle_MinAngle)
      {
          iDirection = 1;
      }

      //每次改变的角度值
      d_Pointer_angle_now = d_Pointer_angle_now + iDirection * Needle_Step;
      qDebug()<<"d_Pointer_angle_now = "<<d_Pointer_angle_now<<endl;
}

void Widget::on_pushButton_clicked()
{
    QString wtmp = ui->lineEdit->text();
    wtmp = wtmp.toInt();

    //nu4 = wtmp.toInt();

    //nu1 = nu2;
    //qDebug()<<"nu2 = "<<nu2<<endl;
}

