#pragma once

#include <QWidget>
#include <QToolbar>
#include <QHBoxLayout>
#include <QAction>

class ToolBar : public QToolBar
{
    Q_OBJECT;

public:
    ToolBar();
    ~ToolBar() = default;

private:
    QAction* load_action = nullptr;
    QAction* save_action = nullptr;

    void InitActions();
    void InitConnections();
    void InitProperties();
};