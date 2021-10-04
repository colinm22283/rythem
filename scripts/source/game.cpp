#include "game.h"
#include "engine.h"
#include "render.h"
#include "console.h"
#include "font.h"
#include "global.h"

bool Game::debugMode = false;

bool Game::playing = false;
long Game::position = 0;

void Game::update()
{
    if (Game::playing)
    {
        Game::position += Engine::deltaTime;
    }

    if (Game::debugMode)
    {
        Render::fillRect(0, Global::windowHeight - 20, 400, 20, { 0, 0, 0, 255 });
        Render::setColor({ 255, 255, 255, 255 });
        Render::drawText(5, Global::windowHeight - 18, Font::consolas, "Time: " + std::to_string(Game::position), 0.7);
    }
}