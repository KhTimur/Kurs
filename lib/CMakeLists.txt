cmake_minimum_required(VERSION 2.8)
set(CMAKE_CXX_STANDARD 11)
project(lib)
set(SOURCES
    insert.cpp
    merge.cpp
    piramyd.cpp
    quick.cpp)
set(HEADERS
    insert.h
    merge.h
    piramyd.h
    quick.h)
add_library(lib SHARED ${SOURCES} ${HEADERS})
target_include_directories(lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
