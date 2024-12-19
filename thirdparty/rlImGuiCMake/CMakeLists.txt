cmake_minimum_required(VERSION 3.1)
project(rlImGui)

add_library(rlImGui)
target_sources(rlImGui PRIVATE 
"${CMAKE_CURRENT_SOURCE_DIR}/rlImGui/rlImGui.cpp"
)

target_compile_definitions(rlImGui PUBLIC NO_FONT_AWESOME)
target_include_directories(rlImGui PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/rlImGui")


target_link_libraries(rlImGui PUBLIC imgui raylib)