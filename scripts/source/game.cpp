#include "game.h"
#include "engine.h"
#include "render.h"
#include "console.h"
#include "font.h"
#include "global.h"
#include "map.h"

bool Game::debugMode = false;
int Game::width = 100;

bool Game::playing = false;
long Game::position = 0;

void Game::update()
{
    if (Game::playing)
    {
        Game::position += Engine::deltaTime;

        Render::setColor({ 0, 0, 0, 255 });

        Map::Bar bar = Map::getBar(Game::position);
        if (bar.a)
        { Render::fillRect(0, Global::windowHeight - 40, Game::width / 4, 40); }
        if (bar.b)
        { Render::fillRect(Game::width / 4, Global::windowHeight - 40, Game::width / 4, 40); }
        if (bar.c)
        { Render::fillRect(Game::width / 2, Global::windowHeight - 40, Game::width / 4, 40); }
        if (bar.d)
        { Render::fillRect(Game::width / 4 * 3, Global::windowHeight - 40, Game::width / 4, 40); }
    }

    if (Game::debugMode)
    {
        Render::fillRect(0, Global::windowHeight - 20, 400, 20, { 0, 0, 0, 255 });
        Render::setColor({ 255, 255, 255, 255 });
        Render::drawText(5, Global::windowHeight - 18, Font::consolas, "Time: " + std::to_string(Game::position), 0.7);
    }
}