cmake_minimum_required(VERSION 3.16)
project(lab_2_3_2)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(Container Container/Entity Container/Iterator)

add_executable(lab_2_3_2
        Container/Set.cpp
        Container/Set.hpp
        Container/IContainer.h
        errors.h
        main.cpp Container/Entity/SetItem.cpp
        Container/Entity/SetItem.hpp
        Container/Iterator/SetIterator.cpp
        Container/Iterator/SetIterator.hpp
        Container/Iterator/IIterator.hpp)
