#include "Light.h"

#include <iostream>

namespace command::simpleremote
{
    void Light::on()
    {
        std::cout << "Light is on" << '\n';
    }

    void Light::off()
    {
        std::cout << "Light is off" << '\n';
    }
}
