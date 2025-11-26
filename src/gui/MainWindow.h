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
    void init();

};