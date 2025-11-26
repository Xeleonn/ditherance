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
    label_widget->setText("Test Text");
}

void ControlPanel::InitLayouts()
{
    main_layout->addWidget(label_widget);
    this->setLayout(main_layout);
}

void ControlPanel::InitWidgetProperties()
{
    this->setStyleSheet("background-color: purple;");
}