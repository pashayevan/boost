cmake_minimum_required(VERSION 3.29)
project(boost)

set(CMAKE_CXX_STANDARD 20)

FIND_PACKAGE(Boost 1.40 COMPONENTS program_options REQUIRED)
INCLUDE_DIRECTORIES(${Boost_INCLUDE_DIR})

add_executable(boost main.cpp Cont.cpp string.cpp)


TARGET_LINK_LIBRARIES(boost Boost::program_options)
