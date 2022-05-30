#include <iostream>
#include <stdexcept>
#include <cstdlib>

#include "first_app.hpp"

int main() {
    vulkanEngine::FirstApp app{};

    try {
        app.run();
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}