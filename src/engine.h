#include <raylib.h>
#include <imgui.h>
#include <rlImGui.h>

class Engine{
    public:
    Engine(int windowWidth, int windowHeight, const char* title);
    ~Engine();

    Color clearColor = BLACK;

    void StartFrame();
    void EndFrame();
};