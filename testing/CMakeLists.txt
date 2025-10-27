cmake_minimum_required(VERSION 3.16)

project(testing VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(QT_MIN_VERSION "6.10.0")
set(QT_MAJOR_VERSION 6)

find_package(Qt${QT_MAJOR_VERSION} REQUIRED COMPONENTS Widgets)

set(PROJECT_SOURCES
        main.cpp
        mainwindow.cpp
        mainwindow.h
        mainwindow.ui
)

qt_add_executable(testing
    MANUAL_FINALIZATION
    ${PROJECT_SOURCES}
)

target_link_libraries(testing PRIVATE Qt${QT_VERSION_MAJOR}::Widgets qmsstyle)

include(GNUInstallDirs)
install(TARGETS testing
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

qt_finalize_executable(testing)
