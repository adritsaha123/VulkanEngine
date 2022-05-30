#include "vulkanEngine/vulkanEngine_window.hpp"

namespace vulkanEngine {

    vulkanEngineWindow::vulkanEngineWindow(unsigned int w, unsigned int h, std::string name) 
    : width{w}, height{h}, windowName{name}
    {
        initWindow();
    }

    vulkanEngineWindow::~vulkanEngineWindow() {
        glfwDestroyWindow(window);
        glfwTerminate();
    }

    bool vulkanEngineWindow::shouldClose() {
        return glfwWindowShouldClose(window);
    }

    void vulkanEngineWindow::initWindow() {
        glfwInit();
        glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
        glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

        window = glfwCreateWindow(width, height, windowName.c_str(), nullptr, nullptr);
    }

}