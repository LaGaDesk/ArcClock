#include <QApplication>
#include <QTranslator>

#include "arcclock.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    app.setQuitOnLastWindowClosed(true);

    QString locale = QLocale::system().name();

    QTranslator translator;
    translator.load(QString("arc_") + locale, ":/ts");
    app.installTranslator(&translator);

    ArcClock clock;
    clock.show();
    return app.exec();
}
