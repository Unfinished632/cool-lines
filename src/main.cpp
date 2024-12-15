#include <raylib.h>

int main(){
    InitWindow(800, 450, "raylib [core] example - basic window");

    while(!WindowShouldClose()){
        BeginDrawing();

        ClearBackground(BLACK);
        DrawText("Hello World!", 10, 10, 50, RAYWHITE);

        EndDrawing();
    }

    CloseWindow();

    return 0;
}