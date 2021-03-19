#include "mainwindow.h"
#include "encryption_form.h"
#include "decryption_form.h"
#include <QApplication>

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
