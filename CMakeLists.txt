cmake_minimum_required(VERSION 3.24)
project(courseWork)

set(CMAKE_CXX_STANDARD 17)

add_executable(courseWork main.cpp Person.h Person.cpp "Worker.h" Worker.cpp Electrician.h Electrician.cpp Object.h Object.cpp)
