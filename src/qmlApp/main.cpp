#include <QApplication>
#include <QLoggingCategory>
#include <QQmlApplicationEngine>

int main(int argc, char* argv[])
{
    QApplication app(argc, argv);

    QLoggingCategory::setFilterRules("*.warning=true\n"
                                     "*.critical=true\n"
                                     "*.fatal=true\n"
                                     "*.system=true\n");

    QApplication::setApplicationName("Simple QML app");
    QApplication::setApplicationVersion("1.0.0");
    QApplication::setOrganizationName("SURGAR");
    QApplication::setOrganizationDomain("surgar-surgery.com");

    // Init the qml engine
    QQmlApplicationEngine engine;

    // load main qml file
    engine.loadFromModule("qmlApp/app", "Main");

    const bool errorCode = app.exec();

    return errorCode;
}
