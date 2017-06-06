#include "vvvccc.h"
#include "ui_vvvccc.h"

VVVCCC::VVVCCC(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::VVVCCC)
{
    ui->setupUi(this);
}

VVVCCC::~VVVCCC()
{
    delete ui;
}
