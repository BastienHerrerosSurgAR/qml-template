import QtQuick
import QtQuick.Controls

ApplicationWindow {
    id: root

    title: "Simple QML app"
    visible: true
    width: 1280
    height: 720
    color: "grey"

    Column {
        anchors.centerIn: parent

        Hello {}

        SimpleIcon {}
    }
}
