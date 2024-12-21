#include "engine.h"

class Program{
    public:
    Program();
    ~Program();

    void Start();

    private:
    Engine* engine;

    void DrawAxisLines();
};