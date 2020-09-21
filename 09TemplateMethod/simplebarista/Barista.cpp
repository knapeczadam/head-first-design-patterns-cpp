#include "Coffee.h"
#include "Tea.h"

#include <iostream>

using templatemethod::simplebarista::Coffee;
using templatemethod::simplebarista::Tea;

int main()
{
    Tea tea;
    Coffee coffee;
    std::cout << "Making tea..." << '\n';
    tea.prepareRecipe();
    std::cout << "Making coffee..." << '\n';
    coffee.prepareRecipe();
}
