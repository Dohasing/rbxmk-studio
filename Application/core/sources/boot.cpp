#include <cstdio>
#include <iostream>
#include "modules/phases.h"
#include <QApplication>
#include <fstream>

using namespace std;

int main (int argc, char *argv[]) {
    QApplication app(argc, argv);

    QWidget window;
    window.show();

    startup();

    return app.exec();
}
