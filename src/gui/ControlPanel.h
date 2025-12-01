#pragma once

#include <QWidget>
#include <QVBoxLayout>
#include <QLabel>
#include <QAbstractSlider>

class ControlPanel : public QWidget
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