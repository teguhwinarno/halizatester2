#include "testkyped.h"
#include "ui_testkyped.h"

#include <QKeyEvent>
#include <QDebug>
#include "loggingcategories.h"

testkyped::testkyped(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::testkyped)
{
    ui->setupUi(this);
}

testkyped::~testkyped()
{
    delete ui;
}



void testkyped::keyPressEvent(QKeyEvent *event)
{
    {
    if (event->key()==Qt::Key_Up){
      //  qDebug("okgan");
        ui->UP->setStyleSheet("background-color: red");
        a = 1;
    }
    if (a>1)
    {
        a=0;
    }
    if (event->key()==Qt::Key_Left){
      //  qDebug("kiri");
        ui->LEFT->setStyleSheet("background-color: blue");
        b = 1;
    }
    if (b>1)
    {
        b=0;
    }
    if (event->key()==Qt::Key_Down){
      // qDebug("bawah");
        ui->DOWN->setStyleSheet("background-color: yellow");
        c = 1;
    }
    if (c>1)
    {
        c=0;
    }
    if (event->key()==Qt::Key_Right){
     //   qDebug("kanan");
        ui->RIGHT->setStyleSheet("background-color: green");
        d = 1;
    }
    if (d>1)
    {
        d=0;
    }
    if (event->key()==Qt::Key_Return){
      //  qDebug("ok");
        ui->OKK->setStyleSheet("background-color: red");
        e = 1;
    }
    if (e>1)
    {
        e=0;
    }
    if (event->key()==Qt::Key_F1){
     //   qDebug("help");
        ui->HELP->setStyleSheet("background-color: blue");
        f = 1;
    }
    if (f>1)
    {
        f=0;
    }
    if (event->key()==Qt::Key_Control){
     //  qDebug("cancel");
        ui->CANCEL->setStyleSheet("background-color: yellow");
        g = 1;
    }
    if (g>1)
    {
        g=0;
    }


}
}
void testkyped::keyReleaseEvent(QKeyEvent *event)
{
    if (event->key()==Qt::Key_Up)
    {
        ui->UP->setStyleSheet("");
        a=1;
    }
    if (a>1)
    {
        a=0;
    }
    if (event->key()==Qt::Key_Left)
    {
        ui->LEFT->setStyleSheet("");
        b=1;
    }
    if(b>1)
    {
        b=0;
    }
    if (event->key()==Qt::Key_Down)
    {
        ui->DOWN->setStyleSheet("");
        c=1;
    }
    if(c>1)
    {
        c=0;
    }
    if (event->key()==Qt::Key_Right)
    {
        ui->RIGHT->setStyleSheet("");
        d=1;
    }
    if(d>1)
    {
        d=0;
    }
    if (event->key()==Qt::Key_Return)
    {
        ui->OKK->setStyleSheet("");
        e=1;
    }
    if(e>1)
    {
        e=0;
    }
    if (event->key()==Qt::Key_F1)
    {
        ui->HELP->setStyleSheet("");
        f=1;
    }
    if(f>1)
    {
        f=0;
    }
    if (event->key()==Qt::Key_Control)
    {
        ui->CANCEL->setStyleSheet("");
        g=1;
    }
    if(g>1)
    {
        g=0;
    }
    if (a==1 && b==1 && c==1 && d==1 && e==1 && f==1 && g == 1)
    {
        Hidupitupilihan = new hidupitupilihan;
        Hidupitupilihan->setFixedSize(640,480);
        Hidupitupilihan->setWindowFlags(Qt::FramelessWindowHint);

        Hidupitupilihan->show();
        qInfo(logInfo()) <<" TESTING KYPED";
        QWidget::close();
    }


}

