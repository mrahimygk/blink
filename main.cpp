#include "mainwindow.h"
#include <QApplication>
#include <QTimer>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowFlags(Qt::Window | Qt::FramelessWindowHint | Qt::WindowStaysOnTopHint);
    w.setFont(QFont("Vazir"));

    QTimer::singleShot(w.time*1000/*1800000*/, [&w](){
        w.show();
    });

    return a.exec();
}
