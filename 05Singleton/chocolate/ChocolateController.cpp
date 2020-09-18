#include "ChocolateBoiler.h"

#include <iostream>

using singleton::chocolate::ChocolateBoiler;

int main()
{
    ChocolateBoiler& boiler = ChocolateBoiler::getInstance();
    boiler.fill();
    boiler.boil();
    boiler.drain();

    ChocolateBoiler& boiler1 = ChocolateBoiler::getInstance();
};
