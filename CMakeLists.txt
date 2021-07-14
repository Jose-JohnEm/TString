cmake_minimum_required(VERSION 3.11)

# set the project name and version
project(TString VERSION 1.0)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

SET(TSTRING_HEADERS_PATH "${PROJECT_SOURCE_DIR}/TString/")
SET(EXCEPTION_HEADERS_PATH "${PROJECT_SOURCE_DIR}/Exception/")

FILE(GLOB_RECURSE SRCS CONFIGURE_DEPENDS
        "TString/*.cpp"
        "Exception/*.cpp"
        "main.cpp"
        )

# add the executable
add_executable(${PROJECT_NAME} ${SRCS})

TARGET_INCLUDE_DIRECTORIES(${PROJECT_NAME} PRIVATE
        ${TSTRING_HEADERS_PATH}
        ${EXCEPTION_HEADERS_PATH})