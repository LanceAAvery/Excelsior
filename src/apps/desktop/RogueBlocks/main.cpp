//!file {Excelsior}./src/apps/desktop/RogueBlock/main.cpp
#include <QApplication>

#include "RogueBlockMainWindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setApplicationDisplayName("Rogue Blocks");
    RogueBlockMainWindow w;
    w.show();
    return a.exec();
}
