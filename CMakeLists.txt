cmake_minimum_required(VERSION 3.2.0)
project(Ayush)
set(INCLUDE_PATHS boost_1_81_0  crow/include)
add_executable(Ayush src/main.cpp)
target_include_directories(Ayush PUBLIC ${CMAKE_SOURCE_DIR}/build/templates)


target_include_directories(Ayush PUBLIC ${INCLUDE_PATHS})

