cmake_minimum_required(VERSION 3.5)

project(sidekick LANGUAGES CXX)

find_package(Qt5 COMPONENTS Widgets REQUIRED)

set (sidekickLib_src
    ${PROJECT_SOURCE_DIR}/src/mainwindow.cpp
    ${PROJECT_SOURCE_DIR}/src/environmentalhelper.cpp
    ${PROJECT_SOURCE_DIR}/src/messagebox_notification.cpp
    ${PROJECT_SOURCE_DIR}/src/notification.cpp
    ${PROJECT_SOURCE_DIR}/src/timer.cpp
    ${PROJECT_SOURCE_DIR}/src/traynotification.cpp
    )

set (sidekickLib_hdr
    ${PROJECT_SOURCE_DIR}/include/mainwindow.h
    ${PROJECT_SOURCE_DIR}/include/environmentalhelper.h
    ${PROJECT_SOURCE_DIR}/include/messagebox_notification.h
    ${PROJECT_SOURCE_DIR}/include/notification.h
    ${PROJECT_SOURCE_DIR}/include/timer.h
    ${PROJECT_SOURCE_DIR}/include/traynotification.h
    )

set (sidekickLib_ui
    ${PROJECT_SOURCE_DIR}/forms/mainwindow.ui
    )
set (sidekickBin_src
    ${PROJECT_SOURCE_DIR}/src/main.cpp
    )

qt5_wrap_cpp(sidekickLib_hdr_moc ${sidekickLib_hdr})
qt5_wrap_ui(sidekickLib_ui_moc ${sidekickLib_ui})

include_directories (${PROJECT_SOURCE_DIR})
include_directories (${PROJECT_SOURCE_DIR}/include)
include_directories (${PROJECT_BINARY_DIR})

add_library(sidekickLib SHARED
    ${sidekickLib_src}
    ${sidekickLib_hdr_moc}
    ${sidekickLib_ui_moc}
    )

target_link_libraries (sidekickLib Qt5::Widgets)

add_executable(sidekick ${sidekickBin_src})

target_link_libraries (sidekick sidekickLib)