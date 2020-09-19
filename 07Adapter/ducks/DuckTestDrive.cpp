#include "../challenge/DroneAdapter.h"
#include "../challenge/IDrone.h"
#include "../challenge/SuperDrone.h"
#include "IDuck.h"
#include "ITurkey.h"
#include "MallardDuck.h"
#include "TurkeyAdapter.h"
#include "WildTurkey.h"

#include <memory>
#include <iostream>

using adapter::challenge::DroneAdapter;
using adapter::challenge::IDrone;
using adapter::challenge::SuperDrone;
using adapter::ducks::IDuck;
using adapter::ducks::ITurkey;
using adapter::ducks::MallardDuck;
using adapter::ducks::TurkeyAdapter;
using adapter::ducks::WildTurkey;

void testDuck(const std::shared_ptr<IDuck>& duck);

int main()
{
    std::shared_ptr<IDuck> duck = std::make_shared<MallardDuck>();

    std::shared_ptr<ITurkey> turkey = std::make_shared<WildTurkey>();
    std::shared_ptr<IDuck> turkeyAdapter = std::make_shared<TurkeyAdapter>(turkey);

    std::cout << "The Turkey says..." << '\n';
    turkey->gobble();
    turkey->fly();

    std::cout << "\nThe Duck says..." << '\n';
    testDuck(duck);

    std::cout << "\nThe TurkeyAdapter says..." << '\n';
    testDuck(turkeyAdapter);

    std::shared_ptr<IDrone> drone = std::make_shared<SuperDrone>();
    std::shared_ptr<IDuck> droneAdapter = std::make_shared<DroneAdapter>(drone);
    testDuck(droneAdapter);
}

void testDuck(const std::shared_ptr<IDuck>& duck)
{
    duck->quack();
    duck->fly();
}
