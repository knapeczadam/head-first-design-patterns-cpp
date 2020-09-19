#pragma once

#include <string>

namespace command::undo
{
    class CeilingFan
    {
        std::string location;

        unsigned char level = OFF;

    public:
        static const unsigned char HIGH = 3;

        static const unsigned char MEDIUM = 2;

        static const unsigned char LOW = 1;

        static const unsigned char OFF = 0;

        explicit CeilingFan(std::string  newLocation);

        void high();

        void medium();

        void low();

        void off();

        unsigned char getSpeed() const;
    };
}
