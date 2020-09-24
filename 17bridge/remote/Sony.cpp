#include "Sony.h"

#include <iostream>

namespace bridge::remote
{
    void Sony::on()
    {
        std::cout << "Turning on the Sony TV" << '\n';
    }

    void Sony::off()
    {
        std::cout << "Turning off the Sony TV" << '\n';
    }

    void Sony::tuneChannel(int newChannel)
    {
        station = newChannel;
        std::cout << "Set the Sony TV Channel to " << station << '\n';
    }

    int Sony::getChannel() const
    {
        return station;
    }
}
