#include "ConiferTree.h"

#include <iostream>

namespace flyweight
{
    void ConiferTree::display(int x, int y)
    {
        std::cout << "Conifer tree is located at " << x << ", " << y << '\n';
    }
}
