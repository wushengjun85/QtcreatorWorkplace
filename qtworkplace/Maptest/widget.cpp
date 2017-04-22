#include "widget.h"
#include "ui_widget.h"
#include <QString>
#include <QUrl>
#include <QWebView>
#include <QDir>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    ui->webView->setUrl(QUrl("file:///D:/QtProjects/googleMap/googlemap.html"));
    ui->webView->show();
}

Widget::~Widget()
{
    delete ui;
}



