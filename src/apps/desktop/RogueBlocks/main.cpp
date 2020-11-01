#include "RobloMainWindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setApplicationDisplayName("Rogue Blocks");
    MainWindow w;
    w.show();
    return a.exec();
}
