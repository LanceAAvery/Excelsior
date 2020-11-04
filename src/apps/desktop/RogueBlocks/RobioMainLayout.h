#pragma once

#include <QGridLayout>
#include <QObject>
#include <QWidget>
class QLabel;

class RobioMainLayout : public QGridLayout
{
    Q_OBJECT
public:
    RobioMainLayout(QWidget *parent=nullptr);
    void setTitle(const QString &title);
    QWidget * widget()      { return mpWidget; }

private:
    QWidget * mpWidget=nullptr;
    QLabel * mpTitleLabel;
};

