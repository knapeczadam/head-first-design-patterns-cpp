#include "CoffeeWithHook.h"

#include <cctype>
#include <ios>
#include <iostream>
#include <limits>

namespace templatemethod::barista
{
    unsigned char CoffeeWithHook::getUserInput()
    {
        std::cout << "Would you like milk and sugar with your coffee (y/n)? " << '\n';
        unsigned char answer = 'n';
        try
        {
            std::cin >> answer;
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
        catch (const std::ios_base::failure& e)
        {
            std::cerr << e.what() << '\n';
            std::cerr << "IO error trying to read your answer" << '\n';
        }
        return answer;
    }

    void CoffeeWithHook::brew()
    {
        std::cout << "Dripping Coffee through filter" << '\n';
    }

    void CoffeeWithHook::addCondiments()
    {
        std::cout << "Adding Sugar and Milk" << '\n';
    }

    bool CoffeeWithHook::customerWantsCondiments()
    {
        unsigned char answer = getUserInput();
        return std::tolower(answer) == 'y';
    }
}
