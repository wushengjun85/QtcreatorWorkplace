#ifndef WIDGET_H
#define WIDGET_H
#include<QTimer>
#include<QTime>
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

private slots:
    void on_horizontalScrollBar_sliderMoved(int position);
private:
    Ui::Widget *ui;
    QTimer *timerProcessbar;

private slots:
    void processSlot();
};

#endif // WIDGET_H
