#include "prefs.h"
#include "ui_prefs.h"
#include "arcclock.h"
#include <QSettings>
#include <QDebug>

Prefs::Prefs(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Prefs)
{
    ui->setupUi(this);

    QSettings settings("Phobian", "Simple Arc Clock");

    connect(ui->pb_apply, SIGNAL(clicked()), parent, SLOT(prefsChanged()));
    QString dateColorStyle = QString("background-color: %1;").arg(settings.value("dateColor").toString());
    ui->lbl_dateColor->setStyleSheet(dateColorStyle);
    QString timeColorStyle = QString("background-color: %1;").arg(settings.value("timeColor").toString());
    ui->lbl_timeColor->setStyleSheet(timeColorStyle);
    QString hourColorStyle = QString("background-color: %1;").arg(settings.value("hourColor").toString());
    ui->lbl_hourColor->setStyleSheet(hourColorStyle);
    QString minuteColorStyle = QString("background-color: %1;").arg(settings.value("minuteColor").toString());
    ui->lbl_minuteColor->setStyleSheet(minuteColorStyle);
    ui->cb_showDate->setChecked(settings.value("showDate").toBool());
}

Prefs::~Prefs()
{
    delete ui;
}
