#include "ControlPanel.h"

ControlPanel::ControlPanel()
{
    InitWidgets();
    InitLayouts();
    InitWidgetProperties();
}

void ControlPanel::InitWidgets()
{
    main_layout = new QVBoxLayout();
    main_layout->setAlignment(ALIGNMENT);

    // Title label
    title_label = new QLabel(this);
    title_label->setText(TITLE_LABEL_NAME);
    title_label->setAlignment(TITLE_LABEL_ALIGNMENT);
    title_label->setFixedHeight(TITLE_LABEL_HEIGHT);

    // Pixeliness slider
    pixeliness_slider = new QSlider(this);
    pixeliness_slider->setMinimum(PIXELINESS_SLIDER_MIN);
    pixeliness_slider->setMaximum(PIXELINESS_SLIDER_MAX);
    pixeliness_slider->setOrientation(PIXELINESS_SLIDER_ORIENTATION);
}

void ControlPanel::InitLayouts()
{
    main_layout->addWidget(title_label);
    main_layout->addWidget(pixeliness_slider);
    this->setLayout(main_layout);
}

void ControlPanel::InitWidgetProperties()
{
    // Style
    this->setStyleSheet(TEXT_COLOR + BACKGROUND_COLOR);

    // Size
    this->setMinimumWidth(WIDTH);
    this->setMaximumWidth(WIDTH);
    this->setSizePolicy(SIZE_POLICY_W, SIZE_POLICY_H);
}