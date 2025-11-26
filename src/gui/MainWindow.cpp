#include "MainWindow.h"

MainWindow::MainWindow()
{
    InitWidgets();
    InitLayouts();
    InitWindowProperties();
    
    this->show();
}

void MainWindow::InitWidgets()
{
    main_widget = new QWidget();
    main_layout = new QHBoxLayout();
}

void MainWindow::InitLayouts()
{
    main_widget->setLayout(main_layout);
}

void MainWindow::InitWindowProperties()
{
    this->setCentralWidget(main_widget);
    this->setWindowTitle(TITLE);
    this->setMinimumSize(MIN_WIDTH, MIN_HEIGHT);
    this->resize(default_width, default_height);
}