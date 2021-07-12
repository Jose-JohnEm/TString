cmake_minimum_required(VERSION 3.11)

# set the project name and version
project(TString VERSION 1.0)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

SET(HEADERS_PATH "${PROJECT_SOURCE_DIR}/TString/")

FILE(GLOB_RECURSE SRCS CONFIGURE_DEPENDS
        "TString/*.cpp"
        "main.cpp"
        )

# add the executable
add_executable(${PROJECT_NAME} ${SRCS})

TARGET_INCLUDE_DIRECTORIES(${PROJECT_NAME} PRIVATE ${HEADERS_PATH})