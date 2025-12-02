#pragma once

#include "ImagePreviewPanel.h"

#include <QWidget>
#include <QFrame>
#include <QVBoxLayout>
#include <QLabel>
#include <QSlider>
#include <QPushButton>
#include <QFileDialog>

class ControlPanel : public QFrame
{
    Q_OBJECT;

public:
    ControlPanel();
    ~ControlPanel() = default;

signals:
    void imageSelected(const QString& path);

private:
    // Main layout
    QLayout* main_layout                                = nullptr;
    const int WIDTH                                     = 300;
    const Qt::Alignment ALIGNMENT                       = Qt::AlignTop;
    const QSizePolicy::Policy SIZE_POLICY_H             = QSizePolicy::Expanding;
    const QSizePolicy::Policy SIZE_POLICY_W             = QSizePolicy::Fixed;
    const QString TEXT_COLOR                            = "color: white;";
    const QString BACKGROUND_COLOR                      = "background-color: #292929;";

    // Title label
    QLabel* title_label                                 = nullptr;
    const QString TITLE_LABEL_NAME                      = "Control Panel";
    const Qt::Alignment TITLE_LABEL_ALIGNMENT           = Qt::AlignCenter;
    const int TITLE_LABEL_HEIGHT                        = 25;

    // Pixeliness slider
    QAbstractSlider* pixeliness_slider                  = nullptr;
    const int PIXELINESS_SLIDER_MIN                     = 1;
    const int PIXELINESS_SLIDER_MAX                     = 20;
    const Qt::Orientation PIXELINESS_SLIDER_ORIENTATION = Qt::Horizontal;

    // Load image button
    QPushButton* load_img_button                        = nullptr;
    const QString LOAD_IMG_BUTTON_TEXT                  = "Load Image";
    const int LOAD_IMG_BUTTON_WIDTH                     = 100;
    const int LOAD_IMG_BUTTON_HEIGHT                    = 25;

    QString img_path_buffer = "";

    void InitWidgets();
    void InitLayouts();
    void InitWidgetProperties();

    void onLoadImgButtonClicked();
};