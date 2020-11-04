#include "RobioMainLayout.h"

#include <QtDebug>

#include <QApplication>
#include <QLabel>

RobioMainLayout::RobioMainLayout(QWidget *parent)
    : QGridLayout(parent)
    , mpWidget(new QWidget(parent))
    , mpTitleLabel(new QLabel(qApp->applicationDisplayName(), parent))
{
    qDebug()<< Q_FUNC_INFO;
    mpWidget->setLayout(this);
    addWidget(mpTitleLabel, 0, 0, Qt::AlignCenter);
}
