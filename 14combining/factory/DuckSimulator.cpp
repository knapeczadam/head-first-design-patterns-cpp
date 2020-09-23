#include "CountingDuckFactory.h"
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

using combining::factory::CountingDuckFactory;
using combining::factory::DuckCall;
using combining::factory::Goose;
using combining::factory::GooseAdapter;
using combining::factory::IQuackable;
using combining::factory::MallardDuck;
using combining::factory::QuackCounter;
using combining::factory::RedheadDuck;
using combining::factory::RubberDuck;

void simulate(IQuackable* duck)
{
    duck->quack();
}

int main()
{
    CountingDuckFactory duckFactory;
    std::shared_ptr<IQuackable> mallardDuck = duckFactory.createMallardDuck();
    std::shared_ptr<IQuackable> redheadDuck = duckFactory.createRedheadDuck();
    std::shared_ptr<IQuackable> duckCall = duckFactory.createDuckCall();
    std::shared_ptr<IQuackable> rubberDuck = duckFactory.createRubberDuck();
    GooseAdapter gooseDuck{std::make_shared<Goose>()};

    std::cout << "\nDuck Simulator: With Abstract Factory" << '\n';

    simulate(mallardDuck.get());
    simulate(redheadDuck.get());
    simulate(duckCall.get());
    simulate(rubberDuck.get());
    simulate(&gooseDuck);

    std::cout << "The ducks quacked " << QuackCounter::getQuacks() << " times" << '\n';
}
