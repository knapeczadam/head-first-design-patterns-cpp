#include "RedHeadDuck.h"

#include "FlyWithWings.h"
#include "Quack.h"

#include <iostream>
#include <memory>

namespace strategy
{
    void RedHeadDuck::display() const
    {
        std::cout << "I'm a real Red Headed duck" << '\n';
    }

    RedHeadDuck::RedHeadDuck()
    {
        flyBehavior = std::make_shared<FlyWithWings>();
        quackBehavior = std::make_shared<Quack>();
    }
}
