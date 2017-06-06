/********************************************************************************
** Form generated from reading UI file 'vc.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VC_H
#define UI_VC_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VC
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *VC)
    {
        if (VC->objectName().isEmpty())
            VC->setObjectName(QStringLiteral("VC"));
        VC->resize(475, 398);
        pushButton = new QPushButton(VC);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(80, 130, 101, 81));
        pushButton_2 = new QPushButton(VC);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(250, 130, 101, 81));

        retranslateUi(VC);

        QMetaObject::connectSlotsByName(VC);
    } // setupUi

    void retranslateUi(QWidget *VC)
    {
        VC->setWindowTitle(QApplication::translate("VC", "Form", Q_NULLPTR));
        pushButton->setText(QApplication::translate("VC", "1", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("VC", "2", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class VC: public Ui_VC {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VC_H
