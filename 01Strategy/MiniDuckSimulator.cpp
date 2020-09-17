#include "Duck.h"
#include "FlyRocketPowered.h"
#include "MallardDuck.h"
#include "ModelDuck.h"

#include <memory>

using strategy::Duck;
using strategy::MallardDuck;
using strategy::ModelDuck;
using strategy::FlyRocketPowered;

int main()
{
    std::unique_ptr<Duck> mallard = std::make_unique<MallardDuck>();
    mallard->performFly();
    mallard->performQuack();

    std::unique_ptr<Duck> model = std::make_unique<ModelDuck>();
    model->performFly();
    model->setFlyBehavior(std::make_shared<FlyRocketPowered>());
    model->performFly();
}
