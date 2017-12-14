#include "testbaterai.h"
#include "ui_testbaterai.h"

testbaterai::testbaterai(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::testbaterai)
{
    ui->setupUi(this);
}

testbaterai::~testbaterai()
{
    delete ui;
}
