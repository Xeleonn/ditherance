#include "MainWindow.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    MainWindow main_window;
    return app.exec();
}

MainWindow::MainWindow()
{
    init();
    show();
}

void MainWindow::init()
{
    setWindowTitle("ditherance");
}