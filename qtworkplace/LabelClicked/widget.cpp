#include "widget.h"
#include "ui_widget.h"
#include<QDebug>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

     ui->label->installEventFilter(this);

     QString path = "F:/QtcreatorWorkplace/qtworkplace/LabelClicked/123.png";  // 定义图片的路径

     QPixmap img(path); // 实例化一个img

     ui->label->setPixmap(img); // 在label中添加img

     ui->label->resize(img.width(),img.height());  // 使用图片尺寸设置label大小

}

Widget::~Widget()
{
    delete ui;
}


bool Widget::eventFilter(QObject *watched, QEvent *event)
{

#if 0
    //主界面选择
    if((watched == ui->label_2 && (event->type() == QEvent::Paint)))//||(watched == ui->label_5 && event->type() == QEvent::Paint))
    {
        magicTime();
    }
    else if((watched == ui->label_5 && (event->type() == QEvent::Paint)))
    {
        fun2();
    }
    //时间设置 语言选择 屏幕亮度调节

    else if((watched == ui->lineEdit)||(watched == ui->lineEdit_2)||(watched == ui->dateTimeEdit)||(watched == ui->progressBar))
    {
        if(event->type() == QEvent::KeyPress)
        {
            QKeyEvent *key_event = static_cast < QKeyEvent *>(event); //将事件转化为键盘事件
            {
                if(key_event->key() == Qt::Key_F2)//下键
                {
                    bool f1 = ui->lineEdit->hasFocus();
                    bool f2 = ui->lineEdit_2->hasFocus();
                    bool f3 = ui->dateTimeEdit->hasFocus();
                    bool f4 = ui->progressBar->hasFocus();

                    if(f1)
                    {
                    focusNextChild();
                    ui->lineEdit_2->setFocus();
                    }
                    if(f2)
                    {
                        focusNextChild();
                        ui->dateTimeEdit->setFocus();
                    }
                    if(f3)
                    {
                        focuseflag = ui->dateTimeEdit->currentSectionIndex();
                        ui->dateTimeEdit->setCurrentSectionIndex(++focuseflag);
                        ui->dateTimeEdit->setFocus();
                        qDebug()<<"focuseflag == "<<focuseflag<<endl;
                        if(focuseflag>=6)
                        {
                            focusNextChild();
                            ui->progressBar->setFocus();
                        }
                    }
                    if(f4)
                    {
                        focusNextChild();
                        ui->lineEdit->setFocus();
                    }

                    flagaction = true;
                    return true;
                }
                else if (key_event->key() == Qt::Key_F4)
                {
                    bool ff3 = ui->dateTimeEdit->hasFocus();
                    bool ff4 = ui->progressBar->hasFocus();
                    if(ff3)
                    ui->dateTimeEdit->stepBy(1);
                    else if (ff4)
                        ui->progressBar->setValue(++valueprogressbar);

                    flagaction = true;
                    return true;
                }
                else if (key_event->key() == Qt::Key_F3)
                {
                    bool ff3 = ui->dateTimeEdit->hasFocus();
                    bool ff4 = ui->progressBar->hasFocus();
                    if(ff3)
                    ui->dateTimeEdit->stepBy(-1);
                    else if (ff4)
                        ui->progressBar->setValue(--valueprogressbar);

                    flagaction = true;
                    return true;
                }

            }
        }
    } //clearmenu F2键过滤

#endif
     if(watched == ui->label)
     {
             if(event->type() == QEvent::MouseButtonPress)
             {
                 qDebug()<<"9999999999999999"<<endl;
                 ui->label_2->setText("hello world");
             }
     }

    return QWidget::eventFilter(watched,event);
}
