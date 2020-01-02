cmake_minimum_required(VERSION 3.7)

project(git_testDtk)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")

# Find the library
find_package(PkgConfig REQUIRED)
find_package(Qt5Widgets REQUIRED)
find_package(DtkWidget REQUIRED)

add_executable(${PROJECT_NAME} "main.cpp" resources.qrc "mainwindow.h" "mainwindow.cpp")

target_include_directories(git_testDtk PUBLIC ${DtkWidget_INCLUDE_DIRS} ${OBJECT_BINARY_DIR})
target_link_libraries(git_testDtk
    ${DtkWidget_LIBRARIES}
    ${Qt5Widgets_LIBRARIES}
)
