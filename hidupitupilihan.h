#ifndef HIDUPITUPILIHAN_H
#define HIDUPITUPILIHAN_H

#include <QDialog>
#include <QKeyEvent>
#include "logger.h"

namespace Ui {
class hidupitupilihan;
}

class hidupitupilihan : public QDialog
{
    Q_OBJECT

public:
    explicit hidupitupilihan(QWidget *parent = 0);
    ~hidupitupilihan();

protected:
   // void keyPressEvent(QKeyEvent * event);
    int lagi;
    int ulangi;
    void keyPressEvent(QKeyEvent * event);

private slots:
    void on_testok_clicked();

    void on_testnotok_clicked();

private:
    Ui::hidupitupilihan *ui;
 //   testkyped *Testkyped;
    Logger *logger;
};

#endif // HIDUPITUPILIHAN_H
