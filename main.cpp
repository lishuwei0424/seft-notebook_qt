#include "mainwindow.h"
#include <QApplication>
#include "logindialog.h"
 #include <QTextCodec>
#include <QPixmap>
#include <QSplashScreen>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QPixmap pixmap("C:\\Users\\lishuwei\\Desktop\\login2018.12.20\\login2018.12.20\\Qt1.jpg");
    QSplashScreen splash(pixmap);
    splash.show();
    a.processEvents();

    MainWindow w;

    LoginDialog dlg;
       if (dlg.exec() == QDialog::Accepted)
       {
          w.show();
          return a.exec();
          splash.finish(&w);
       }
       else return 0;
}
