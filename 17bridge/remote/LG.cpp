#include "LG.h"

#include <iostream>

namespace bridge::remote
{
    void LG::on()
    {
        std::cout << "Turning on the LG TV" << '\n';
    }

    void LG::off()
    {
        std::cout << "Turning off the LG TV" << '\n';
    }

    void LG::tuneChannel(int newChannel)
    {
        channel = newChannel;
        std::cout << "Set the LG TV Channel to " << channel << '\n';
    }

    int LG::getChannel() const
    {
        return channel;
    }
}
