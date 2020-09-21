#pragma once

#include <ostream>
#include <string>

namespace facade::hometheater
{
    class PopcornPopper
    {
        std::string description;

    public:
        explicit PopcornPopper(std::string newDescription);

        void on();

        void off();

        void pop();

        friend std::ostream& operator<<(std::ostream& os, const PopcornPopper& popcornPopper);
    };
}
