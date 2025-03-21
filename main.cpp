#include "kcsnmp.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    kcSnmp w;
    w.show();
    return a.exec();
}
