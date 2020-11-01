#pragma once

#include <QObject>

#include <QIcon>
#include <QMap>
#include <QString>
class QAction;

class Actions : public QObject
{
    Q_OBJECT
public:
    explicit Actions(QObject *parent = nullptr);
    QAction * action(const QString &name)   { return smNameActionMap.value(name); }
    QAction * add(const QString &name,  const QString &text=QString(), const QIcon &icon=QIcon());

signals:

private:
    static QMap<QString, QAction *> smNameActionMap;
};

