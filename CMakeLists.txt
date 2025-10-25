cmake_minimum_required(VERSION 3.16)

project(libqmsstyle LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core Widgets)

find_package(Qt6 REQUIRED COMPONENTS Core Widgets)

add_library(libqmsstyle SHARED
  libqmsstyle_global.h
  libqmsstyle.cpp
  libqmsstyle.h

  styleclass.cpp
  styleclass.h
  style.h style.cpp
)

target_link_libraries(libqmsstyle PRIVATE Qt${QT_VERSION_MAJOR}::Core Qt${QT_VERSION_MAJOR}::Widgets)
target_link_libraries(libqmsstyle PRIVATE Qt6::Core Qt6::Widgets)

target_compile_definitions(libqmsstyle PRIVATE LIBQMSSTYLE_LIBRARY)
add_subdirectory(testing)
