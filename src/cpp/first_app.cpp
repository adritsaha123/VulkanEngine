#include "first_app.hpp"

namespace vulkanEngine {
    
    void FirstApp::run() {
        while (!vulkanEngineWindow.shouldClose()) {
            glfwPollEvents();
        }
    }

}