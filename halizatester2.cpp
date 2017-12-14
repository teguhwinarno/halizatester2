#include "halizatester2.h"
#include "ui_halizatester2.h"
#include "testdisplay.h"

#include <QDialog>
#include <QKeyEvent>
#include <QObject>

halizatester2::halizatester2(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::halizatester2)
{
    ui->setupUi(this);
   // qDebug("masukkk disini");
  //  installEventFilter(this);
  //  connect(ui->displaytest, SIGNAL(clicked()), this, SLOT(sendKeyEvent()));
  // this->testdisplay->setStyleSheet("background-color: rgb(255,125,100)");
  //  this->setStyleSheet("background-color: red;");
      countere =1;
      coun =1;
      ui->displaytest->setStyleSheet("background-color: red");

}

halizatester2::~halizatester2()
{
    delete ui;
}

void halizatester2::keyPressEvent(QKeyEvent *event)
{
//if(event->key() == Qt::Key_Escape)
//qApp->quit();

// if (event->key() == Qt::Key_Control) {
 //    qDebug() << "control";
//    this->close();
// }
// if (event->key() == Qt::Key_Escape) {
  //  qDebug("escape ditekan");
// }
// if (event->key() == Qt::Key_1  )
// {
   //  qDebug ("enter ditekan");
// }
if (event->key()==Qt::Key_Return)
         {
         if (countere == 1)
         {
             this->on_displaytest_clicked();
             ui->keypadtest->setStyleSheet("background-color: yellow");
             ui->displaytest->setStyleSheet("");
         }
         if (countere == 2)
         {
             this->on_keypadtest_clicked();
             ui->bateraitest->setStyleSheet("background-color: green");
             ui->keypadtest->setStyleSheet("");

         }

}

if (event->key()==Qt::Key_Escape){
          //  qDebug("tekan escape");
            QWidget::close();
        }
if (event->key() == Qt::Key_Down || event->key()==Qt::Key_Return){  // push button down
    countere++;{
        if(countere==1)
        {
            ui->displaytest->setStyleSheet("background-color: red");
          //  qDebug("coba1 ok");
        }
        else {
            ui->displaytest->setStyleSheet("");
        }
        if(countere==2)
        {
            ui->keypadtest->setStyleSheet("background-color: yellow");
          //  qDebug("coba2 ok");
        }
        else{
            ui->keypadtest->setStyleSheet("");
        }
        if(countere==3)
        {
            ui->bateraitest->setStyleSheet("background-color: green");
          // qDebug("coba3 ok");
        }
        else{
            ui->bateraitest->setStyleSheet("");
        }
        if(countere==4)
        {
            ui->backlighttest->setStyleSheet("background-color: blue");
          // qDebug("coba4 ok");
        }
        else{
            ui->backlighttest->setStyleSheet("");
        }
        if(countere==5)
        {
            ui->rpmtest->setStyleSheet("background-color: brown");
          //  qDebug("coba5 ok");
        }
        else{
            ui->rpmtest->setStyleSheet("");
        }
        if(countere==6)
        {
            ui->timlighttest->setStyleSheet("background-color: purple");
          //  qDebug("coba6 ok");
        }
        else{
            ui->timlighttest->setStyleSheet("");
        }
        if (countere>6)
        {
            countere= 1;
            ui->displaytest->setStyleSheet("background-color: red");
        }
}
}

if (event->key() == Qt::Key_Up){        // push button up
    countere--;{
        if(countere==6)
        {
            ui->timlighttest->setStyleSheet("background-color: purple");
          //  qDebug("coba6 ok");
        }
        else{
            ui->timlighttest->setStyleSheet("");
        }
        if(countere==5)
        {
            ui->rpmtest->setStyleSheet("background-color: brown");
          //  qDebug("coba5 ok");
        }
        else{
            ui->rpmtest->setStyleSheet("");

        }
        if(countere==4)
        {
            ui->backlighttest->setStyleSheet("background-color: blue");
          //  qDebug("coba4 ok");
        }
        else{
            ui->backlighttest->setStyleSheet("");
        }
        if(countere==3)
        {
            ui->bateraitest->setStyleSheet("background-color: green");
          //  qDebug("coba3 ok");
        }
        else{
            ui->bateraitest->setStyleSheet("");
        }
        if(countere==2)
        {
            ui->keypadtest->setStyleSheet("background-color: yellow");
          //  qDebug("coba2 ok");
        }
        else{
            ui->keypadtest->setStyleSheet("");
        }
        if(countere==1)
        {
            ui->displaytest->setStyleSheet("background-color: red");
          //  qDebug("coba1 ok");
        }
        else {
            ui->displaytest->setStyleSheet("");
        }
        if (countere<1)
        {
            countere=6;
             ui->timlighttest->setStyleSheet("background-color: purple");
        }
    }
}
}
void halizatester2::on_displaytest_clicked()
{
    Testdisplay = new testdisplay();
    Testdisplay->setFixedSize(640,480);
    Testdisplay->setWindowFlags(Qt::FramelessWindowHint);  //CustomizeWindowHint

    Testdisplay->show();
}
void halizatester2::on_keypadtest_clicked()
{
    Testkyped = new testkyped();
    Testkyped->setFixedSize(640,480);
    Testkyped->setWindowFlags(Qt::FramelessWindowHint);  //CustomizeWindowHint

    Testkyped->show();

}

void halizatester2::on_bateraitest_clicked()
{
    Testbaterai = new testbaterai();
    Testbaterai->setFixedSize(640,480);
    Testbaterai->setWindowFlags(Qt::FramelessWindowHint);

    Testbaterai->show();

}

void halizatester2::on_backlighttest_clicked()
{
    qDebug("jgjgyguyg u");
}

void halizatester2::on_rpmtest_clicked()
{

}

void halizatester2::on_timlighttest_clicked()
{

}





