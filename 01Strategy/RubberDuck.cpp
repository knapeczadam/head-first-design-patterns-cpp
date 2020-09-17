#include "RubberDuck.h"

#include "FlyNoWay.h"
#include "Squeak.h"

#include <iostream>

namespace strategy
{
    void RubberDuck::display() const
    {
        std::cout << "I'm a rubber duckie" << '\n';
    }

    RubberDuck::RubberDuck()
    {
        flyBehavior = std::make_shared<FlyNoWay>();
        quackBehavior = std::make_shared<Squeak>();
    }
}
