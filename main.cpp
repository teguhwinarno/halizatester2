#include "halizatester2.h"
#include "testdisplay.h"
#include <QApplication>
#include <QFile>
#include <QDir>
#include <QScopedPointer>
#include <QTextStream>
#include <QDateTime>
#include <QLoggingCategory>

QScopedPointer<QFile>   m_logFile;

void  messageHandler(QtMsgType type, const QMessageLogContext &context, const QString &msg);

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
   m_logFile.reset(new QFile("/home/teguh/Templates/halizatester2/LogFile.txt"));
   m_logFile.data()->open(QFile::Append | QFile::Text);
   qInstallMessageHandler(messageHandler);



    halizatester2 w;
    w.show();

    return a.exec();

}

 void messageHandler(QtMsgType type, const QMessageLogContext &context, const QString &msg)
{
   QTextStream out(m_logFile.data());
   out <<QDateTime::currentDateTime().toString("yyyy -MM -dd hh:mm:ss ");
   switch (type)
   {
      case QtDebugMsg: out <<"INF"; break;
   }
   out << context.category <<" : "
        << msg << endl ;
  out.flush();
 }
