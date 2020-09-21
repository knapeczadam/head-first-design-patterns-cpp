#include "TeaWithHook.h"

#include <cctype>
#include <ios>
#include <iostream>
#include <limits>

namespace templatemethod::barista
{
    unsigned char TeaWithHook::getUserInput()
    {
        std::cout << "Would you like lemon with your tea (y/n)? " << '\n';
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

    void TeaWithHook::brew()
    {
        std::cout << "Steeping the tea" << '\n';
    }

    void TeaWithHook::addCondiments()
    {
        std::cout << "Adding Lemon" << '\n';
    }

    bool TeaWithHook::customerWantsCondiments()
    {
        unsigned char answer = getUserInput();
        return std::tolower(answer) == 'y';
    }
}
