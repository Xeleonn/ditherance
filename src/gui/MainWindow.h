#pragma once

#include <QApplication>
#include <QMainWindow>
#include <QLabel>

class MainWindow : protected QMainWindow
{
    Q_OBJECT;

public:
    MainWindow();
    ~MainWindow() = default;

private:
    const QString WINDOW_TITLE = "Ditherance";
    const int MIN_WINDOW_WIDTH = 800;
    const int MIN_WINDOW_HEIGHT = 600;

    int default_window_width = 1280;
    int default_window_height = 720;

    void init();
};