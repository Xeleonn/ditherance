#include <QApplication>
#include <QMainWindow>
#include <QLabel>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    QMainWindow *main_window = new QMainWindow();
    main_window->setWindowTitle("ditherance");
    main_window->show();
    return app.exec();
}