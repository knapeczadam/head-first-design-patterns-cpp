#include "DeciduousTree.h"

#include <ctime>
#include <iostream>

namespace flyweight
{
    void DeciduousTree::display(int x, int y)
    {
        std::cout << "Deciduous tree is located at " << x << ", " << y << '\n';
        std::time_t t = std::time(nullptr);
        std::tm* tm = std::localtime(&t);
        if (!isWithinRage(tm->tm_mon + 1))
        {
            std::cout << "The tree currently has no leaves" << '\n';
        }
    }
}
