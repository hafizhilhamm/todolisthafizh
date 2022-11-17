cmake_minimum_required(VERSION 3.0.0)
project(agenda VERSION 0.1.0)

include(CTest)
enable_testing()

add_library(Jadwal agenda.cpp)
add_executable(agenda main.cpp)

target_link_libraries(agenda Jadwal)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
