#include "map.h"
#include "engine.h"
#include "render.h"
#include "console.h"
#include "font.h"
#include "global.h"

bool Map::playing = false;
long Map::position = 0;

void Map::update()
{
    if (Map::playing)
    {
        Map::position += Engine::deltaTime;

#ifdef MAP_DEBUG_MODE
        Render::fillRect(0, Global::windowHeight - 20, 400, 20, { 0, 0, 0, 255 });
        Render::setColor({ 255, 255, 255, 255 });
        Render::drawText(5, Global::windowHeight - 18, Font::consolas, "Time: " + std::to_string(Map::position), 0.7);
#endif
    }
}