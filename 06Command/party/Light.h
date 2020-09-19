#pragma once

#include <string>

namespace command::party
{
    class Light
    {
        std::string location;

        unsigned int level = 0;

    public:
        explicit Light(std::string newLocation);

        void on();

        void off();

        void dim(unsigned int newLevel);

        unsigned int getLevel() const;
    };
}
