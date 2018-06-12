cmake_minimum_required(VERSION 3.2)
include(cmake/HunterGate.cmake)
HunterGate(
    URL "https://github.com/ruslo/hunter/archive/v0.7.0.tar.gz"
    SHA1 "e730118c7ec65126398f8d4f09daf9366791ede0"
)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
project(Kurss)
set(SOUR main)
set(SOURCES
    sources/insert.cpp
    sources/merge.cpp
    sources/piramyd.cpp
    sources/quick.cpp)

add_library(lib SHARED ${SOURCES} )
target_include_directories(lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include/)
