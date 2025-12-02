#pragma once

#include "ControlPanel.h"

#include <QWidget>
#include <QGraphicsView>
#include <QGridLayout>
#include <QPixmap>
#include <QGraphicsPixmapItem>
#include <QFile>

class ImagePreviewPanel : public QWidget
{
    Q_OBJECT;

public:
    ImagePreviewPanel();
    ~ImagePreviewPanel() = default;

    void LoadImage(const QString& path);

private:
    QLayout* main_layout = nullptr;
    const QString BACKGROUND_COLOR = "background-color: #292929;";

    QGraphicsView* graphics_view = nullptr;
    QGraphicsScene* img_scene = nullptr;
    QPixmap* img_pixmap = nullptr;
    QGraphicsPixmapItem* img_pixmap_item = nullptr;

    QString test_img = "";

    void InitWidgets();
    void InitLayouts();
    void InitWidgetProperties();
};