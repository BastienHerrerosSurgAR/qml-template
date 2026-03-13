set(_libName uiLib)

set(_qmlFiles
    widgets/Hello.qml
    widgets/SimpleIcon.qml)

set(_qmlResources
    assets/icon.svg)

set(_publicLinks
    Qt::Core
    Qt::Qml
    Qt::Quick
    Qt::Widgets)

qt_add_library(${_libName} STATIC) # Add sources and headers if needed

# This will create a uiLibplugin target
qt_add_qml_module(${_libName}
    URI ${_libName}
    QML_FILES ${_qmlFiles}
    RESOURCES ${_qmlResources}
    NO_PLUGIN)

target_link_libraries(${_libName} PUBLIC ${_publicLinks})