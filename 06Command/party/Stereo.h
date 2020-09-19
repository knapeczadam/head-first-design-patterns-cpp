#pragma once

#include <string>

namespace command::party
{
    class Stereo
    {
        std::string location;

    public:
        explicit Stereo(std::string newLocation);

        void on();

        void off();

        void setCD();

        void setDVD();

        void setRadio();

        void setVolume(int volume);
    };
}
