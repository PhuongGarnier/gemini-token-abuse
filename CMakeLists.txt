cmake_minimum_required(VERSION 3.16)
project(gemini-token-abuse CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(geminitokenabuse
    src/main.cpp
    src/keys.cpp
    src/projects.cpp
    src/rotate.cpp
    src/cli.cpp
)

target_include_directories(geminitokenabuse PRIVATE include)

if(WIN32)
    target_link_libraries(geminitokenabuse PRIVATE userenv)
endif()
