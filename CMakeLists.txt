cmake_minimum_required(VERSION 3.20)

project(LAL)

add_executable(${PROJECT_NAME} main.cpp)

add_subdirectory(linear_algebra)

target_include_directories(${PROJECT_NAME} PUBLIC linear_algebra)

target_link_directories(${PROJECT_NAME} PRIVATE linear_algebra/)

target_link_libraries(${PROJECT_NAME} linear_algebra)