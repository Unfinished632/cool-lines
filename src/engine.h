#include <raylib.h>
#include <imgui.h>
#include <rlImGui.h>

//To simplify and C++-ify raylib when needed
class Engine{
    public:
    Engine(int windowWidth, int windowHeight, const char* title);
    ~Engine();

    Color clearColor = BLACK;
    int windowWidth;
    int windowHeight;

    void StartFrame();
    void EndFrame();
};