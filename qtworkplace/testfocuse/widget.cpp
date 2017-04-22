#include "widget.h"
#include "ui_widget.h"
#include<QKeyEvent>
#include<QDebug>
#include <QTranslator>

//判断是哪一个语言
QString lang = "en.qm";
int flag = 0;

int i;
int datetimecurse = 0;


bool f1;
bool f2;
bool f3;
bool f4;
bool f5;
bool f6;


int numM = 0;


Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    //ui->pushButton->setFocus();
    //ui->pushButton->setAutoDefault(true);

    ui->lineEdit->installEventFilter(this);
    ui->lineEdit_2->installEventFilter(this);
    ui->lineEdit_3->installEventFilter(this);
    ui->lineEdit_4->installEventFilter(this);
    ui->progressBar->installEventFilter(this);
    ui->dateTimeEdit->installEventFilter(this);

    ui->spinBox->setRange(0,10);
}

Widget::~Widget()
{
    delete ui;
}
bool Widget::eventFilter(QObject *watched, QEvent *event)
{
    if((watched == ui->lineEdit)||(watched == ui->lineEdit_2)||(watched == ui->lineEdit_3)||(watched == ui->lineEdit_4)||(watched == ui->progressBar)||(watched == ui->dateTimeEdit))
    {
        if(event->type() == QEvent::KeyPress)
        {
            QKeyEvent *key_event = static_cast < QKeyEvent *>(event); //将事件转化为键盘事件
            {
                if(key_event->key() == Qt::Key_D)//下键
                {
                    f1 = ui->lineEdit->hasFocus();
                    f2 = ui->lineEdit_2->hasFocus();
                    f3 = ui->lineEdit_3->hasFocus();
                    f4 = ui->lineEdit_4->hasFocus();
                    f5 = ui->progressBar->hasFocus();
                    f6 = ui->dateTimeEdit->hasFocus();

                    if(f1)
                    {
                    focusNextChild();
                    ui->lineEdit_2->setFocus();
                    }
                    if(f2)
                    {
                        focusNextChild();
                        ui->lineEdit_3->setFocus();
                    }
                    if(f3)
                    {
                        focusNextChild();
                        ui->lineEdit_4->setFocus();
                    }

                    if(f4)
                    {
                        focusNextChild();
                        ui->progressBar->setFocus();
                    }
                    if(f5)
                    {
                        focusNextChild();
                        ui->dateTimeEdit->setFocus();
                    }
                    if(f6)
                    {
                        focusNextChild();
                        ui->lineEdit->setFocus();
                    }
                    return true;
                }
                else if (key_event->key() == Qt::Key_Down)
                {


                    i = ui->lineEdit_4->cursorPosition();
                    ui->lineEdit_4->setCursorPosition(--i);
                    ui->lineEdit_4->setSelection(i,1);
                    ui->lineEdit_4->setFocus();

                    qDebug()<<"selected text = "<<ui->lineEdit_4->selectedText()<<endl;
                    qDebug()<<"i = "<<i<<endl;
                    //ui->lineEdit_4->deselect();
                    ui->lineEdit_4->undo();

                    return true;

                }
#if 0
                else if (key_event->key() == Qt::Key_Up)
                {
                    i = ui->lineEdit_4->cursorPosition();
                    ui->lineEdit_4->setCursorPosition(++i);
                    ui->lineEdit_4->setFocus();

                     return true;
                }
#endif
                else if(key_event->key() == Qt::Key_J)
                {
                    datetimecurse = ui->dateTimeEdit->currentSectionIndex();

                    ui->dateTimeEdit->setCurrentSectionIndex(++datetimecurse);
                    ui->dateTimeEdit->setFocus();
                    return true;

//                    QMouseEvent* press=new QMouseEvent(QEvent::MouseButtonPress,QPoint(2,2), Qt::LeftButton,Qt::LeftButton,Qt::NoModifier);
//                    QApplication::postEvent(ui->pushButton,press);
//                    QMouseEvent* release=new QMouseEvent(QEvent::MouseButtonRelease,QPoint(2,2),Qt::LeftButton,Qt::LeftButton,Qt::NoModifier);
//                    QApplication::postEvent(ui->pushButton,release);


                }
                else if (key_event->key() == Qt::Key_H) {
                    if(f5)
                    ui->spinBox->stepUp();

                    //ui->dateTimeEdit->stepUp();
                    else if(f6)
                    ui->dateTimeEdit->stepBy(1);

                    //ui->spinBox->setRange(0,10);
//                    QPoint pos;
//                    pos.setX(330);
//                    pos.setY(407);
//                    QMouseEvent *mEvnPress;
//                    QMouseEvent *mEvnRelease;
//                    mEvnPress = new QMouseEvent(QEvent::MouseButtonPress, pos, Qt::LeftButton, Qt::LeftButton, Qt::NoModifier);
//                    QApplication::sendEvent(ui->pushButton_2,mEvnPress);
//                    mEvnRelease = new QMouseEvent(QEvent::MouseButtonRelease, pos, Qt::LeftButton, Qt::LeftButton, Qt::NoModifier);
//                    QApplication::sendEvent(ui->pushButton_2,mEvnRelease);
                }
                else if (key_event->key() == Qt::Key_M) {
                    numM++;
                    qDebug()<<"numM == "<<numM<<endl;

                }

            }
        }
    }
    //else if(watched == )
     return QWidget::eventFilter(watched,event);     // 最后将事件交给上层对话框
}

void Widget::on_lineEdit_4_selectionChanged()
{
    //qDebug()<<"selected text = "<<ui->lineEdit_4->selectedText()<<endl;

}

void Widget::on_lineEdit_4_cursorPositionChanged(int arg1, int arg2)
{

    ui->lineEdit_4->setSelection(i,1);
    qDebug()<<"selected text = "<<ui->lineEdit_4->selectedText()<<endl;
    qDebug()<<"i = "<<i<<endl;
}

void Widget::on_lineEdit_4_textChanged(const QString &arg1)
{
    //qDebug()<<"text changed ..."<<arg1<<endl;
}

void Widget::on_dateTimeEdit_dateTimeChanged(const QDateTime &dateTime)
{
    qDebug()<<"complete!!!!"<<endl;
}

void Widget::on_pushButton_clicked()
{
    qDebug()<<"time is seted"<<endl;
}

void Widget::mousePressEvent(QMouseEvent *event)
{

//    int x = event->pos().x();
//    int y = event->pos().y();
//    qDebug()<<"(x,y) = ("<<x<<","<<y<<")"<<endl;
}

void Widget::on_pushButton_2_clicked()
{
     qDebug()<<"6666666666666666666"<<endl;
}

void Widget::on_pushButton_3_clicked()
{
//    m_systemTranslator.load(QString(":/qm/qt_zh_CN.qm"));
//    qApp->installTranslator(&translator);

    //判断是哪一个语言
    //QString lang = "en.qm";
     //lang = "en.qm";
     flag ^= 1;
     if (flag)
         lang = "en.qm";
     else
         lang = "zh.qm";

//    if(arg1 == "English"){
//        lang = "en.qm";
//    }

    //安装语言翻译器
    static QTranslator* translator = NULL;
    if (translator != NULL)
    {
        qApp->removeTranslator(translator);

        delete translator;
        translator = NULL;
    }
    translator = new QTranslator();
    QString qmFilename = "lang_" + lang;
    //这里用了绝对路径你要更改回来哦
    if (translator->load(
                QString("F:/qtworkplace/testfocuse/"
                        )+qmFilename))
    {
        bool fb = qApp->installTranslator(translator);
    }
}

void Widget::on_pushButton_4_clicked()
{
//    qApp->removeTranslator(&translator);

    //lang = "zh.qm";
}

void Widget::changeEvent(QEvent *e)
{
    QWidget::changeEvent(e);
    switch (e->type())
    {
    qDebug()<<"hello lsldldl"<<endl;
       case QEvent::LanguageChange:
            ui->retranslateUi(this);
            //还有其他手工更新界面的内容
        break;
       default:
        break;
    }
}
