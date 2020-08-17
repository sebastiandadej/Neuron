#include "mainwindow.h"
#include <QApplication>
#include <QDebug>
#include <QTime>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    QTime czas;
    long int zero=0;
    int q=10;
    czas.start();
    qDebug() << "[SEBA] Czas: " << czas;
    for( long long int i=0; i<100000000000; i++)
    {
        for(int j=0; j<10000; j++)
        {
            zero=zero+q;
        }
       // qDebug() << "[SEBA] " << zero;
    }
    qDebug() << "[SEBA] koniec: " << czas.elapsed();
    return a.exec();
}
