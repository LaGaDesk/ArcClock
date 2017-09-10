#include <QApplication>

#include "arcclock.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    app.setQuitOnLastWindowClosed(true);
    ArcClock clock;
    clock.show();
    return app.exec();
}
