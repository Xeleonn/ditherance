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
}

void ImagePreviewPanel::InitLayouts()
{
    this->setLayout(main_layout);
}

void ImagePreviewPanel::InitWidgetProperties()
{
    this->setStyleSheet("background-color: red;");
}