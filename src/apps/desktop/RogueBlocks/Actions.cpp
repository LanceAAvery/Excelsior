#include "Actions.h"

#include <QtDebug>

#include <QAction>
#include <QIcon>

QMap<QString, QAction *> Actions::smNameActionMap;

Actions::Actions(QObject *parent)
    : QObject(parent)
{
    qDebug() << Q_FUNC_INFO;
}

QAction *Actions::add(const QString &name, const QString &text, const QIcon &icon)
{
    qDebug() << Q_FUNC_INFO;
    QAction * rtn = new QAction(text.isEmpty() ? name : text, this);
    rtn->setIcon(icon);
    smNameActionMap.insert(name, rtn);
    return rtn;
}
