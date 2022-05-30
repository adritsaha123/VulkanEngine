#pragma once

#include "vulkanEngine/vulkanEngine_window.hpp"
#include "vulkanEngine/vulkanEngine_pipeline.hpp"

namespace vulkanEngine {
class FirstApp {
public:
    static const unsigned int WIDTH = 800;
    static const unsigned int HEIGHT = 600;

    void run();
private:
    vulkanEngineWindow vulkanEngineWindow{WIDTH, HEIGHT, "WINDOW"};
    vulkanEnginePipeline vulkanEnginePipeline{"src/shaders/simple_shader.vert.spv", "src/shaders/simple_shader.frag.spv"};
};
}