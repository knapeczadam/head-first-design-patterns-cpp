#include "CountingDuckFactory.h"
#include "DuckCall.h"
#include "Flock.h"
#include "Goose.h"
#include "GooseAdapter.h"
#include "IQuackable.h"
#include "MallardDuck.h"
#include "QuackCounter.h"
#include "RedheadDuck.h"
#include "RubberDuck.h"

#include <iostream>
#include <memory>

using combining::composite::CountingDuckFactory;
using combining::composite::DuckCall;
using combining::composite::Flock;
using combining::composite::Goose;
using combining::composite::GooseAdapter;
using combining::composite::IQuackable;
using combining::composite::MallardDuck;
using combining::composite::QuackCounter;
using combining::composite::RedheadDuck;
using combining::composite::RubberDuck;

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
    std::shared_ptr<IQuackable> gooseDuck = std::make_shared<GooseAdapter>(std::make_shared<Goose>());

    std::cout << "\nDuck Simulator: With Composite - Flocks" << '\n';

    Flock flockOfDucks;

    flockOfDucks.add(redheadDuck);
    flockOfDucks.add(duckCall);
    flockOfDucks.add(rubberDuck);
    flockOfDucks.add(gooseDuck);

    std::shared_ptr<Flock> flockOfMallards = std::make_shared<Flock>();

    std::shared_ptr<IQuackable> mallardOne = duckFactory.createMallardDuck();
    std::shared_ptr<IQuackable> mallardTwo = duckFactory.createMallardDuck();
    std::shared_ptr<IQuackable> mallardThree = duckFactory.createMallardDuck();
    std::shared_ptr<IQuackable> mallardFour = duckFactory.createMallardDuck();

    flockOfMallards->add(mallardOne);
    flockOfMallards->add(mallardTwo);
    flockOfMallards->add(mallardThree);
    flockOfMallards->add(mallardFour);

    flockOfDucks.add(flockOfMallards);

    std::cout << "\nDuck Simulator: Whole Flock Simulation" << '\n';
    simulate(&flockOfDucks);

    std::cout << "\nDuck Simulator: Mallard Flock Simulation" << '\n';
    simulate(flockOfMallards.get());

    std::cout << "The ducks quacked " << QuackCounter::getQuacks() << " times" << '\n';
}
