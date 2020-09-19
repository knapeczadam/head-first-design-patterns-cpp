#include "CeilingFan.h"

#include <iostream>
#include <utility>

namespace command::undo
{
    CeilingFan::CeilingFan(std::string newLocation) : location{std::move(newLocation)}
    {

    }

    void CeilingFan::high()
    {
        level = HIGH;
        std::cout << location << " ceiling fan is on high" << '\n';
    }

    void CeilingFan::medium()
    {
        level = MEDIUM;
        std::cout << location << " ceiling fan is on medium" << '\n';
    }

    void CeilingFan::low()
    {
        level = LOW;
        std::cout << location << " ceiling fan is on low" << '\n';
    }

    void CeilingFan::off()
    {
        level = OFF;
        std::cout << location << " ceiling fan is off" << '\n';
    }

    unsigned char CeilingFan::getSpeed() const
    {
        return level;
    }
}
