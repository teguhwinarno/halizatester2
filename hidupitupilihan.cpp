#include "hidupitupilihan.h"
#include "ui_hidupitupilihan.h"
// #include <QKeyEvent>
#include <QDebug>
#include "loggingcategories.h"


hidupitupilihan::hidupitupilihan(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::hidupitupilihan)
{
    ui->setupUi(this);
    lagi=1;
    ui->testok->setStyleSheet("background-color: blue");
}

hidupitupilihan::~hidupitupilihan()
{
    delete ui;

}
void hidupitupilihan::keyPressEvent(QKeyEvent *event)
{
    if (event->key() == Qt::Key_Return)
    {
        if (lagi == 1)
        {
            this->on_testok_clicked();
        }
        if (lagi == 2)
        {
            this->on_testnotok_clicked();
        }

    }
    if (event->key() == Qt::Key_Right)
    {
        lagi++;{
            if (lagi == 1)
            {
                ui->testok->setStyleSheet("background-color: blue");
            }
            else {
                ui->testok->setStyleSheet("");
            }
            if (lagi == 2)
            {
                ui->testnotok->setStyleSheet(("background-color: red"));
            }
            else {
                ui->testnotok->setStyleSheet("");
            }
            if (lagi >2)
            {
                lagi =1;
                ui->testok->setStyleSheet("background-color: blue");
            }
        }
    }
    if (event->key() == Qt::Key_Left)
    {
        lagi--;{
            if (lagi == 1)
            {
                ui->testok->setStyleSheet("background-color: blue");
            }
            else {
                ui->testok->setStyleSheet("");
            }
            if (lagi == 2)
            {
                ui->testnotok->setStyleSheet(("background-color: red"));
            }
            else {
                ui->testnotok->setStyleSheet("");
            }
            if (lagi <1)
            {
                lagi =2;
                ui->testnotok->setStyleSheet(("background-color: red"));
            }
        }
    }
}

void hidupitupilihan::on_testok_clicked()
{
    QWidget::close();
    qInfo(logInfo()) <<" TESTING OK";
}

void hidupitupilihan::on_testnotok_clicked()
{
    QWidget::close();
    qInfo(logInfo()) <<" TESTING TIDAK OK";
}
