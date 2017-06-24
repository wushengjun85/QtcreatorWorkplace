#include "widget.h"
#include "ui_widget.h"
#include<QPaintEvent>
#include<QPainter>
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
    painter.setRenderHint(QPainter::Antialiasing, true);
    int radius = 150;
    int arcHeight = 30;
    painter.translate(width()>>1, height()>>1);
    gradientArc(&painter, radius, 0,  45, arcHeight, qRgb(200, 200, 0));
    gradientArc(&painter, radius, 45, 45, arcHeight, qRgb(200, 0, 200));
    gradientArc(&painter, radius, 90, 45, arcHeight, qRgb(0, 200, 200));
    gradientArc(&painter, radius, 135, 45, arcHeight, qRgb(200, 0, 0));
    gradientArc(&painter, radius, 225, 45, arcHeight, qRgb(0, 200, 0));
    gradientArc(&painter, radius, 180, 45, arcHeight, qRgb(0, 0, 200));
    gradientArc(&painter, radius, 270, 45, arcHeight, qRgb(0, 0, 0));
    gradientArc(&painter, radius, 315, 45, arcHeight, qRgb(150, 150, 150));
}

void Widget::gradientArc(QPainter *painter, int radius, int startAngle, int angleLength, int arcHeight, QRgb color)
{
QRadialGradient gradient(0, 0, radius);
gradient.setColorAt(0, qRgb(255, 255, 255));
gradient.setColorAt(1.0, color);
painter->setBrush(gradient);
QRectF rect(-radius, -radius, radius<<1, radius<<1);
QPainterPath path;
path.arcTo(rect, startAngle, angleLength);
QPainterPath subPath;
subPath.addEllipse(rect.adjusted(arcHeight, arcHeight, -arcHeight, -arcHeight));
path -= subPath;
painter->setPen(Qt::NoPen);
painter->drawPath(path);
}
