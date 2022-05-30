#pragma once

#define GLFW_INCLUDE_VULKAN
#include <glfw3.h>
#include <iostream>

namespace ve {
    class VE_WINDOW {
    public:
    void run() {
        initWindow();
        initVulkan();
        mainLoop();
        cleanup();
    }

private:
    const unsigned int WIDTH = 800;
    const unsigned int HEIGHT = 600;
    GLFWwindow* window;
    void initWindow();
    void initVulkan();
    void mainLoop();
    void cleanup();
};
}
