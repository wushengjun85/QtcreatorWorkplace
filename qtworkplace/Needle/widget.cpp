#include "widget.h"
#include "ui_widget.h"
#include<QTimeLine>

#include <QPainterPath>
#include <QPainter>
#include <QList>


Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);


//    QTimeLine *timeline=new QTimeLine(5000);
//    timeline->setFrameRange(0, 100);
//    timeline->setLoopCount(1);
//    timeline->setCurveShape(QTimeLine::CosineCurve);
//    connect(timeline,SIGNAL(frameChanged(int)),this,SLOT(roatepinghua()));
//    timeline->start();



    //resize(300, 300);
    setAutoFillBackground(false);
    QPalette pal = palette();
    pal.setColor(QPalette::Background, QColor(0xFF,0xFF,0xFF,0xFF));
    setPalette(pal);
//    startValueLabel = new QLabel(tr("0%"), this);
//    startValueLabel->setFont(QFont("Arial", 11, QFont::Normal));
//    startValueLabel->setStyleSheet("color:#898989");
//    endValueLabel = new QLabel(tr("100%"),this);
//    endValueLabel->setFont(QFont("Arial", 11, QFont::Normal));
//    endValueLabel->setStyleSheet("color:#898989");
    dispayValueLabel = new QLabel(this);
    dispayValueLabel->setStyleSheet("color:#349BDA");
//    updateTimer = new QTimer(this);
//    updateTimer->setInterval(20);
//    connect(updateTimer, SIGNAL(timeout()), this, SLOT(slotUpdateTimer()));

}

Widget::~Widget()
{
    delete ui;
        currentValue = 0;
}

void Widget::setUsedValue(int value)
{
    if(value >= 100)
    {
        currentValue = 100;
    }
    else
    {
        currentValue = value;
    }
    update();
}



#if 0
void Widget::paintEvent(QPaintEvent *)
{
    // 曲线上的点
      static QList<QPointF> points = QList<QPointF>() << QPointF(0, 0) << QPointF(100, 100) << QPointF(200, -100)
                                                      << QPointF(300, 100) << QPointF(330, -80) << QPointF(350, -70);
      QPainterPath path(points[0]);
      for (int i = 0; i < points.size() - 1; ++i) {
          // 控制点的 x 坐标为 sp 与 ep 的 x 坐标和的一半
          // 第一个控制点 c1 的 y 坐标为起始点 sp 的 y 坐标
          // 第二个控制点 c2 的 y 坐标为结束点 ep 的 y 坐标
          QPointF sp = points[i];
          QPointF ep = points[i+1];
          QPointF c1 = QPointF((sp.x() + ep.x()) / 2, sp.y());
          QPointF c2 = QPointF((sp.x() + ep.x()) / 2, ep.y());
          path.cubicTo(c1, c2, ep);
      }
      QPainter painter(this);
      painter.setRenderHint(QPainter::Antialiasing, true);
      painter.setPen(QPen(Qt::black, 2));
      // 绘制 path
      painter.translate(40, 130);
      painter.drawPath(path);
      // 绘制曲线上的点
      painter.setBrush(Qt::gray);
      for (int i = 0; i < points.size(); ++i) {
          painter.drawEllipse(points[i], 4, 4);
      }

}
#endif



void Widget::paintEvent(QPaintEvent *)
{

    QPainter painter(this);
    QColor usedColor(165, 220, 62);
    QColor freeColor(215, 215, 215);
    painter.drawPixmap(QRect((width() - backGround.width())/2 , (height() - backGround.height())/2, backGround.width(), backGround.height()) , backGround);
    painter.translate(width()/2, height()/2);
    painter.setRenderHint(QPainter::Antialiasing);
    painter.setRenderHint(QPainter::SmoothPixmapTransform);
    painter.save();
    painter.rotate(42);
    painter.setPen(QPen(usedColor, 2));
    for (int i = 0; i < currentValue ; ++i) {
        painter.drawLine(0, 70, 0, 80);
        painter.rotate(2.8);
    }
    painter.setPen(QPen(freeColor, 3));
    for (int i = currentValue; i < 100 ; ++i) {
        painter.drawLine(0, 70, 0, 80);
        painter.rotate(2.8);
    }
    if (currentValue == 0) {
        dispayValueLabel->setFont(QFont("Arial", 12, QFont::Bold));
        dispayValueLabel->setText(tr("0%"));
    }
    else {
        dispayValueLabel->setFont(QFont("Arial", 15, QFont::Bold));
        dispayValueLabel->setText(tr("%1%").arg(currentValue));
    }
    QFontMetrics metrics(dispayValueLabel->font());
    int textwidth = metrics.width(dispayValueLabel->text());
    int textheight = metrics.height();
    dispayValueLabel->setGeometry((width() - textwidth)/2, (height() - textheight)/2 , textwidth, textheight);
    painter.restore();
    painter.translate(-width()/2, -height()/2);
    painter.setBrush(QColor(233, 233, 233));
    painter.setPen(QPen(QColor(233, 233, 233), 15));
    painter.drawEllipse(QRectF((width()/2 - 55), (height()/2 - 55), 110, 110));
    QConicalGradient conicalGradient(width()/2, height()/2, 90);
    conicalGradient.setColorAt(0, QColor(45, 204, 112));
    conicalGradient.setColorAt(1.0, QColor(51, 152, 219));
    painter.setPen(QPen(QBrush(conicalGradient), 30));
    painter.drawEllipse(QRectF((width()/2 - 35), (height()/2 - 35), 70, 70));
    painter.setPen(Qt::NoPen);
    painter.setBrush(QColor(249, 249, 249));
    painter.drawEllipse(QRectF((width()/2 - 30), (height()/2 - 30), 60, 60));
}
