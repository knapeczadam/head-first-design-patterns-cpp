#include "Coffee.h"
#include "CoffeeWithHook.h"
#include "Tea.h"
#include "TeaWithHook.h"

#include <iostream>

using templatemethod::barista::Coffee;
using templatemethod::barista::CoffeeWithHook;
using templatemethod::barista::Tea;
using templatemethod::barista::TeaWithHook;

int main()
{
    Tea tea;
    Coffee coffee;

    std::cout << "\nMaking tea..." << '\n';
    tea.prepareRecipe();

    std::cout << "\nMaking coffee..." << '\n';
    coffee.prepareRecipe();

    TeaWithHook teaHook;
    CoffeeWithHook coffeeHook;

    std::cout << "\nMaking tea..." << '\n';
    teaHook.prepareRecipe();

    std::cout << "\nMaking coffee..." << '\n';
    coffeeHook.prepareRecipe();
}
