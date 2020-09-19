#include "GarageDoor.h"

#include <iostream>
#include <utility>

namespace command::remote
{
    GarageDoor::GarageDoor(std::string newLocation) : location{std::move(newLocation)}
    {

    }

    void GarageDoor::up()
    {
        std::cout << location << " garage Door is Up" << '\n';
    }

    void GarageDoor::down()
    {
        std::cout << location << " garage Door is Down" << '\n';
    }

    void GarageDoor::stop()
    {
        std::cout << location <<  " garage Door is Stopped" << '\n';
    }

    void GarageDoor::lightOn()
    {
        std::cout << location << " garage light is on" << '\n';
    }

    void GarageDoor::lightOff()
    {
        std::cout << location << " garage light is off" << '\n';
    }
}
