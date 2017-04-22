#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QUrl>
#include <QWebView>
//#include <QtWebKitWidgets/QWebView>

#include <QDir>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->webView->setUrl(QUrl("file:///D:/QtProjects/googleMap/googlemap.html"));
    ui->webView->show();
}

MainWindow::~MainWindow()
{
    delete ui;
}
