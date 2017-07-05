/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDial>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QScrollBar *horizontalScrollBar;
    QDial *dial;
    QLineEdit *lineEdit;
    QSlider *horizontalSlider;
    QScrollBar *verticalScrollBar;
    QProgressBar *progressBar;
    QFrame *line;
    QLabel *label;
    QFrame *line_2;
    QLabel *label_2;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(786, 533);
        horizontalScrollBar = new QScrollBar(Widget);
        horizontalScrollBar->setObjectName(QStringLiteral("horizontalScrollBar"));
        horizontalScrollBar->setGeometry(QRect(50, 350, 461, 51));
        horizontalScrollBar->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 127);"));
        horizontalScrollBar->setOrientation(Qt::Horizontal);
        dial = new QDial(Widget);
        dial->setObjectName(QStringLiteral("dial"));
        dial->setGeometry(QRect(90, 190, 191, 131));
        dial->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 127);"));
        dial->setMaximum(99);
        lineEdit = new QLineEdit(Widget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(310, 210, 221, 51));
        horizontalSlider = new QSlider(Widget);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(180, 120, 160, 22));
        horizontalSlider->setOrientation(Qt::Horizontal);
        verticalScrollBar = new QScrollBar(Widget);
        verticalScrollBar->setObjectName(QStringLiteral("verticalScrollBar"));
        verticalScrollBar->setGeometry(QRect(690, 140, 51, 291));
        verticalScrollBar->setStyleSheet(QStringLiteral("background-color: rgb(85, 255, 127);"));
        verticalScrollBar->setMinimum(0);
        verticalScrollBar->setMaximum(99);
        verticalScrollBar->setSingleStep(1);
        verticalScrollBar->setSliderPosition(99);
        verticalScrollBar->setOrientation(Qt::Vertical);
        verticalScrollBar->setInvertedControls(true);
        progressBar = new QProgressBar(Widget);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setGeometry(QRect(50, 440, 481, 23));
        progressBar->setStyleSheet(QLatin1String("background-color: rgb(255, 0, 255);\n"
"selection-background-color: rgb(255, 255, 127);\n"
"color: rgb(255, 0, 0);"));
        progressBar->setValue(0);
        line = new QFrame(Widget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(50, 480, 451, 21));
        line->setStyleSheet(QLatin1String("color: rgb(85, 85, 255);\n"
"background-color: rgb(0, 0, 127);"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        label = new QLabel(Widget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(420, 90, 101, 71));
        line_2 = new QFrame(Widget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(580, 20, 16, 471));
        line_2->setStyleSheet(QStringLiteral("background-color: rgb(255, 85, 255);"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        label_2 = new QLabel(Widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(310, 290, 221, 41));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        label->setText(QApplication::translate("Widget", "666666", Q_NULLPTR));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
