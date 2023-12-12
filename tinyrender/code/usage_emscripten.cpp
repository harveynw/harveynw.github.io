#ifdef __EMSCRIPTEN__
    emscripten_set_main_loop_arg(
        [](void *userData) {
            tinyrender::Engine *app = reinterpret_cast<tinyrender::Engine*>(userData);
            app->onFrame();
        },
        (void*) engine.get(),
        0, true
    );
#endif