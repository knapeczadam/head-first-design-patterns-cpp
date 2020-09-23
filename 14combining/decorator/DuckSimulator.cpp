#include "DuckCall.h"
#include "Goose.h"
#include "GooseAdapter.h"
#include "IQuackable.h"
#include "MallardDuck.h"
#include "QuackCounter.h"
#include "RedheadDuck.h"
#include "RubberDuck.h"

#include <iostream>
#include <memory>

using combining::decorator::DuckCall;
using combining::decorator::Goose;
using combining::decorator::GooseAdapter;
using combining::decorator::IQuackable;
using combining::decorator::MallardDuck;
using combining::decorator::QuackCounter;
using combining::decorator::RedheadDuck;
using combining::decorator::RubberDuck;

void simulate(IQuackable* duck)
{
    duck->quack();
}

int main()
{
    std::shared_ptr<IQuackable> mallardDuck = std::make_shared<QuackCounter>(std::make_shared<MallardDuck>());
    std::shared_ptr<IQuackable> redheadDuck = std::make_shared<QuackCounter>(std::make_shared<RedheadDuck>());
    std::shared_ptr<IQuackable> duckCall = std::make_shared<QuackCounter>(std::make_shared<DuckCall>());
    std::shared_ptr<IQuackable> rubberDuck = std::make_shared<QuackCounter>(std::make_shared<RubberDuck>());
    GooseAdapter gooseDuck{std::make_shared<Goose>()};

    std::cout << "\nDuck Simulator: With Decorator" << '\n';

    simulate(mallardDuck.get());
    simulate(redheadDuck.get());
    simulate(duckCall.get());
    simulate(rubberDuck.get());
    simulate(&gooseDuck);

    std::cout << "The ducks quacked " << QuackCounter::getQuacks() << " times" << '\n';
}
