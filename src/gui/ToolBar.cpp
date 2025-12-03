#include <ToolBar.h>


ToolBar::ToolBar()
{
    InitActions();
    InitConnections();
    InitProperties();
}

void ToolBar::InitActions()
{
    load_action = new QAction("Load", this);
    load_action->setStatusTip("Load an Image");
    save_action = new QAction("Save", this);
    save_action->setStatusTip("SaveLoad an Image");

    this->addAction(load_action);
    this->addAction(save_action);
}

void ToolBar::InitConnections()
{

}

void ToolBar::InitProperties()
{
    this->setOrientation(Qt::Horizontal);
}