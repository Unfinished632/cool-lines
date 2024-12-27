#include <cmath>

#include "program.h"
#include <raylib.h>

#include "util.h"

Program::Program(){
    engine = new Engine(1000, 1000, "Cool Lines | The stylish graphing calculator");
}

Program::~Program(){
    delete engine;
}

void Program::Start(){
    while(!WindowShouldClose()){
        engine->StartFrame();

        DrawAxisLines();

        /*for(float x = -engine->windowWidth / 2; x < engine->windowWidth; x += 0.1f){
            float y = engine->windowHeight;
            y -= std::tan(x);
            DrawPixelV(Vector2(x + engine->windowWidth / 2, y - engine->windowHeight / 2), WHITE);
        }*/

        for(float x = -10; x < 10; x += 0.0002f){
            float y = std::log(x);
            y = -y;
            DrawPixelV(Vector2(Map(x, -10, 10, 0, engine->windowWidth), Map(y, -10, 10, engine->windowHeight, 0)), WHITE);
        }

        engine->EndFrame();
    }
}

void Program::DrawAxisLines(){
    int width = engine->windowWidth;
    int height = engine->windowHeight;

    DrawLine(0, height / 2, width, height / 2, RED);
    DrawLine(width / 2, 0, width / 2, height, GREEN);
}