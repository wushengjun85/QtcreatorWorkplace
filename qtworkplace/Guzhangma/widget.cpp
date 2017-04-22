#include "widget.h"
#include "ui_widget.h"
#include<QString>
uchar mm;

QString dbg[10] = {"空调压缩机开路","油门与刹车","豪威尔","一","二","","三"};

long spn;
uchar fmi;


Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    timergzm = new QTimer();//故障码
    connect(timergzm, SIGNAL(timeout()), this, SLOT(gzmslottest()));  //连接信号槽，定时器超时触发窗体更新
    timergzm->start(1000);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::gzmslottest()
{


//    switch(mm)
//    {
//    case 0:
//        ui->label->setText(dbg[0]);
//        break;
//    case 1:
//        ui->label->setText(dbg[1]);
//        break;
//    case 2:
//        ui->label->setText(dbg[2]);
//        break;
//    default:
//        break;

//    }
//    mm++;
//    if (mm>=3)
//    {
//        mm = 0;
//    }


    spn = 1351;
    fmi = 5;
   mm= fun(spn,fmi);
        switch(mm)
        {
        case 0:
            ui->label->setText(dbg[0]);
            break;
        case 1:
            ui->label->setText(dbg[1]);
            break;
        case 2:
            ui->label->setText(dbg[2]);
            break;
        default:
            break;
        }

}
uint Widget::fun(long a, uchar b)
{
    if((a == 1351)&&(b = 5))
    {
        return 1;
    }
    else if((a == 1351)&&(b = 3))
    {
        return 2;
    }
    else if((a == 1351)&&(b = 4))
    {
        return 3;
    }

}
