#include "MainWindow.h"

#include <QApplication>
#include <QMainWindow>
#include <QLabel>

int main(int argc, char* argv[]) 
{
    QApplication app(argc, argv);
    MainWindow main_window;
    return app.exec();
}