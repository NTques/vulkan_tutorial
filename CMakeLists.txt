cmake_minimum_required(VERSION 3.22.1)
project(vulkan_tutorial)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_subdirectory(third_party/glfw)
include_directories(third_party/glm)

add_executable(vulkan_tutorial
        src/main.cpp)

target_link_libraries(vulkan_tutorial glfw)