#include <QCoreApplication>
#include <iostream>

#include "point.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    point *pt = new point(NULL);

    std::cout << "Hello" << std::endl;

    return a.exec();
}

