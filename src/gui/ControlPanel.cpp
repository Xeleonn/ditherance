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

    // Title label
    title_label = new QLabel(this);
    title_label->setText("Control Panel");
    title_label->setAlignment(Qt::AlignCenter);
    title_label->setFixedHeight(25);

    // Pixeliness slider
    pixeliness_slider = new QSlider(this);
    pixeliness_slider->setMinimum(1);
    pixeliness_slider->setMaximum(20);
    pixeliness_slider->setOrientation(Qt::Horizontal);
}

void ControlPanel::InitLayouts()
{
    main_layout->setAlignment(Qt::AlignTop);
    main_layout->addWidget(title_label);
    main_layout->addWidget(pixeliness_slider);
    this->setLayout(main_layout);
}

void ControlPanel::InitWidgetProperties()
{
    // Style
    this->setStyleSheet("color: white;" "background-color: black;");

    // Size
    this->setMinimumWidth(WIDTH);
    this->setMaximumWidth(WIDTH);
    this->setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);
}