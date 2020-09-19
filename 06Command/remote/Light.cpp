#include "Light.h"

#include <utility>
#include <iostream>

namespace command::remote
{
    Light::Light(std::string newLocation) : location{std::move(newLocation)}
    {

    }

    void Light::on()
    {
        std::cout << location << " light is on" << '\n';
    }

    void Light::off()
    {
        std::cout << location << " light if off" << '\n';
    }
}
