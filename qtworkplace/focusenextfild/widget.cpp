#include "widget.h"
#include "ui_widget.h"
#include <QKeyEvent>
#include<QDebug>
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    ui->pushButton->setAutoDefault(true);
    //ui->pushButton->focusPolicy();


#if 1
    ui->pushButton->installEventFilter(this);
    ui->pushButton_2->installEventFilter(this);
    ui->pushButton_3->installEventFilter(this);
    ui->pushButton_4->installEventFilter(this);
    ui->pushButton_5->installEventFilter(this);
    ui->pushButton_6->installEventFilter(this);
    ui->pushButton_7->installEventFilter(this);
    ui->pushButton_8->installEventFilter(this);
    ui->pushButton_9->installEventFilter(this);
    ui->pushButton_10->installEventFilter(this);
    ui->pushButton_11->installEventFilter(this);
    ui->pushButton_12->installEventFilter(this);
#endif


}

Widget::~Widget()
{
    delete ui;
}

bool Widget::eventFilter(QObject *watched, QEvent *event)
{
#if 1
    if(
            watched==ui->pushButton||
            watched==ui->pushButton_2||
            watched==ui->pushButton_3||
            watched==ui->pushButton_4||
            watched==ui->pushButton_5||
            watched==ui->pushButton_6||
            watched==ui->pushButton_7||
            watched==ui->pushButton_8||
            watched==ui->pushButton_9||
            watched==ui->pushButton_10||
            watched==ui->pushButton_11||
            watched==ui->pushButton_12
       )



    {

//        if ((event->type()==QEvent::FocusIn)&&(watched==ui->pushButton_5))     //然后再判断控件的具体事件(这里指获得焦点事件)
//        {
//            //ui->pushButton_5->setStyleSheet("border:2px solid red;");"QPushButton:focus{border:none; background: green; color: white;}
//            ui->pushButton_5->setStyleSheet("QPushButton:focus{border:none; background: red; color: grope;}");
//            qDebug()<<"pushbutton 5555555555555"<<endl;
//        }

           if(event->type()==QEvent::KeyPress)
              {
                  QKeyEvent *key_event = static_cast < QKeyEvent *>(event); //将事件转化为键盘事件



                  if(key_event->key() == Qt::Key_M)//下键
                  {
                      bool  pushButton =ui->pushButton->hasFocus();
                      bool  pushButton_5 =ui->pushButton_5->hasFocus();
                      bool  pushButton_9 =ui->pushButton_9->hasFocus();
                      if( pushButton)//焦点在pushButton处
                      {
                        focusNextChild();//焦点移动
                        ui->pushButton_5->setFocus();//移动到apushButton_2
                      }
                      else if(pushButton_5)//焦点在apushButton_5处
                      {
                        focusNextChild();//焦点移动
                        ui->pushButton_9->setFocus();//移动到pushButton_3
                      }
                      else if(pushButton_9)//焦点在pushButton_9处
                      {
                        focusNextChild();//焦点移动
                        ui->pushButton->setFocus();//移动到pushButton_4
                      }
//                      else
//                      {
//                          focusNextChild();//焦点移动
//                      }



                      return true;
                  }

                  if(key_event->key() == Qt::Key_D)//d下键
                  {

                         bool  pushButton =ui->pushButton->hasFocus();
                         bool  pushButton_2 =ui->pushButton_2->hasFocus();
                         bool  pushButton_3 =ui->pushButton_3->hasFocus();
                         bool  pushButton_4 =ui->pushButton_4->hasFocus();//定义4个获得焦点的状态

                         if(pushButton)//焦点在pushButton处
                         {
                           focusNextChild();//焦点移动
                           ui->pushButton_2->setFocus();//移动到apushButton_2
                           qDebug()<<"pushButton down"<<endl;
                         }
                         else if(pushButton_2)//焦点在apushButton_2处
                         {
                           focusNextChild();//焦点移动
                           ui->pushButton_3->setFocus();//移动到pushButton_3
                           qDebug()<<"pushButton2 down"<<endl;
                         }
                         else if(pushButton_3)//焦点在pushButton_3处
                         {
                           focusNextChild();//焦点移动
                           ui->pushButton_4->setFocus();//移动到pushButton_4
                           qDebug()<<"pushButton3 down"<<endl;
                         }
                         else if(pushButton_4)//焦点在pushButton_3处
                         {
                           focusNextChild();//焦点移动
                           ui->pushButton->setFocus();//移动到pushButton_2
                           qDebug()<<"pushButton4 down"<<endl;
                         }
//                         else
//                         {
//                             focusNextChild();//焦点移动
//                         }
                         return true;
                   }
                  if(key_event->key() == Qt::Key_S)//s下键
                  {

                         bool  pushButton_5 =ui->pushButton_5->hasFocus();
                         bool  pushButton_6 =ui->pushButton_6->hasFocus();
                         bool  pushButton_7 =ui->pushButton_7->hasFocus();
                         bool  pushButton_8 =ui->pushButton_8->hasFocus();//定义4个获得焦点的状态

                         if(pushButton_5)//焦点在pushButton处
                         {
                           focusNextChild();//焦点移动
                           ui->pushButton_6->setFocus();//移动到apushButton_2
                         }
                         else if(pushButton_6)//焦点在apushButton_6处
                         {
                           focusNextChild();//焦点移动
                           ui->pushButton_7->setFocus();//移动到pushButton_3
                         }
                         else if(pushButton_7)//焦点在pushButton_7处
                         {
                           focusNextChild();//焦点移动
                           ui->pushButton_8->setFocus();//移动到pushButton_4
                         }
                         else if(pushButton_8)//焦点在pushButton_8处
                         {
                           focusNextChild();//焦点移动
                           ui->pushButton_5->setFocus();//移动到pushButton_2
                         }
//                         else
//                         {
//                             focusNextChild();//焦点移动
//                         }
                         return true;
                   }
                  if(key_event->key() == Qt::Key_H)//h下键
                  {

                         bool  pushButton_9 =ui->pushButton_9->hasFocus();
                         bool  pushButton_10 =ui->pushButton_10->hasFocus();
                         bool  pushButton_11 =ui->pushButton_11->hasFocus();
                         bool  pushButton_12 =ui->pushButton_12->hasFocus();//定义4个获得焦点的状态

                         if(pushButton_9)//焦点在pushButton处
                         {
                           focusNextChild();//焦点移动
                           ui->pushButton_10->setFocus();//移动到apushButton_2
                         }
                         else if(pushButton_10)//焦点在apushButton_10处
                         {
                           focusNextChild();//焦点移动
                           ui->pushButton_11->setFocus();//移动到pushButton_3
                         }
                         else if(pushButton_11)//焦点在pushButton_11处
                         {
                           focusNextChild();//焦点移动
                           ui->pushButton_12->setFocus();//移动到pushButton_4
                         }
                         else if(pushButton_12)//焦点在pushButton_12处
                         {
                           focusNextChild();//焦点移动
                           ui->pushButton_9->setFocus();//移动到pushButton_2
                         }
//                         else
//                         {
//                             focusNextChild();//焦点移动
//                         }
                         return true;
                   }
              }

    }

 return QWidget::eventFilter(watched,event);     // 最后将事件交给上层对话框
#endif
}
