#ifndef TESTKYPED_H
#define TESTKYPED_H

#include <QDialog>
#include <QKeyEvent>
#include "hidupitupilihan.h"

namespace Ui {
class testkyped;
}

class testkyped : public QDialog
{
    Q_OBJECT

public:
    explicit testkyped(QWidget *parent = 0);
    ~testkyped();

private slots:
//    void on_UP_clicked();

//    void on_LEFT_clicked();

//    void on_RIGHT_clicked();

//    void on_DOWN_clicked();

//    void on_OKK_clicked();

//    void on_HELP_clicked();

//    void on_CANCEL_clicked();

protected:
    void keyPressEvent(QKeyEvent * event);
    void keyReleaseEvent(QKeyEvent *event);
    int a,b,c,d,e,f,g,h;



private:
    Ui::testkyped *ui;
    hidupitupilihan *Hidupitupilihan;
    Logger *logger;
};

#endif // TESTKYPED_H
