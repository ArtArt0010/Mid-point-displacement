cmake_minimum_required(VERSION 3.16)

project(MidPointD VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_AUTOMOC ON)

find_package(Qt6 REQUIRED COMPONENTS Core Quick Qml)

qt_add_executable(MidPointD
    main.cpp
    mid_point_displacment.cpp
    mid_point_displacment.h
)
qt_add_qml_module(MidPointD
    URI MidPointD
    VERSION 1.0
    QML_FILES
        Main.qml
)

target_link_libraries(MidPointD
    PRIVATE
        Qt6::Core
        Qt6::Quick
        Qt6::Qml
)
