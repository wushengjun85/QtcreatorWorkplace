#include "widget.h"
#include "ui_widget.h"
#include<QString>
#include <QTextCodec>
#include<QDebug>

QString m_scrollCaptionStr;

char *stringarry = {"汉字"};

QString dataSum[5] = {"语文","数学","英语","化学","物理"};
int numSumTemp = 0;
int tempNum = 0;

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);


    QString uuu = QString(stringarry);
    ui->label_3->setText(uuu);


    for(int i=0;i<5;i++)
    {
        ui->listWidget->addItem(tr("item : ") + QString::number(i));
    }
    ui->listWidget->setGridSize(QSize(93,93));
    QListWidgetItem * pItem = new QListWidgetItem;
    pItem->setSizeHint(QSize(90, 92));  //每次改变Item的高度

    pItem->setText("大节点");

    ui->listWidget->insertItem(6,pItem);
    ui->listWidget->setGridSize(QSize(93,93));

    //ui->listWidget-> setStyleSheet("gridline-color: rgb(255, 0, 0)");//"border:2px solid red;"
    //ui->listWidget->setGridSize(QSize(20,20));

   //QString m_scrollCaptionStr = QStringLiteral("欢迎加入我们：Qt分享&&交流 26197884")；
    m_scrollCaptionStr = "豪威尔欢迎您";
    m_timer = new QTimer(this);
    connect(m_timer,  SIGNAL(timeout()),  this,  SLOT(scrollCaption()));
    m_timer->start(300);



    setMinimumWidth(50);
    setMinimumHeight(40);
    m_curIndex = 0;//当前角码
    m_showText = "This is a textTicker Text!";//显示的文字
   // m_charWidth = fontMetrics().width("a");//每个字符的宽度
    m_charWidth = fontMetrics().height();//每个字符的宽度

    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this,SLOT(updateIndex()));
    timer->start(100);

    Three_timer = new QTimer(this);
    connect(Three_timer,SIGNAL(timeout()),this,SLOT(sumTest()));
    Three_timer->start(3000);


    Five_timer = new QTimer(this);
    connect(Five_timer,SIGNAL(timeout()),this,SLOT(hideTest()));
    Five_timer->start(1000);

}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_clicked()
{
    ui->listWidget->close();
    ui->stackedWidget->setCurrentIndex(1);

}

void Widget::on_pushButton_2_clicked()
{
    ui->listWidget->show();
}

void Widget::on_listWidget_currentItemChanged(QListWidgetItem *current, QListWidgetItem *previous)
{
    if(current==Q_NULLPTR)return;
    if(previous!=Q_NULLPTR)
    {
        previous->setBackgroundColor(Qt::transparent);
        previous->setTextColor(Qt::black);
    }
    current->setBackgroundColor(Qt::red);
    current->setTextColor(Qt::blue);
}

void Widget::on_pushButton_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void Widget::scrollCaption()
{
    static int nPos = 0;
    if (nPos > m_scrollCaptionStr.length())
    {
        nPos = 0;
    }

    ui->label->setText(m_scrollCaptionStr.mid(nPos));
    nPos++;
}



void Widget::paintEvent(QPaintEvent *event)
{
   // __super::paintEvent(event);
    QPainter painter(this);
    painter.drawText(0, 30, m_showText.mid(m_curIndex));
    painter.drawText(width() - m_charWidth*m_curIndex, 30, m_showText.left(m_curIndex));
//    painter.drawText(0, 30, m_showText);
//    painter.drawText(height() - m_charWidth*m_curIndex, 30, m_showText.left(m_curIndex));

}
void Widget::updateIndex()
{
    update();
    m_curIndex++;
    if (m_curIndex*m_charWidth >width())
        m_curIndex = 0;
}

void Widget::sumTest()
{

#if 0
    if(ui->label_4->isHidden())
    {
        ui->label_4->show();
            ui->label_4->setText(dataSum[numSumTemp++]);
            if(numSumTemp >= 5)
            {
                numSumTemp = 0;
            }
    }
    else
    {
        ui->label_4->hide();
    }
#endif

}

void Widget::hideTest()
{

    ui->label_4->setText(dataSum[numSumTemp]);

    tempNum++;
    qDebug()<<"tempNum == "<<tempNum<<endl;
    if((tempNum == 3)||(tempNum == 4))
    {
        qDebug()<<"222222222222222222222 == "<<tempNum<<endl;
        if(tempNum == 4)
        {
            numSumTemp++;
            if(numSumTemp >= 5)
            {
                numSumTemp = 0;
            }
        }

         ui->label_4->setText(" ");
    }
    else if(tempNum == 5)
    {
        tempNum = 0;
    }

}

