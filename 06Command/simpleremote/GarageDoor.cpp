#include "GarageDoor.h"

#include <iostream>

namespace command::simpleremote
{
    void GarageDoor::up()
    {
        std::cout << "Garage Door is Open" << '\n';
    }

    void GarageDoor::down()
    {
        std::cout << "Garage Door is Closed" << '\n';
    }

    void GarageDoor::stop()
    {
        std::cout << "Garage Door is Stopped" << '\n';
    }

    void GarageDoor::lightOn()
    {
        std::cout << "Garage light is on" << '\n';
    }

    void GarageDoor::lightOff()
    {
        std::cout << "Garage light is off" << '\n';
    }
}
