cmake_minimum_required(VERSION 3.26)
project(htmlparser)

set(CMAKE_CXX_STANDARD 17)

set(PROJECT_SOURCES src/HTMLTre.cpp
                    src/HTMLParser.cpp)

add_library(htmlparser ${PROJECT_SOURCES})
