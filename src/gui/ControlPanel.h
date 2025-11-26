#pragma once

#include <QWidget>
#include <QVBoxLayout>
#include <QLabel>

class ControlPanel : public QWidget
{
    Q_OBJECT;

public:
    ControlPanel();
    ~ControlPanel() = default;

private:
    QLayout *main_layout = nullptr;
    QLabel *label_widget = nullptr;

    void InitWidgets();
    void InitLayouts();
    void InitWidgetProperties();
};