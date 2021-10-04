#include "map.h"
#include <math.h>

long Map::length = 0;
int Map::barTiming = 0;

Map::Bar* Map::bars;

bool Map::load(std::string path)
{
    Map::length = 7;
    Map::barTiming = 1000;

    Map::bars = (Bar*)malloc(sizeof(Bar) * Map::length);

    Map::bars[0] = { true, false, false, false };
    Map::bars[1] = { false, true, false, false };
    Map::bars[2] = { false, false, true, false };
    Map::bars[3] = { false, false, false, true };
    Map::bars[4] = { false, false, true, false };
    Map::bars[5] = { false, true, false, false };
    Map::bars[6] = { true, false, false, false };

    return true;
}

Map::Bar Map::getBar(long time)
{
    long position = round((double)time / Map::barTiming);

    return Map::bars[position];
}