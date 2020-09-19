#include "Stereo.h"

#include <iostream>
#include <utility>

namespace command::remote
{
    Stereo::Stereo(std::string newLocation) : location{std::move(newLocation)}
    {

    }

    void Stereo::on()
    {
        std::cout << location << " a stereo is on" << '\n';
    }

    void Stereo::off()
    {
        std::cout << location << " stereo is off" << '\n';
    }

    void Stereo::setCD()
    {
        std::cout << location << " a stereo if set for CD input" << '\n';
    }

    void Stereo::setDVD()
    {
        std::cout << location << " a stereo is set for DVD input" << '\n';
    }

    void Stereo::setRadio()
    {
        std::cout << location << " a stereo is set for Radio" << '\n';
    }

    void Stereo::setVolume(int volume)
    {
        std::cout << location << " Stereo volume set to " << volume << '\n';
    }
}
