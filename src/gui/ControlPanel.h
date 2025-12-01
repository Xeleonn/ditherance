#pragma once

#include <QWidget>
#include <QFrame>
#include <QVBoxLayout>
#include <QLabel>
#include <QSlider>

class ControlPanel : public QFrame
{
    Q_OBJECT;

public:
    ControlPanel();
    ~ControlPanel() = default;

private:
    const int WIDTH = 300;

    QLayout *main_layout = nullptr;
    QLabel *title_label = nullptr;
    QAbstractSlider *pixeliness_slider = nullptr;

    void InitWidgets();
    void InitLayouts();
    void InitWidgetProperties();
};