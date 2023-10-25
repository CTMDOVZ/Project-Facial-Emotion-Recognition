cmake_minimum_required (VERSION 3.10.0)
project (proyecto-final---te02---202301-pf0220231-grupo2 VERSION 0.1.0)


include(CTest)
enable_testing()

find_package (OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

add_executable (${PROJECT_NAME} src/main.cpp)

target_link_libraries (${PROJECT_NAME} ${OpenCV_LIBS})

set (CPACK_PROJECT_NAME ${PROJECT_NAME})
set (CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include (CPack)