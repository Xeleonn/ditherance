#include "ImagePreviewPanel.h"

ImagePreviewPanel::ImagePreviewPanel()
{
    InitWidgets();
    InitLayouts();
    InitWidgetProperties();
}

void ImagePreviewPanel::InitWidgets()
{
    main_layout = new QGridLayout();
    graphics_view = new QGraphicsView();
    img_scene = new QGraphicsScene(this);
    img_pixmap = new QPixmap(test_img);
    if (!QFile::exists(test_img)) {
        qDebug() << "Failed to load image " + test_img;
    }
    img_pixmap_item = new QGraphicsPixmapItem(*img_pixmap);
}

void ImagePreviewPanel::InitLayouts()
{
    graphics_view->setScene(img_scene);
    img_scene->addItem(img_pixmap_item);
    main_layout->addWidget(graphics_view);
    this->setLayout(main_layout);
}

void ImagePreviewPanel::InitWidgetProperties()
{
    this->setStyleSheet(BACKGROUND_COLOR);
}