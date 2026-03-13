import QtQuick
import QtQuick.Window
import QtQuick.Controls

import uiLib

ApplicationWindow {
    id: root

    title: "Simple QML app"
    visible: true
    width: 1280
    height: 720
    visibility: Window.Maximized

    Column {
        anchors.centerIn: parent

        Hello {}

        SimpleIcon {}
    }
}