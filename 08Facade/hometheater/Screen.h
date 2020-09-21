#pragma once

#include <ostream>
#include <string>

namespace facade::hometheater
{
    class Screen
    {
        std::string description;

    public:
        explicit Screen(std::string newDescription);

        void up();

        void down();

        friend std::ostream& operator<<(std::ostream& os, const Screen& screen);
    };
}
