import QtQuick
import QtQuick.Window
import QtQuick.Controls

ApplicationWindow {
    id: root

    title: "Simple QML app"
    visible: true
    width: 1280
    height: 720

    Column {
        anchors.centerIn: parent

        Hello {}

        SimpleIcon {}
    }
}
