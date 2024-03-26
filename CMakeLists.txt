cmake_minimum_required(VERSION 3.22.1)
project(vulkan_tutorial)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

find_package(Vulkan REQUIRED)

add_subdirectory(third_party/glfw)

include_directories(includes)
include_directories(third_party/glm)

add_executable(vulkan_tutorial
        src/main.cpp
        src/01-Drawing_Triangle/hello_triangle_application.cpp
        includes/01-Drawing_Triangle/hello_triangle_application.h
        src/common/vulkan_window.cpp
        includes/common/vulkan_window.h
)

target_link_libraries(vulkan_tutorial
        glfw
        Vulkan::Vulkan
)