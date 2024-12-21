#include <raylib.h>
#include <imgui.h>
#include <rlImGui.h>

#include "buildConfig.h"
#include "engine.h"

int main(){
    Engine* engine = new Engine(1000, 500, "Cool Lines | The Stylish Graphing Calculator"); 

    while(!WindowShouldClose()){
        engine->StartFrame();

        DrawText("Hello World!", 0, 0, 50, WHITE);

        engine->EndFrame();
    }

    delete engine;

    return 0;
}