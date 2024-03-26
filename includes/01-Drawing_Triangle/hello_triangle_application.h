//
// Created by antique on 24. 3. 25.
//

#ifndef VULKAN_TUTORIAL_HELLO_TRIANGLE_APPLICATION_H
#define VULKAN_TUTORIAL_HELLO_TRIANGLE_APPLICATION_H

#define GLFW_INCLUDE_VULKAN

#include <GLFW/glfw3.h>

#define GLM_FORCE_RADIANS
#define GLM_FORCE_DEPTH_ZERO_TO_ONE

#include <glm/vec4.hpp>
#include <glm/mat4x4.hpp>

#include <iostream>
#include "common/vulkan_window.h"


class HelloTriangleApplication : public VulkanWindow {
public:
    explicit HelloTriangleApplication(const std::string &chapter = "01.Hello Triangle!", int width = WIDTH, int height = HEIGHT);

    ~HelloTriangleApplication() override;

    void create_instance() override;
};


#endif //VULKAN_TUTORIAL_HELLO_TRIANGLE_APPLICATION_H
