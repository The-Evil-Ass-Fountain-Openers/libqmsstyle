cmake_minimum_required(VERSION 3.16)

project(libqmsstyles LANGUAGES CXX)

set(QT_MIN_VERSION "6.10.0")
set(QT_MAJOR_VERSION 6)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(LibWres REQUIRED)
find_package(Qt${QT_MAJOR_VERSION} REQUIRED COMPONENTS Core Widgets)

include(CMakePackageConfigHelpers)
include(GNUInstallDirs)

add_library(qmsstyles SHARED
  libqmsstyles_global.h
  libqmsstyles.cpp
  libqmsstyles.h

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
  logging.h logging.cpp
)

target_link_libraries(qmsstyles
  PRIVATE
    Qt${QT_MAJOR_VERSION}::Core
    Qt${QT_MAJOR_VERSION}::Widgets
    wres
)

install(
  FILES
    libqmsstyles.h
    libqmsstyles_global.h
  DESTINATION
    ${CMAKE_INSTALL_INCLUDEDIR}/qmsstyles
)
install(
  FILES
    style/class.h
    style/style.h
    style/visualpartsmap.h
    style/visualstatesmap.h
    style/property.h
    style/definitions.h
    style/visualenumsmap.h
    style/propertystream.h
  DESTINATION
    ${CMAKE_INSTALL_INCLUDEDIR}/qmsstyles/style/
)
install(
    TARGETS
      qmsstyles
    EXPORT
      LibQmsstyles-targets
    LIBRARY DESTINATION
      ${CMAKE_INSTALL_LIBDIR}
)


install(
  EXPORT
    LibQmsstyles-targets
  DESTINATION
    ${CMAKE_INSTALL_LIBDIR}/cmake/LibQmsstyles
)
configure_package_config_file(
  ${CMAKE_CURRENT_SOURCE_DIR}/LibQmsstylesConfig.cmake.in
  "${CMAKE_CURRENT_BINARY_DIR}/LibQmsstylesConfig.cmake"

  INSTALL_DESTINATION
    ${CMAKE_INSTALL_LIBDIR}/cmake/LibQmsstyles
)
install(
  FILES
    "${CMAKE_CURRENT_BINARY_DIR}/LibQmsstylesConfig.cmake"
  DESTINATION
    ${CMAKE_INSTALL_LIBDIR}/cmake/LibQmsstyles
)

add_definitions(-DHAVE_DIRENT_H=1)
add_definitions(-D_GNU_SOURCE=1)

target_compile_definitions(qmsstyles PRIVATE LIBQMSSTYLES_LIBRARY)

add_subdirectory(testing)
