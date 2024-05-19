cmake_minimum_required(VERSION 3.0.0)
project(slim VERSION 0.1.0 LANGUAGES C CXX)

include_directories(src)
file(GLOB_RECURSE SOURCES "*.cc")

include(CTest)
enable_testing()

add_executable(slim main.cc ${SOURCES})

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
