#include "ModelDuck.h"

#include "FlyNoWay.h"
#include "Quack.h"

#include <memory>
#include <iostream>

namespace strategy
{
    void ModelDuck::display() const
    {
        std::cout << "I'm a model duck" << '\n';
    }

    ModelDuck::ModelDuck()
    {
        flyBehavior = std::make_shared<FlyNoWay>();
        quackBehavior = std::make_shared<Quack>();
    }
}
