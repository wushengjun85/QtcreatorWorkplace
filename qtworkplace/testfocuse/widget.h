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

protected:
    bool eventFilter(QObject *watched, QEvent *event);
    void mousePressEvent(QMouseEvent *event);
    void changeEvent(QEvent *e);

private slots:
    void on_lineEdit_4_selectionChanged();
    void on_lineEdit_4_cursorPositionChanged(int arg1, int arg2);
    void on_lineEdit_4_textChanged(const QString &arg1);
    void on_dateTimeEdit_dateTimeChanged(const QDateTime &dateTime);
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();
};

#endif // WIDGET_H
