#ifndef TESTBATERAI_H
#define TESTBATERAI_H

#include <QDialog>

namespace Ui {
class testbaterai;
}

class testbaterai : public QDialog
{
    Q_OBJECT

public:
    explicit testbaterai(QWidget *parent = 0);
    ~testbaterai();

private:
    Ui::testbaterai *ui;
};

#endif // TESTBATERAI_H
