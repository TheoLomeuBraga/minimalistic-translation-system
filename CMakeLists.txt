cmake_minimum_required(VERSION 2.8)
project(MinimalisticTranslationSystem)

include_directories(src)
add_executable(test test/test.cpp)
set(CMAKE_EXE_LINKER_FLAGS "-static")
