#pragma once

#include <QMainWindow>

class QLabel;
class QStackedLayout;

#include "RobioMainLayout.h"
class Actions;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QStackedLayout * layout()       { return mpStackedLayout; }

private slots:
    void setupStack();
    void setupActions();

signals:
    void constructed();
    void stackSetup();
    void actionsSetup();

private:
    QWidget * mpCentralWidget=nullptr;
    QStackedLayout * mpStackedLayout=nullptr;
    Actions * mpActions=nullptr;
    QLabel * mpTitleLabel=nullptr;
};
