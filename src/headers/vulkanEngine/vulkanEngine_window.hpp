#pragma once

#define GLFW_INCLUDE_VULKAN
#include <glfw3.h>

#include <string>

namespace vulkanEngine {
class vulkanEngineWindow {

public:
    vulkanEngineWindow(unsigned int w, unsigned int h, std::string name);
    ~vulkanEngineWindow();

    vulkanEngineWindow(const vulkanEngineWindow &) = delete;
    vulkanEngineWindow &operator=(const vulkanEngineWindow &) = delete;

    bool shouldClose();
private:
    void initWindow();

    const unsigned int width;
    const unsigned int height;

    std::string windowName;
    GLFWwindow *window;
};
} 