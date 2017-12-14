#ifndef TESTDISPLAY_H
#define TESTDISPLAY_H

#include <QWidget>

#include "hidupitupilihan.h"

namespace Ui {
class testdisplay;
}

class testdisplay : public QWidget
{
    Q_OBJECT

public:
    explicit testdisplay(QWidget *parent = 0);
    ~testdisplay();

private slots:
    void on_next_clicked();

protected:
    void keyPressEvent(QKeyEvent * event);

private:
    Ui::testdisplay *ui;
    hidupitupilihan *Hidupitupilihan;
};

#endif // TESTDISPLAY_H
