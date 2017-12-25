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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit_3;
    QLabel *label_3;
    QPushButton *pushButton;
    QLabel *label_4;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(1024, 600);
        lineEdit = new QLineEdit(Widget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(300, 190, 113, 51));
        lineEdit->setStyleSheet(QString::fromUtf8("font: 20pt \"\346\245\267\344\275\223\";\n"
"color: rgb(0, 0, 0);"));
        lineEdit_2 = new QLineEdit(Widget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(600, 190, 131, 51));
        lineEdit_2->setStyleSheet(QString::fromUtf8("font: 20pt \"\346\245\267\344\275\223\";\n"
"color: rgb(0, 0, 0);"));
        label = new QLabel(Widget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(230, 190, 61, 41));
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);\n"
"font: 24pt \"\346\245\267\344\275\223\";"));
        label_2 = new QLabel(Widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(500, 190, 91, 51));
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);\n"
"font: 24pt \"\346\245\267\344\275\223\";"));
        lineEdit_3 = new QLineEdit(Widget);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(350, 310, 141, 71));
        lineEdit_3->setStyleSheet(QString::fromUtf8("font: 20pt \"\346\245\267\344\275\223\";\n"
"color: rgb(0, 0, 0);"));
        label_3 = new QLabel(Widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 300, 321, 91));
        label_3->setStyleSheet(QString::fromUtf8("font: 24pt \"\346\245\267\344\275\223\";\n"
"color: rgb(255, 0, 127);"));
        pushButton = new QPushButton(Widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(550, 310, 261, 71));
        pushButton->setStyleSheet(QString::fromUtf8("font: 20pt \"\346\245\267\344\275\223\";\n"
"color: rgb(255, 0, 127);"));
        label_4 = new QLabel(Widget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(40, 450, 721, 51));
        label_4->setStyleSheet(QString::fromUtf8("font: 20pt \"\346\245\267\344\275\223\";\n"
"color: rgb(85, 255, 127);"));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        label->setText(QApplication::translate("Widget", "FMI", Q_NULLPTR));
        label_2->setText(QApplication::translate("Widget", "SPN", Q_NULLPTR));
        label_3->setText(QApplication::translate("Widget", "\350\257\267\350\276\223\345\205\245\346\225\205\351\232\234\347\240\20116\350\277\233\345\210\266\346\225\260", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Widget", "\350\275\254\346\215\242\346\210\220\345\257\271\345\272\224\347\232\204\346\225\205\351\232\234\347\240\201", Q_NULLPTR));
        label_4->setText(QApplication::translate("Widget", "\344\276\213\345\246\202 \350\276\223\345\205\245 ebf048 \345\257\271\345\272\224\347\232\204 FMI 11  SPN 520264", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
