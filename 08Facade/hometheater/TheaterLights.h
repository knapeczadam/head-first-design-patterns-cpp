#pragma once

#include <ostream>
#include <string>

namespace facade::hometheater
{
    class TheaterLights
    {
        std::string description;

    public:
        explicit TheaterLights(std::string newDescription);

        void on();

        void off();

        void dim(int level);

        friend std::ostream& operator<<(std::ostream& os, const TheaterLights& theaterLights);
    };
}
