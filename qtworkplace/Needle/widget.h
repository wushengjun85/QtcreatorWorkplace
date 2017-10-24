#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include<QPaintEvent>
#include <QtCore>
#include <QtGui>
#include <qwidget.h>
#include <QLabel>
#include <QApplication>
#include <qdesktopwidget.h>
namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

    void setUsedValue(int value);

private:
    Ui::Widget *ui;

protected:
    void paintEvent(QPaintEvent *event);
 //   void resizeEvent (QResizeEvent * event);
//    void mousePressEvent(QMouseEvent *event);
//    void mouseMoveEvent(QMouseEvent *event);
//    void mouseReleaseEvent(QMouseEvent *event);
//    void showEvent(QShowEvent *event);
//    void hideEvent(QHideEvent *event);
private slots:
 //   void slotUpdateTimer();
private:
    QPoint beginDrag;
    bool bPressFlag;
    QPixmap backGround;
    int userdVaule;
    int currentValue;
    QLabel *startValueLabel;
    QLabel *endValueLabel;
    QLabel *dispayValueLabel;
 //   QTimer *updateTimer;
};

#endif // WIDGET_H
