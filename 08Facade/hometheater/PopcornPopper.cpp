#include "PopcornPopper.h"

#include <iostream>
#include <utility>

namespace facade::hometheater
{
    PopcornPopper::PopcornPopper(std::string newDescription) : description{std::move(newDescription)}
    {

    }

    void PopcornPopper::on()
    {
        std::cout << description << " on" << '\n';
    }

    void PopcornPopper::off()
    {
        std::cout << description << " off" << '\n';
    }

    void PopcornPopper::pop()
    {
        std::cout << description << " popping popcorn!" << '\n';
    }

    std::ostream& operator<<(std::ostream& os, const PopcornPopper& popcornPopper)
    {
        os << popcornPopper.description;
        return os;
    }
}
