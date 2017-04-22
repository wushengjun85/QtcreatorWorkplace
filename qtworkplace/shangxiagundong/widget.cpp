#include "widget.h"
#include "ui_widget.h"
#include <QPainter>
#include <QTimerEvent>
#include <QTimer>
#include <QLabel>
#include <QString>

QString text = "helloworld";
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    offset = timerID = textHeight = 0;
    connect(this, SIGNAL(currentTextChanged()), SLOT(metrics()));
}

Widget::~Widget()
{
    delete ui;
}


void Widget::setText(const QString &curText)
{
if (text != curText) {
//QLabel::setText(curText);
ui->label->setText(curText);
emit currentTextChanged();
}
}

// 开始启动定时器 设为 50
void Widget::startScroll()
{
  timerID = startTimer(50);
}


void Widget::metrics()
{
offset = 0;

// getHeight + QLabel高度是为了 一段过长的文字显示完后再重新开始滚动显示
// 不然的话第一行会紧接着末尾显示出来。
textHeight = getHeight() +height() ;
QTimer::singleShot(500, this, SLOT(startScroll()));
this->update();
}

// 这里是重点，我们得到的一段信息有没有换行符号，要自动换行
// 这就要得到字体的高度和宽度来处理这一段文字，处理完后调用
// settext 设置到Qlabel 上面去。
int Widget::getHeight()
{
#define MARGIN  5

char newMsg[1024] ={0};
char *message = text.toLatin1().data();

int len = strlen(message);
char mss[len];
memcpy(mss,text.toLatin1().data(),len);

int i;
int row =1;
int line_width =0;
int font_width = 0;
int max_width = 0;
int j=0;

QFontMetrics fm = fontMetrics();
int  h = 18;    // 这里指定我们想要的字体高度

printf("len  = %d\n",len);
for (i=0; i<len; i++) {

font_width = fm.width(mss[i]);
if (mss[i] == '\n') {       // line feed
line_width = 0;
newMsg[j++] = mss[i];
row++;
continue;
}

if ((line_width+font_width) > width()) {
max_width = line_width;
newMsg[j++] = '\n';
line_width = 0;
row++;
}

line_width += font_width;
newMsg[j++] = mss[i];
//printf("line_width = %d\n",line_width);
if (line_width > max_width) max_width = line_width;

if(j == sizeof(newMsg)-1) break;

}

printf("row = %d\n",row);

// 上面经过处理得到结果，查看下有多少行。
// 设置到QLabel 上去
  setText(newMsg);
// 返回 行*字体高度 + 这里我们加了10 的预留空间。
  return row*h+(MARGIN<<1);
}

// 显示我们就启动定时器
void Widget::showEvent(QShowEvent *)
{
    metrics();
}

void Widget::paintEvent(QPaintEvent *event)
{
QPainter painter(this);
if (textHeight < 1) return;

int y = -offset;
while (y < height()) {
painter.drawText(0, y, width(), textHeight,
Qt::AlignLeft | Qt::AlignVCenter, text);
y += textHeight;
}
}

void Widget::timerEvent(QTimerEvent *event)
{
if (event->timerId() == timerID) {
++offset;
if (offset >= textHeight)
offset = 0;
scroll(0, -1);    // X 轴不变，Y 轴 向上偏移 1
} else {
QWidget::timerEvent(event);
}
}

// 隐藏我们就停止掉 定时器
void Widget::hideEvent(QHideEvent *)
{
     offset = 0;
     if (timerID) killTimer(timerID);
}
