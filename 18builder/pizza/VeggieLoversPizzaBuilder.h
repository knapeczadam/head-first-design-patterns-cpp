#pragma once

#include "PizzaBuilder.h"

namespace builder::pizza
{
    class VeggieLoversPizzaBuilder : public PizzaBuilder
    {
    public:
        VeggieLoversPizzaBuilder();

        std::shared_ptr<PizzaBuilder> addCheese() override;

        std::shared_ptr<PizzaBuilder> addSauce() override;

        std::shared_ptr<PizzaBuilder> addTomatoes() override;

        std::shared_ptr<PizzaBuilder> addGarlic() override;

        std::shared_ptr<PizzaBuilder> addOlives() override;

        std::shared_ptr<PizzaBuilder> addSpinach() override;

        std::shared_ptr<PizzaBuilder> addPepperoni() override;

        std::shared_ptr<PizzaBuilder> addSausage() override;
    };
}
