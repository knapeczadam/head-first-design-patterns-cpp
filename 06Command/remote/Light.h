#pragma once

#include <string>

namespace command::remote
{
    class Light
    {
        std::string location;

    public:
        explicit Light(std::string newLocation);

        void on();

        void off();
    };
}
