#include <raylib.h>
#include <imgui.h>
#include <rlImGui.h>

#include "buildConfig.h"
#include "program.h"

int main(){
    Program* program = new Program();

    program->Start();

    return 0;
}