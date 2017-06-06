#ifndef VVVCCC_H
#define VVVCCC_H

#include <QWidget>

namespace Ui {
class VVVCCC;
}

class VVVCCC : public QWidget
{
    Q_OBJECT

public:
    explicit VVVCCC(QWidget *parent = 0);
    ~VVVCCC();

private:
    Ui::VVVCCC *ui;
};

#endif // VVVCCC_H
