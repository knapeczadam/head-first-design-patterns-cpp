#include "DecoyDuck.h"

#include "FlyNoWay.h"
#include "MuteQuack.h"

#include <iostream>
#include <memory>

namespace strategy
{
    void DecoyDuck::display() const
    {
        std::cout << "I'm a duck Decoy" << '\n';
    }

    DecoyDuck::DecoyDuck()
    {
        flyBehavior = std::make_shared<FlyNoWay>();
        quackBehavior = std::make_shared<MuteQuack>();
    }
}
