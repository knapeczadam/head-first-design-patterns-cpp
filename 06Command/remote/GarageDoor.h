#pragma once

#include <string>

namespace command::remote
{
    class GarageDoor
    {
        std::string location;
    public:
        explicit GarageDoor(std::string newLocation);

        void up();

        void down();

        void stop();

        void lightOn();

        void lightOff();
    };
}
