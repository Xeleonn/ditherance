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
    // Main layout
    QLayout* main_layout = nullptr;
    const int WIDTH                                     = 300;
    const Qt::Alignment ALIGNMENT                       = Qt::AlignTop;
    const QSizePolicy::Policy SIZE_POLICY_H             = QSizePolicy::Expanding;
    const QSizePolicy::Policy SIZE_POLICY_W             = QSizePolicy::Fixed;
    const QString TEXT_COLOR                            = "color: white;";
    const QString BACKGROUND_COLOR                      = "background-color: #292929;";

    // Title label
    QLabel *title_label = nullptr;
    const QString TITLE_LABEL_NAME                      = "Control Panel";
    const Qt::Alignment TITLE_LABEL_ALIGNMENT           = Qt::AlignCenter;
    const int TITLE_LABEL_HEIGHT                        = 25;

    // Pixeliness slider
    QAbstractSlider *pixeliness_slider = nullptr;
    const int PIXELINESS_SLIDER_MIN                     = 1;
    const int PIXELINESS_SLIDER_MAX                     = 20;
    const Qt::Orientation PIXELINESS_SLIDER_ORIENTATION = Qt::Horizontal;

    void InitWidgets();
    void InitLayouts();
    void InitWidgetProperties();
};