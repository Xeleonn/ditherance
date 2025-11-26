cmake_minimum_required(VERSION 3.10)

project(ditherance LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_PREFIX_PATH "C:/Qt/6.10.1/mingw_64/lib/cmake" "G:/Qt/6.10.1/mingw_64/lib/cmake")
find_package(Qt6 COMPONENTS Core Gui Widgets REQUIRED)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOMOC ON)

set(SOURCE_FILES
	src/gui/MainWindow.cpp
	resources/app_icon.rc
)

set(INCLUDE_DIRS
	src/gui
)

add_executable(ditherance ${SOURCE_FILES})
target_include_directories(ditherance PUBLIC ${INCLUDE_DIRS})
target_link_libraries(ditherance PRIVATE Qt6::Core Qt6::Gui Qt6::Widgets)

file(COPY "libs/" DESTINATION ${CMAKE_BINARY_DIR})
file(COPY "plugins/" DESTINATION "${CMAKE_BINARY_DIR}/plugins")