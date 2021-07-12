cmake_minimum_required(VERSION 3.11)

# set the project name and version
project(TString VERSION 1.0)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# add the executable
add_executable(${PROJECT_NAME} main.cpp)