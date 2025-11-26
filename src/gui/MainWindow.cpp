#include "MainWindow.h"

MainWindow::MainWindow()
{
    init();
    show();
}

void MainWindow::init()
{
    setWindowTitle(WINDOW_TITLE);
    setMinimumSize(MIN_WINDOW_WIDTH, MIN_WINDOW_HEIGHT);
    resize(default_window_width, default_window_height);
}