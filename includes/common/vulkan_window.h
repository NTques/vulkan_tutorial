//
// Created by antique on 24. 3. 25.
//

#ifndef VULKAN_TUTORIAL_VULKAN_WINDOW_H
#define VULKAN_TUTORIAL_VULKAN_WINDOW_H

#define GLFW_INCLUDE_VULKAN

#include <GLFW/glfw3.h>

#define GLM_FORCE_RADIANS
#define GLM_FORCE_DEPTH_ZERO_TO_ONE

#include <glm/vec4.hpp>
#include <glm/mat4x4.hpp>

#include <iostream>

class VulkanWindow {
public:
    explicit VulkanWindow(const std::string &chapter, int width = WIDTH, int height = HEIGHT);

    virtual ~VulkanWindow();

    void run();

private:
    GLFWwindow *_window_ptr;

    std::string title;
    int width, height;

protected:
    static const int WIDTH = 800;
    static const int HEIGHT = 600;

    VkInstance _instance;

private:
    void init_window();

    void init_vulkan();

    virtual void create_instance() = 0;

    void main_loop();

    void cleanup();

    std::vector<VkExtensionProperties> get_vk_enumerate_instance_extension_properties();
};


#endif //VULKAN_TUTORIAL_VULKAN_WINDOW_H
