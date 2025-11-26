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
    label_widget = new QLabel(this);
    label_widget->setText("Control Panel");
}

void ControlPanel::InitLayouts()
{
    main_layout->addWidget(label_widget);
    this->setLayout(main_layout);
}

void ControlPanel::InitWidgetProperties()
{
    this->setStyleSheet("color: white;"
                        "background-color: #1c1c1cff;");
    this->setMinimumWidth(WIDTH);
    this->setMaximumWidth(WIDTH);
    this->setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);
}