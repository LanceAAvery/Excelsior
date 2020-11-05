#include "RogueBlockMainWindow.h"

#include <eirXfr/Debug.h>

RogueBlockMainWindow::RogueBlockMainWindow()
    : StackedGraphicsMainWindow()
{
    TRACEFN;
    CONNECT(this, &RogueBlockMainWindow::constructed,
            this, &StackedGraphicsMainWindow::initialize);

}
