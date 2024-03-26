//
// Created by antique on 24. 3. 25.
//

#include "01-Drawing_Triangle/hello_triangle_application.h"

int main(int argc, char** argv) {
    HelloTriangleApplication app = HelloTriangleApplication();
    try {
        app.run();
    } catch (const std::runtime_error &e) {
        std::cerr << e.what() << std::endl;
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}