cmake_minimum_required(VERSION 3.16)
project(lab_02.03)

set(CMAKE_CXX_STANDARD 17)

include_directories(.)

include_directories(Container Container/Entity Container/Iterator)


add_executable(lab_02.03
	src/errors.h
	src/IContainer.h
	src/IIterator.h
	src/main.cpp
	src/Set.hpp
	src/Set.h
	src/SetItem.hpp
	src/SetItem.h
	src/SetIterator.hpp
	src/SetIterator.h)
