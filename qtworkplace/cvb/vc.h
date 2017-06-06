#ifndef VC_H
#define VC_H

#include <QWidget>

namespace Ui {
class VC;
}

class VC : public QWidget
{
    Q_OBJECT

public:
    explicit VC(QWidget *parent = 0);
    ~VC();

private:
    Ui::VC *ui;
};

#endif // VC_H
