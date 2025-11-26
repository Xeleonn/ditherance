#pragma once

#include <QApplication>
#include <QMainWindow>
#include <QLabel>
#include <QHBoxLayout>
#include "ControlPanel.h"
#include "ImagePreviewPanel.h"

class MainWindow : protected QMainWindow
{
    Q_OBJECT;

public:
    MainWindow();
    ~MainWindow() = default;

private:
    const QString TITLE = "Ditherance";
    const int MIN_WIDTH = 800;
    const int MIN_HEIGHT = 600;

    int default_width = 1280;
    int default_height = 720;

    QWidget *main_widget = nullptr;
    QLayout *main_layout = nullptr;
    QWidget *control_panel_widget = nullptr;
    QWidget *image_preview_widget = nullptr;

    void InitWidgets();
    void InitLayouts();
    void InitWindowProperties();
};