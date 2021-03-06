#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include<QPainter>
#include<QDebug>
#include<QTimer>
#include<QPaintEvent>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();


protected:
    void paintEvent(QPaintEvent *);

    QTimer *num_timer;

private:
    Ui::Widget *ui;
private slots:
    void draw_number_car();
    void on_pushButton_clicked();
};

#endif // WIDGET_H
