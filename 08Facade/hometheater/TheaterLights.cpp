#include "TheaterLights.h"

#include <iostream>
#include <utility>

namespace facade::hometheater
{
    TheaterLights::TheaterLights(std::string newDescription) : description{std::move(newDescription)}
    {

    }

    void TheaterLights::on()
    {
        std::cout << description << " on" << '\n';
    }

    void TheaterLights::off()
    {
        std::cout << description << " off" << '\n';
    }

    void TheaterLights::dim(int level)
    {
        std::cout << description << " dimming to " << level << "%" << '\n';
    }

    std::ostream& operator<<(std::ostream& os, const TheaterLights& theaterLights)
    {
        os << theaterLights.description;
        return os;
    }
}
