#include "engine.h"

Engine::Engine(int windowWidth, int windowHeight, const char* title){
    #ifdef RELEASE_BUILD
        SetTraceLogLevel(LOG_NONE);
    #endif


    InitWindow(windowWidth, windowHeight, title);

    IMGUI_CHECKVERSION();

    rlImGuiSetup(true);
}

Engine::~Engine(){
    rlImGuiShutdown();
    CloseWindow();
}

void Engine::StartFrame(){
    BeginDrawing();
    rlImGuiBegin();

    ClearBackground(clearColor);
}

void Engine::EndFrame(){
    rlImGuiEnd();
    EndDrawing();
}