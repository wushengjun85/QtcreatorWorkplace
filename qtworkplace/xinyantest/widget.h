#ifndef WIDGET_H
#define WIDGET_H
#include <QListView>
#include <QStandardItem>
#include <QStandardItemModel>
#include <QModelIndex>
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

    QListView *listView;
    QStandardItemModel *standardItemModel;

protected:
    bool eventFilter(QObject *watched, QEvent *event);
private slots:
    void itemClicked(QModelIndex index);
};

#endif // WIDGET_H
