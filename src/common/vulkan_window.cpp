//
// Created by antique on 24. 3. 25.
//

#include "common/vulkan_window.h"

VulkanWindow::VulkanWindow(const std::string &chapter, int width, int height) :
title(std::string("vulkan_tutorial-") + chapter),
width(width),
height(height) {}

VulkanWindow::~VulkanWindow() {

}

void VulkanWindow::run() {
    std::cout << "Init Window" << "\n";
    init_window();
    std::cout << "Init Vulkan" << "\n";
    init_vulkan();
    std::cout << "Main Loop" << "\n";
    main_loop();
    std::cout << "Cleanup" << "\n";
    cleanup();
}

void VulkanWindow::init_window() {
    glfwInit();

    glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
    glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

    _window_ptr = glfwCreateWindow(width, height, "vulkan_tutorial", nullptr, nullptr);
    glfwMakeContextCurrent(_window_ptr);
}

void VulkanWindow::init_vulkan() {
    create_instance();
}

void VulkanWindow::main_loop() {
    while (!glfwWindowShouldClose(_window_ptr)) {
        glfwPollEvents();
    }
}

void VulkanWindow::cleanup() {
    vkDestroyInstance(_instance, nullptr);

    glfwDestroyWindow(_window_ptr);

    glfwTerminate();
}

std::vector<VkExtensionProperties> VulkanWindow::get_vk_enumerate_instance_extension_properties() {
    uint32_t extensionCount = 0;
    vkEnumerateInstanceExtensionProperties(nullptr, &extensionCount, nullptr);

    std::vector<VkExtensionProperties> extensions(extensionCount);
    vkEnumerateInstanceExtensionProperties(nullptr, &extensionCount, extensions.data());

    return extensions;
}
