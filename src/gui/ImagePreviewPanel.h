#pragma once

#include <QWidget>
#include <QGraphicsView>
#include <QGridLayout>

class ImagePreviewPanel : public QWidget
{
    Q_OBJECT;

public:
    ImagePreviewPanel();
    ~ImagePreviewPanel() = default;

private:
    QLayout *main_layout = nullptr;

    void InitWidgets();
    void InitLayouts();
    void InitWidgetProperties();
};