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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(681, 547);
        label = new QLabel(Widget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(260, 150, 191, 81));
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 127);\n"
"image: url(:/new/prefix1/\346\214\207\351\222\210\345\244\247.png);\n"
"background-image: url(:/new/prefix1/\346\214\207\351\222\210\345\244\247.png);\n"
"background-color: rgb(85, 0, 255);\n"
"font: 36pt \"AcadEref\";"));
        label_2 = new QLabel(Widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(170, 340, 391, 141));
        label_2->setStyleSheet(QLatin1String("color: rgb(255, 0, 127);\n"
""));
        label_3 = new QLabel(Widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(460, 30, 191, 81));
        label_3->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/\346\214\207\351\222\210\345\244\247.png);"));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        label->setText(QApplication::translate("Widget", "6666666666666666666", Q_NULLPTR));
        label_2->setText(QString());
        label_3->setText(QApplication::translate("Widget", "6666666666666666666", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
