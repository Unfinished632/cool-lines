#include <raylib.h>
#include <imgui.h>
#include <rlImGui.h>

#include "buildConfig.h"

int main(){
    #ifdef RELEASE_BUILD
        SetTraceLogLevel(LOG_NONE);
    #endif


    InitWindow(800, 450, "raylib [core] example - basic window");

    IMGUI_CHECKVERSION();

    rlImGuiSetup(true);

    while(!WindowShouldClose()){
        BeginDrawing();
        rlImGuiBegin();

        ClearBackground(BLACK);
        DrawText(TextFormat("%d", GetFPS()), 10, 10, 50, RAYWHITE);

        ImGui::Begin("Settings");

        ImGui::Button("Hello World!");

        ImGui::End();

        rlImGuiEnd();
        EndDrawing();
    }

    rlImGuiShutdown();

    CloseWindow();

    return 0;
}