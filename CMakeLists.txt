cmake_minimum_required(VERSION 3.12)
project(CmakeGTest)

set(CMAKE_CXX_STANDARD 17)
enable_testing()

include_directories(include)
aux_source_directory(src SOURCES)

add_subdirectory(thirdparty)
add_subdirectory(test)

add_executable(${PROJECT_NAME} ${SOURCES})