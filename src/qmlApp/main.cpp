#include <QApplication>
#include <QQmlApplicationEngine>

int main(int argc, char* argv[])
{
    QApplication app(argc, argv);

    // Init the qml engine
    QQmlApplicationEngine engine;

    // load main qml file
    engine.loadFromModule("qmlApp/app", "Main");

    const bool errorCode = app.exec();

    return errorCode;
}
