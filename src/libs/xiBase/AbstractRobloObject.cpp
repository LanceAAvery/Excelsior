#include "AbstractRobloObject.h"

#include <QtDebug>

AbstractRobloObject::AbstractRobloObject(QObject *parent)
    : QObject(parent)
{
    qDebug(Q_FUNC_INFO);
}
