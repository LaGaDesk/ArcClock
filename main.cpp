#include <QApplication>
#include <QDebug>
#include <QTranslator>

#include "arcclock.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    app.setQuitOnLastWindowClosed(true);

    QString locale = QLocale::system().name();
    qDebug() << locale;

    QTranslator translator;
    translator.load(QString("arc_") + locale);
    app.installTranslator(&translator);
//    return 0;
    ArcClock clock;
    clock.show();
    return app.exec();
}
