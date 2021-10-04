#pragma once

#include <string>

namespace Map
{
    struct Bar { bool a; bool b; bool c; bool d; };

    extern long length;
    extern int barTiming;

    extern Bar* bars;

    bool load(std::string path);
    Bar getBar(long time);
}
