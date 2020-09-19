#include "Light.h"

#include <utility>
#include <iostream>

namespace command::undo
{
    Light::Light(std::string newLocation) : location{std::move(newLocation)}
    {

    }

    void Light::on()
    {
        level = 100;
        std::cout << "Light is on" << '\n';
    }

    void Light::off()
    {
        level = 0;
        std::cout << "Light if off" << '\n';
    }

    void Light::dim(unsigned int newLevel)
    {
        level = newLevel;
        if (level == 0)
        {
            off();
        }
        else
        {
            std::cout << "Light is dimmed to " << level << "%" << '\n';
        }
    }

    unsigned int Light::getLevel() const
    {
        return level;
    }
}
