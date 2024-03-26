//
// Created by antique on 24. 3. 25.
//

#include "01-Drawing_Triangle/hello_triangle_application.h"

HelloTriangleApplication::HelloTriangleApplication(const std::string &chapter, int width, int height)
: VulkanWindow(chapter, width, height) {


}

HelloTriangleApplication::~HelloTriangleApplication() {

}

void HelloTriangleApplication::create_instance() {
    // Initialize VkApplicationInfo
    VkApplicationInfo appInfo = {};
    appInfo.sType = VK_STRUCTURE_TYPE_APPLICATION_INFO;
    appInfo.pApplicationName = "Hello Triangle";
    appInfo.applicationVersion = VK_MAKE_VERSION(1, 0, 0);
    appInfo.pEngineName = "No Engine";
    appInfo.engineVersion = VK_MAKE_VERSION(1, 0, 0);
    appInfo.apiVersion = VK_API_VERSION_1_0;

    // Initialize VkInstanceCreateInfo
    uint32_t glfwExtensionCount = 0;
    const char** glfwExtensions;

    glfwExtensions = glfwGetRequiredInstanceExtensions(&glfwExtensionCount);

    VkInstanceCreateInfo createInfo = {};
    createInfo.sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
    createInfo.pApplicationInfo = &appInfo;
    createInfo.enabledExtensionCount = glfwExtensionCount;
    createInfo.ppEnabledExtensionNames = glfwExtensions;
    createInfo.enabledLayerCount = 0;

    //  Create VkInstance
    VkResult result = vkCreateInstance(&createInfo, nullptr, &_instance);
    if (result != VK_SUCCESS) {
        throw std::runtime_error("Error: failed to create VkInstance in HelloTriangleApplication.");
    }
}
