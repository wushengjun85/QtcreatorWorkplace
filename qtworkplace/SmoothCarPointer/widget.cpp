#include "widget.h"
#include "ui_widget.h"
#include<QDebug>
#include<QString>
int nu1 = 0;

bool flagRoate = false;
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    num_timer = new QTimer();
    connect(num_timer,SIGNAL(timeout()),this,SLOT(draw_number_car()));
    connect(num_timer,SIGNAL(timeout()),this,SLOT(update()));  //连接信号槽，定时器超时触发窗体更新
    num_timer->start(10);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::paintEvent(QPaintEvent *)
{

    QPainter painter(this);

    QPixmap pix;
    painter.setRenderHint(QPainter::Antialiasing);//绘制的图像反锯齿
    //painter.translate(width() / 2, height() / 2);//重新定位坐标起始点，把坐标原点放到窗体的中央

    //painter.translate(405, 184);//重新定位坐标起始点，把坐标原点放到窗体的中央
     painter.translate(210, 363);//重新定位坐标起始点，把坐标原点放到窗体的中央
    //painter.scale(side / 400.0, side / 300.0);//设定画布的边界,用窗体宽高的最小值来计算时钟的大小，防止窗体拉伸导致的时钟变形以及显示不全

    //下面两个数组用来定义表针的两个顶点，以便后面的填充
    static const QPoint hourHand[4] = {
        QPoint(8, 0),
        QPoint(-8,0),
        QPoint(-1.5, -160),
        QPoint(1.5, -160)
    };
    static const QPoint minuteHand[4] = {
        QPoint(4, 0),
        QPoint(-4, 0),
        QPoint(-1, -55),
        QPoint(1, -55)
    };

    //油压

    painter.setPen(Qt::NoPen);//填充时针，不需要边线所以NoPen
    painter.setBrush(Qt::red);
    painter.setRenderHint(QPainter::Antialiasing, true);
    painter.setRenderHint(QPainter::SmoothPixmapTransform,true);

    painter.save();
    painter.rotate(-114.5);
    painter.rotate(nu1);//floatnu1

    painter.drawConvexPolygon(minuteHand, 4);  //填充分针部分
    painter.restore();

    /***********************************************/
    //2016.6.25   画白圈
    painter.setBrush(Qt::black); //画上中心原点/home/vmuser/qtworkplace/chanpin/img2 darkGray
    painter.save();
    painter.drawEllipse(QPoint(0,0),13,13);
    painter.restore();

    //画白圈
    /***********************************************/

    painter.setBrush(Qt::darkGray);//画上中心原点/home/vmuser/qtworkplace/chanpin/img2
    painter.save();
    painter.drawEllipse(QPoint(0,0),10,10);
    painter.restore();


    //风机转速
    painter.translate(377,1);//重新定位坐标起始点，把坐标原点放到窗体的中央
    //painter.scale(side / 400.0, side / 300.0);

    painter.setPen(Qt::NoPen);
    painter.setBrush(Qt::red);
    painter.setRenderHint(QPainter::Antialiasing, true);
    painter.setRenderHint(QPainter::SmoothPixmapTransform,true);
    painter.save();

    //painter.rotate(6.0 *time.second());  //设旋转(角度 = 6° * (分钟 + 秒 / 60))
    painter.rotate(-114.5);
    //painter.rotate(8*nu3);
    painter.rotate(nu1);//



    //painter.rotate(4.0 );  //设旋转(角度 = 6° * (分钟 + 秒 / 60))*shisu
    //内测用
    /****************************************************************************/
    //qDebug()<<"time: "<<time.second()<<endl;

    /****************************************************************************/

    painter.drawConvexPolygon(minuteHand, 4);  //填充分针部分
    painter.setRenderHint(QPainter::Antialiasing, true);
    painter.setRenderHint(QPainter::SmoothPixmapTransform,true);
    painter.restore();

    /***********************************************/
    //2016.6.25   画白圈
    painter.setBrush(Qt::black); //画上中心原点/home/vmuser/qtworkplace/chanpin/img2
    painter.save();
    painter.drawEllipse(QPoint(0,0),13,13);
    painter.restore();

    //画白圈
    /***********************************************/


    painter.setBrush(Qt::darkGray);
    painter.save();//画上中心原点
    painter.drawEllipse(QPoint(0,0),10,10);
    painter.restore();

    //KM/H
    painter.translate(-187,-35);//重新定位坐标起始点，把坐标原点放到窗体的中央
    //painter.scale(side / 400.0, side / 300.0);

    painter.setPen(Qt::NoPen);
    painter.setBrush(Qt::red);
    painter.setRenderHint(QPainter::Antialiasing, true);
    painter.setRenderHint(QPainter::SmoothPixmapTransform,true);
    painter.save();

    //painter.rotate(6.0 *time.second());  //设旋转(角度 = 6° * (分钟 + 秒 / 60))
    painter.rotate(-114);
    painter.rotate(nu1);//



    //painter.rotate(4.0 );  //设旋转(角度 = 6° * (分钟 + 秒 / 60))*shisu
    //内测用
    /****************************************************************************/
    //qDebug()<<"time: "<<time.second()<<endl;

    /****************************************************************************/

    painter.drawConvexPolygon(minuteHand, 4);  //填充分针部分
    painter.setRenderHint(QPainter::Antialiasing, true);
    painter.setRenderHint(QPainter::SmoothPixmapTransform,true);
    painter.restore();

    /***********************************************/
    //2016.6.25   画白圈
    painter.setBrush(Qt::black); //画上中心原点/home/vmuser/qtworkplace/chanpin/img2
    painter.save();
    painter.drawEllipse(QPoint(0,0),13,13);
    painter.restore();

    //画白圈
    /***********************************************/


    painter.setBrush(Qt::darkGray);
    painter.save();//画上中心原点
    painter.drawEllipse(QPoint(0,0),10,10);
    painter.restore();

    //处理图片闪烁
    painter.translate(-390,-226);//平移到左边角
}

void Widget::draw_number_car()
{
    if(flagRoate == false)
    {
        nu1++;
        //nu1 += 40;
    }
    else
    {
        nu1--;
        //nu1 -= 40;
    }

    ui->label_2->setText(QString::number(nu1));

    if(nu1>230)
    {
        //nu1 = 0;
        flagRoate =  true;
    }
    else if(nu1 <= 0)
    {
        flagRoate = false;
    }

    qDebug()<<"painte...... "<<nu1<<endl;
}

void Widget::on_pushButton_clicked()
{
    QString nu11 = ui->lineEdit->text();
    nu1 = nu11.toInt();
    //ui->label->move(64,0);

    if(nu1>360)
    {
        nu1 = 0;
    }
}
