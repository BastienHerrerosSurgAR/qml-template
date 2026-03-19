set(_exeName "qmlApp")

set(_qmlFiles
    app/Main.qml
    widgets/Hello.qml
    widgets/SimpleIcon.qml)

set(_qmlResources
    assets/icon.svg)

set(_cppSources
    main.cpp)

set(_links
    Qt::Core
    Qt::Qml
    Qt::Quick
    Qt::Widgets)

qt_add_executable(${_exeName} ${_cppSources})

qt_add_qml_module(${_exeName}
    URI ${_exeName}
    QML_FILES ${_qmlFiles}
    RESOURCES ${_qmlResources}
)

target_link_libraries(${_exeName} PRIVATE ${_links})

