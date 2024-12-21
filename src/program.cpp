#include "program.h"

Program::Program(){
    engine = new Engine(1000, 500, "Cool Lines | The stylish graphing calculator");
}

Program::~Program(){
    delete engine;
}

void Program::Start(){
    while(!WindowShouldClose()){
        engine->StartFrame();

        DrawText("Hello World!", 0, 0, 50, WHITE);

        engine->EndFrame();
    }
}