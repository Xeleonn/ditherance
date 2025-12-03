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
    control_panel_widget = new ControlPanel();
    image_preview_widget = new ImagePreviewPanel();
    tool_bar = new ToolBar();
}

void MainWindow::InitLayouts()
{
    main_layout->addWidget(control_panel_widget);
    main_layout->addWidget(image_preview_widget);
    main_widget->setLayout(main_layout);

    connect(control_panel_widget, &ControlPanel::imageSelected,
        image_preview_widget, &ImagePreviewPanel::LoadImage);
}

void MainWindow::InitWindowProperties()
{
    this->setCentralWidget(main_widget);
    this->setWindowTitle(TITLE);
    this->setMinimumSize(MIN_WIDTH, MIN_HEIGHT);
    this->resize(default_width, default_height);
    this->addToolBar(tool_bar);
}