#include "Screen.h"

#include <iostream>
#include <utility>

namespace facade::hometheater
{
    Screen::Screen(std::string newDescription) : description{std::move(newDescription)}
    {

    }

    void Screen::up()
    {
        std::cout << description << " going up" << '\n';
    }

    void Screen::down()
    {
        std::cout << description << "going down" << '\n';
    }

    std::ostream& operator<<(std::ostream& os, const Screen& screen)
    {
        os << screen.description;
        return os;
    }
}
