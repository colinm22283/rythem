#include <math.h>
#include <iostream>

#include "global.h"
#include "script.h"
#include "engine.h"
#include "console.h"
#include "render.h"
#include "input.h"
#include "consoleParser.h"
#include "font.h"
#include "map.h"

void Script::exit()
{
    Console::print("Exit");

    Engine::quit = true;
}

void Script::keyDown(SDL_Keysym keysym) { }

void Script::start()
{
}
void Script::update()
{
    Render::clearScreen();

    if (Engine::currentTime > 1000) Map::playing = true;
    //Console::print("Time: " + Engine::currentTime);

    Map::update();
}

void Script::mouseDown(int button)
{
    
}
void Script::mouseClick(int button)
{
    
}