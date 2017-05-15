#include "widget.h"
#include "ui_widget.h"
#include<QPainter>
#include<QPaintEvent>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);
    painter.setRenderHint(QPainter::SmoothPixmapTransform);
    painter.save();

#if 1
    //线性渐变
    QLinearGradient linearGradient(10,10,100,100);
    //创建了一个QLinearGradient对象实例，参数为起点和终点坐标，可作为颜色渐变的方向
    //painter.setPen(Qt::NoPen);
    linearGradient.setColorAt(0.0,Qt::green);
    linearGradient.setColorAt(0.2,Qt::white);
    linearGradient.setColorAt(0.4,Qt::blue);
    linearGradient.setColorAt(0.6,Qt::red);
    linearGradient.setColorAt(1.0,Qt::yellow);
    painter.setBrush(QBrush(linearGradient));
    painter.drawEllipse(10,10,100,100);
    //前面为左边，后面两个参数为横轴和纵轴,上面的四行分别设置渐变的颜色和路径比例

    //辐射渐变
    QRadialGradient radialGradient(10+50 , 120+50, 50, 60, 170);
    //创建了一个QRadialGradient对象实例，参数分别为中心坐标，半径长度和焦点坐标,如果需要对称那么中心坐标和焦点坐标要一致
    radialGradient.setColorAt(0,Qt::green);
    radialGradient.setColorAt(0.2,Qt::white);
    radialGradient.setColorAt(0.4,Qt::blue);
    radialGradient.setColorAt(0.6,Qt::red);
    radialGradient.setColorAt(1.0,Qt::yellow);
    painter.setBrush(QBrush(radialGradient));
    painter.drawEllipse(10,120,100,100);//在相应的坐标画出来

#endif

    //弧度渐变
    QConicalGradient conicalGradient(10+50,  230 + 50,160);
    //创建了一个QConicalGradient对象实例，参数分别为中心坐标和初始角度
    conicalGradient.setColorAt(0,Qt::green);
    conicalGradient.setColorAt(0.5,Qt::white);
    conicalGradient.setColorAt(0.4,Qt::blue);
    conicalGradient.setColorAt(0.6,Qt::red);
    conicalGradient.setColorAt(0.8,Qt::yellow);
    conicalGradient.setColorAt(1.0,Qt::green);


    //设置渐变的颜色和路径比例

    painter.setBrush(QBrush(conicalGradient));
    painter.drawEllipse(10, 230, 100, 100);//在相应的坐标画出来
    painter.restore();

    painter.save();



    QConicalGradient conicalGradient2(width()/2, height()/2, 90);
//    conicalGradient2.setColorAt(0, QColor(45, 204, 112));
//    conicalGradient2.setColorAt(1.0, QColor(51, 152, 219));

    conicalGradient2.setColorAt(0, Qt::red);
    conicalGradient2.setColorAt(0.2, Qt::green);
    conicalGradient2.setColorAt(0.6, Qt::red);
    conicalGradient2.setColorAt(1.0, Qt::green);

    painter.setPen(QPen(QBrush(conicalGradient2), 30));
    painter.drawEllipse(QRectF((width()/2 - 65), (height()/2 - 65), 130, 130));
    painter.restore();

#if 1

    //QPainterPath画圆角矩形
    painter.save();
    const qreal radius = 26;
    QPainterPath path;
    QRectF rect = QRect(150, 10, 100, 100);
    QLinearGradient myGradient(rect.topLeft(), rect.bottomRight());
    myGradient.setColorAt(0.0,Qt::green);
    myGradient.setColorAt(0.9,Qt::yellow);
    path.moveTo(rect.topRight() - QPointF(radius, 0));
    path.lineTo(rect.topLeft() + QPointF(radius, 0));
    path.quadTo(rect.topLeft(), rect.topLeft() + QPointF(0, radius));
    path.lineTo(rect.bottomLeft() + QPointF(0, -radius));
    path.quadTo(rect.bottomLeft(), rect.bottomLeft() + QPointF(radius, 0));
    path.lineTo(rect.bottomRight() - QPointF(radius, 0));
    path.quadTo(rect.bottomRight(), rect.bottomRight() + QPointF(0, -radius));
    path.lineTo(rect.topRight() + QPointF(0, radius));
    path.quadTo(rect.topRight(), rect.topRight() + QPointF(-radius, -0));
    painter.setBrush(myGradient);
    painter.fillPath(path, QColor(Qt::green));
    painter.drawPath(path);
    painter.restore();
    QWidget::paintEvent(event);
#endif

}
