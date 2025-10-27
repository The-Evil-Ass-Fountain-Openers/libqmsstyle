cmake_minimum_required(VERSION 3.16)

project(libqmsstyle LANGUAGES CXX)
set(QT_MIN_VERSION "6.10.0")
set(QT_MAJOR_VERSION 6)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 REQUIRED COMPONENTS Core Widgets)

add_library(qmsstyle SHARED
  libqmsstyle_global.h
  libqmsstyle.cpp
  libqmsstyle.h

  style/class.h style/class.cpp
  style/style.h style/style.cpp
  style/visualpartsmap.h
  style/visualstatesmap.h
  style/property.h
  style/property.cpp
  style/definitions.h
  style/visualenumsmap.h
  style/propertystream.h style/propertystream.cpp
  util.h util.cpp
)

target_link_libraries(qmsstyle PRIVATE Qt${QT_MAJOR_VERSION}::Core Qt${QT_MAJOR_VERSION}::Widgets)
target_link_libraries(qmsstyle PRIVATE Qt6::Core Qt6::Widgets)
target_link_libraries(qmsstyle PRIVATE Qt6::Core)

target_compile_definitions(qmsstyle PRIVATE LIBQMSSTYLE_LIBRARY)
add_subdirectory(testing)
