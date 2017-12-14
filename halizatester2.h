#ifndef HALIZATESTER2_H
#define HALIZATESTER2_H

#include <QMainWindow>
#include <QKeyEvent>
#include <QDebug>

#include "testdisplay.h"
#include "testkyped.h"
#include "testbaterai.h"

namespace Ui {
class halizatester2;
}

class halizatester2 : public QMainWindow
{
    Q_OBJECT

public:
    explicit halizatester2(QWidget *parent = 0);
    ~halizatester2();


private slots:


    void on_keypadtest_clicked();

    void on_bateraitest_clicked();


    void on_backlighttest_clicked();

    void on_rpmtest_clicked();

    void on_timlighttest_clicked();

    void on_displaytest_clicked();

protected:
    void keyPressEvent(QKeyEvent * event);

    int coun;
    int countere;
    int counteree;
    int countereee;

private:
    Ui::halizatester2 *ui;
    testdisplay *Testdisplay;
    testkyped *Testkyped;
    testbaterai *Testbaterai;
};

#endif // HALIZATESTER2_H
