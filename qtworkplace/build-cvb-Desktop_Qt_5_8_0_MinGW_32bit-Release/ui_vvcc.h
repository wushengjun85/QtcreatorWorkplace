/********************************************************************************
** Form generated from reading UI file 'vvcc.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VVCC_H
#define UI_VVCC_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>
#include <vc.h>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    VC *vC;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QStringLiteral("Form"));
        Form->resize(563, 424);
        vC = new VC(Form);
        vC->setObjectName(QStringLiteral("vC"));
        vC->setGeometry(QRect(80, 50, 431, 271));
        vC->setStyleSheet(QStringLiteral("font: 14pt \"AcadEref\";"));

        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QApplication::translate("Form", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VVCC_H
