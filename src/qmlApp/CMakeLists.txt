set(_exeName "qmlApp")

set(_qmlFiles
    app/Main.qml)

set(_qmlResources)

set(_cppSources
    main.cpp)

set(_links
    uiLib)

qt_add_executable(${_exeName} ${_cppSources})

qt_add_qml_module(${_exeName}
    URI ${_exeName}
    QML_FILES ${_qmlFiles}
    RESOURCES ${_qmlResources}
)

target_link_libraries(${_exeName} PRIVATE ${_links})

