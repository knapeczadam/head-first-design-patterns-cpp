#pragma once

#include <string>

namespace command::party
{
    class TV
    {
        std::string location;

        int channel = 0;

    public:
        explicit TV(std::string newLocation);

        void on();

        void off();

        void setInputChannel();
    };
}
