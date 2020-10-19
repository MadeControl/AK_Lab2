cmake_minimum_required(VERSION 3.17)

project(CA_LAB2)

add_library(calc STATIC calculator.cpp)

add_executable("${PROJECT_NAME}" main.cpp calculator.cpp calculator.h)

target_link_libraries("${PROJECT_NAME}" calc)