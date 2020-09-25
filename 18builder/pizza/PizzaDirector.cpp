#include "MeatLoversPizzaBuilder.h"
#include "Pizza.h"
#include "PizzaBuilder.h"
#include "VeggieLoversPizzaBuilder.h"

#include <iostream>
#include <memory>

using builder::pizza::MeatLoversPizzaBuilder;
using builder::pizza::Pizza;
using builder::pizza::PizzaBuilder;
using builder::pizza::VeggieLoversPizzaBuilder;

int main()
{
    std::shared_ptr<PizzaBuilder> veggieBuilder = std::make_shared<VeggieLoversPizzaBuilder>();
    std::shared_ptr<Pizza> veggie = veggieBuilder->addSauce()->addCheese()->addOlives()->addTomatoes()->addSausage()->build();
    veggie->prepare();
    veggie->bake();
    veggie->cut();
    veggie->box();
    std::cout << *veggie << '\n';

    std::shared_ptr<PizzaBuilder> meatBuilder = std::make_shared<MeatLoversPizzaBuilder>();
    std::shared_ptr<Pizza> meat = meatBuilder->addSauce()->addTomatoes()->addCheese()->addSausage()->addPepperoni()->build();
    meat->prepare();
    meat->bake();
    meat->cut();
    meat->box();
    std::cout << *meat;
}
