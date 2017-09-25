cmake_minimum_required(VERSION 3.7)
project(bashUtils)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp AdvancedOutput.cpp AdvancedOutput.h FSTools.cpp FSTools.h TermInfo.cpp TermInfo.h DirEntryList.cpp DirEntryList.h)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR})
add_executable(bashUtils ${SOURCE_FILES})