#pragma once

#include <QObject>

class AbstractRobloObject : public QObject
{
    Q_OBJECT
public:
    explicit AbstractRobloObject(QObject *parent = nullptr);

signals:

};

