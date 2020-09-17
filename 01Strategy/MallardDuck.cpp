#include "MallardDuck.h"

#include "FlyWithWings.h"
#include "Quack.h"

#include <iostream>
#include <memory>

namespace strategy
{
    void MallardDuck::display() const
    {
        std::cout << "I'm a real Mallard duck" << '\n';
    }

    MallardDuck::MallardDuck()
    {
        quackBehavior = std::make_shared<Quack>();
        flyBehavior = std::make_shared<FlyWithWings>();
    }
}
