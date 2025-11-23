cmake_minimum_required(VERSION 3.10) # Adjust version as needed
project(qtproject LANGUAGES CXX)

set(CMAKE_PREFIX_PATH "G:/Qt/6.10.1/mingw_64/lib/cmake")

find_package(Qt6 COMPONENTS Core Gui Widgets REQUIRED)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOMOC ON)

add_executable(qtproject main.cpp)
target_link_libraries(qtproject PRIVATE Qt6::Core Qt6::Gui Qt6::Widgets)
