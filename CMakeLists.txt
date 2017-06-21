cmake_minimum_required(VERSION 3.7)
project(PlayGround)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
    src/core/CommonConst.h
    src/core/ItemFactory.cpp
    src/core/ItemFactory.h
    src/core/RunItem.cpp
    src/core/RunItem.h
    src/main/main.cpp
    src/sample/SampleItem.cpp
    src/sample/SampleItem.h src/exception/FactoryException.h)

include_directories(include)

add_executable(PlayGround ${SOURCE_FILES})