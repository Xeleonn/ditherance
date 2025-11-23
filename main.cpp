#include <QApplication>
#include <QLabel>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    QLabel label("Hi it nya amethyst");
    label.show();
    return app.exec();
}