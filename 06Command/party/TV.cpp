#include "TV.h"

#include <iostream>
#include <utility>

namespace command::party
{
    TV::TV(std::string newLocation) : location{std::move(newLocation)}
    {

    }

    void TV::on()
    {
        std::cout << "TV is on" << '\n';
    }

    void TV::off()
    {
        std::cout << "TV is off" << '\n';
    }

    void TV::setInputChannel()
    {
        channel = 3;
        std::cout << "Channel is set for DVD" << '\n';
    }
}
