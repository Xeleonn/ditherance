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

    // Load image button
    load_img_button = new QPushButton(this);
    load_img_button->setText(LOAD_IMG_BUTTON_TEXT);
    load_img_button->setFixedWidth(LOAD_IMG_BUTTON_WIDTH);
    load_img_button->setFixedHeight(LOAD_IMG_BUTTON_HEIGHT);
    connect(load_img_button, &QPushButton::clicked, this, &ControlPanel::onLoadImgButtonClicked);
}

void ControlPanel::InitLayouts()
{
    main_layout->addWidget(title_label);
    main_layout->addWidget(pixeliness_slider);
    main_layout->addWidget(load_img_button);
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

void ControlPanel::onLoadImgButtonClicked()
{
    img_path_buffer = QFileDialog::getOpenFileName(
        this,
        tr("Open Document"),
        QDir::rootPath(),
        tr("Image files (*.jpg *.png)")
    );

    qDebug() << "Selected image path:" << img_path_buffer;

    if (!img_path_buffer.isEmpty())
        emit imageSelected(img_path_buffer);
}