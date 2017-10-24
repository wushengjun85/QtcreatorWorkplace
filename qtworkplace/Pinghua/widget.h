#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private:
    Ui::Widget *ui;

    QPixmap pix_Needle;
    QTimer *timer_Main;
    QTimer *updatetimer;
protected:
void paintEvent(QPaintEvent *);

private slots:
void roatepinghua();//旋转
//void timeoutfun();//超时
/*************************/
//    void xiaoshiji();//小时计
//    void Licheng();//里程
//    void shanhua();//闪烁和平滑转动
//    void gzmslottest();//故障码

//    void gzmsloTihua();//故障码tihuan

//    void xxyyslot(); //ceshi
/*************************/

void on_pushButton_clicked();

};

#endif // WIDGET_H
