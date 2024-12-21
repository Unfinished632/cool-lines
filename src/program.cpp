#include "program.h"
#include <raylib.h>

Program::Program(){
    engine = new Engine(1000, 500, "Cool Lines | The stylish graphing calculator");
}

Program::~Program(){
    delete engine;
}

void Program::Start(){
    while(!WindowShouldClose()){
        engine->StartFrame();

        DrawAxisLines();

        engine->EndFrame();
    }
}

void Program::DrawAxisLines(){
    int width = engine->windowWidth;
    int height = engine->windowHeight;

    DrawLine(0, height / 2, width, height / 2, RED);
    DrawLine(width / 2, 0, width / 2, height, GREEN);
}