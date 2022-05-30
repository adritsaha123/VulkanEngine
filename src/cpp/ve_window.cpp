#include "ve_window.hpp"

namespace ve {
    void VE_WINDOW::initWindow() {
        glfwInit();
        
        glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
        glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

        window = glfwCreateWindow(WIDTH, HEIGHT, "Vulkan", nullptr, nullptr);
        std::cout << "Init Window" << std::endl;
    }

    void VE_WINDOW::initVulkan() {
        std::cout << "Init Vulkan" << std::endl;
    }

    void VE_WINDOW::mainLoop() {
        std::cout << "Main Loop" << std::endl;
        while (!glfwWindowShouldClose(window)) {
            glfwPollEvents();
        }
    }

    void VE_WINDOW::cleanup() {
        std::cout << "Cleanup" << std::endl;
        glfwDestroyWindow(window);

        glfwTerminate();
    }
}