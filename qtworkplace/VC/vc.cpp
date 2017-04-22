#include "vc.h"
#include "ui_vc.h"

VC::VC(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::VC)
{
    ui->setupUi(this);
}

VC::~VC()
{
    delete ui;
}
