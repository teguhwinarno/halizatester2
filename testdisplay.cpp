#include "testdisplay.h"
#include "ui_testdisplay.h"


int counter = 0;
int a;
#include <QKeyEvent>

//#include "loggingcategories.h"
#include "halizatester2.h"




testdisplay::testdisplay(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::testdisplay)
{
    ui->setupUi(this);
    this->setStyleSheet("background-color: red;");
    QString fileName = "/home/teguh/Templates/halizatester2/loggfile2";
    logger =new Logger(this, fileName);
//    logger->write("Hello Qt");
}

testdisplay::~testdisplay()
{
    delete ui;
}

void testdisplay::keyPressEvent(QKeyEvent *event)
{
    if (event->key() == Qt::Key_Right)
    {
        this->on_next_clicked();
    }
    if (event->key() == Qt::Key_Return)
    {
        this->on_next_clicked();
    }
}

void testdisplay::on_next_clicked()
{
    counter ++;                        //counter penjumlahan
    {
    if (counter == 1)
    {
        this->setStyleSheet("background-color: blue;");

        //  qInfo(logInfo()) <<" merah ok";
    }

    if (counter == 2)
    {
        this->setStyleSheet("background-color: green;");
       //   qInfo(logInfo()) <<" biru ok";
    }
    if (counter == 3)
    {
        this->setStyleSheet("background-color: black;");
       //   qInfo(logInfo()) <<" hijau ok";

    }
    if (counter == 4)
    {
        this->setStyleSheet("background-color: white;");
       //   qInfo(logInfo()) <<" hitam ok";
    }
    if (counter == 5)
    {
        Hidupitupilihan = new hidupitupilihan;
        Hidupitupilihan->setFixedSize(640,480);
        Hidupitupilihan->setWindowFlags(Qt::FramelessWindowHint);

        Hidupitupilihan->show();
        QWidget::close();
//       qInfo(logInfo()) <<" TESTING DISPLAY";
        logger->write ("TESTING DISPLAY");
    }
    if (counter >= 5)
    {
        counter = 0;                    // program lebih dari sama dengan 4
    }
   }

    if(counter == 3)
    {
        ui->next->setStyleSheet("color:white");
    }

    else {
        ui->next->setStyleSheet("color:black");

    }

}
