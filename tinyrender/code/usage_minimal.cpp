#include <memory>

#include "tinyrender/Engine.hpp"
#include "tinyrender/camera/FreeviewCamera.hpp"


int main(int, char**) {
    // Start tinyrender
    auto engine = std::make_unique<tinyrender::Engine>();
    engine->launch(640, 480);

    // Set camera
    auto camera = std::make_shared<tinyrender::FreeviewCamera>();
    engine->setCamera(camera);

    // *** Add objects here ***

    // Start event loop
    while (engine->isRunning())
        engine->onFrame();
    
    return 0;
}