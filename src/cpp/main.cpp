#include <iostream>
#include <stdexcept>
#include <cstdlib>

#include "ve_window.hpp"

int main() {
    ve::VE_WINDOW window;
    try {
        window.run();
    } catch (const std::exception& e) {
        std::cout << e.what() << std::endl;
        return EXIT_FAILURE;        
    }

    return EXIT_SUCCESS;
}