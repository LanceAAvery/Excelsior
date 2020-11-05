#include "RobloMainWindow.h"

#include <QtDebug>

#include <QAction>
#include <QApplication>
#include <QKeySequence>
#include <QLabel>
#include <QStackedLayout>

#include "Actions.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , mpCentralWidget(new QWidget)
    , mpStackedLayout(new QStackedLayout)
    , mpActions(new Actions(this))
    , mpTitleLabel(new QLabel(qApp->applicationDisplayName(), parent))
{
    qDebug() << Q_FUNC_INFO;
    setObjectName("RobloMainWindow");
    mpCentralWidget->setObjectName("RobloMainWindow::CentralWidget");
    layout()->setObjectName("RobloMainWindow::StackedLayout");
    connect(this, &MainWindow::constructed,
            this, &MainWindow::setupStack);
    connect(this, &MainWindow::stackSetup,
            this, &MainWindow::setupActions);

    emit constructed();
}

MainWindow::~MainWindow()
{
    qDebug()<< Q_FUNC_INFO;
}

void MainWindow::setupStack()
{
    qDebug()<< Q_FUNC_INFO;
    mpCentralWidget->setLayout(layout());
    setCentralWidget(mpCentralWidget);
    setWindowState(Qt::WindowFullScreen);
    QWidget * splashPage = new QWidget;
    QGridLayout * splashGrid = new QGridLayout;
    splashGrid->addWidget(mpTitleLabel);
    splashPage->setLayout(splashGrid);
    layout()->addWidget(splashPage);
    emit stackSetup();
}

void MainWindow::setupActions()
{
    qDebug() << Q_FUNC_INFO;
    QAction * quitAct = mpActions->add("Quit");
    quitAct->setShortcut(QKeySequence(Qt::CTRL, Qt::Key_Q));
    addAction(quitAct);
    emit actionsSetup();
}



