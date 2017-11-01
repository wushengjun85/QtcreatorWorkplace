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
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_4;
    QPushButton *pushButton_8;
    QPushButton *pushButton_7;
    QPushButton *pushButton_6;
    QPushButton *pushButton_5;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QPushButton *pushButton_9;
    QLabel *label;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QPushButton *pushButton_12;
    QPushButton *pushButton_13;
    QPushButton *pushButton_14;
    QPushButton *pushButton_15;
    QPushButton *pushButton_16;
    QPushButton *pushButton_17;
    QPushButton *pushButton_18;
    QPushButton *pushButton_19;
    QLineEdit *lineEdit;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(1024, 600);
        verticalLayoutWidget = new QWidget(Widget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(140, 110, 201, 239));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(47);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(30, 20, 30, 10);
        pushButton_2 = new QPushButton(verticalLayoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

        pushButton = new QPushButton(verticalLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);

        pushButton_3 = new QPushButton(verticalLayoutWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        verticalLayout->addWidget(pushButton_3);

        horizontalLayoutWidget = new QWidget(Widget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(440, 70, 461, 231));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_4 = new QPushButton(horizontalLayoutWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        horizontalLayout->addWidget(pushButton_4);

        pushButton_8 = new QPushButton(horizontalLayoutWidget);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));

        horizontalLayout->addWidget(pushButton_8);

        pushButton_7 = new QPushButton(horizontalLayoutWidget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));

        horizontalLayout->addWidget(pushButton_7);

        pushButton_6 = new QPushButton(horizontalLayoutWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));

        horizontalLayout->addWidget(pushButton_6);

        pushButton_5 = new QPushButton(horizontalLayoutWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        horizontalLayout->addWidget(pushButton_5);

        gridLayoutWidget = new QWidget(Widget);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(690, 350, 341, 241));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_10 = new QPushButton(gridLayoutWidget);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));

        gridLayout->addWidget(pushButton_10, 2, 0, 1, 1);

        pushButton_11 = new QPushButton(gridLayoutWidget);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));

        gridLayout->addWidget(pushButton_11, 3, 0, 1, 1);

        pushButton_9 = new QPushButton(gridLayoutWidget);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));

        gridLayout->addWidget(pushButton_9, 0, 0, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        formLayoutWidget = new QWidget(Widget);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(110, 390, 391, 141));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_12 = new QPushButton(formLayoutWidget);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));

        formLayout->setWidget(0, QFormLayout::LabelRole, pushButton_12);

        pushButton_13 = new QPushButton(formLayoutWidget);
        pushButton_13->setObjectName(QStringLiteral("pushButton_13"));

        formLayout->setWidget(1, QFormLayout::LabelRole, pushButton_13);

        pushButton_14 = new QPushButton(formLayoutWidget);
        pushButton_14->setObjectName(QStringLiteral("pushButton_14"));

        formLayout->setWidget(2, QFormLayout::LabelRole, pushButton_14);

        pushButton_15 = new QPushButton(formLayoutWidget);
        pushButton_15->setObjectName(QStringLiteral("pushButton_15"));

        formLayout->setWidget(3, QFormLayout::LabelRole, pushButton_15);

        pushButton_16 = new QPushButton(formLayoutWidget);
        pushButton_16->setObjectName(QStringLiteral("pushButton_16"));

        formLayout->setWidget(4, QFormLayout::LabelRole, pushButton_16);

        pushButton_17 = new QPushButton(formLayoutWidget);
        pushButton_17->setObjectName(QStringLiteral("pushButton_17"));

        formLayout->setWidget(0, QFormLayout::FieldRole, pushButton_17);

        pushButton_18 = new QPushButton(formLayoutWidget);
        pushButton_18->setObjectName(QStringLiteral("pushButton_18"));

        formLayout->setWidget(1, QFormLayout::FieldRole, pushButton_18);

        pushButton_19 = new QPushButton(formLayoutWidget);
        pushButton_19->setObjectName(QStringLiteral("pushButton_19"));

        formLayout->setWidget(2, QFormLayout::FieldRole, pushButton_19);

        lineEdit = new QLineEdit(Widget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(150, 40, 113, 20));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Widget", "PushButton", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Widget", "PushButton", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("Widget", "PushButton", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("Widget", "PushButton", Q_NULLPTR));
        pushButton_8->setText(QApplication::translate("Widget", "PushButton", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("Widget", "PushButton", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("Widget", "PushButton", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("Widget", "PushButton", Q_NULLPTR));
        pushButton_10->setText(QApplication::translate("Widget", "PushButton", Q_NULLPTR));
        pushButton_11->setText(QApplication::translate("Widget", "PushButton", Q_NULLPTR));
        pushButton_9->setText(QApplication::translate("Widget", "PushButton", Q_NULLPTR));
        label->setText(QApplication::translate("Widget", "TextLabel", Q_NULLPTR));
        pushButton_12->setText(QApplication::translate("Widget", "PushButton", Q_NULLPTR));
        pushButton_13->setText(QApplication::translate("Widget", "PushButton", Q_NULLPTR));
        pushButton_14->setText(QApplication::translate("Widget", "PushButton", Q_NULLPTR));
        pushButton_15->setText(QApplication::translate("Widget", "PushButton", Q_NULLPTR));
        pushButton_16->setText(QApplication::translate("Widget", "PushButton", Q_NULLPTR));
        pushButton_17->setText(QApplication::translate("Widget", "PushButton", Q_NULLPTR));
        pushButton_18->setText(QApplication::translate("Widget", "PushButton", Q_NULLPTR));
        pushButton_19->setText(QApplication::translate("Widget", "PushButton", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
