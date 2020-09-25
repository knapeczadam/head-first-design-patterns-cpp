#pragma once

#include "Pizza.h"

#include <memory>
#include <string>
#include <vector>

namespace builder::pizza
{
    class PizzaBuilder : public std::enable_shared_from_this<PizzaBuilder>
    {
    protected:
        std::string name;

        std::vector<std::string> toppings;

    protected:
        virtual std::shared_ptr<PizzaBuilder> getPtr();

    public:
        virtual std::shared_ptr<PizzaBuilder> addCheese() = 0;

        virtual std::shared_ptr<PizzaBuilder> addSauce() = 0;

        virtual std::shared_ptr<PizzaBuilder> addTomatoes() = 0;

        virtual std::shared_ptr<PizzaBuilder> addGarlic() = 0;

        virtual std::shared_ptr<PizzaBuilder> addOlives() = 0;

        virtual std::shared_ptr<PizzaBuilder> addSpinach() = 0;

        virtual std::shared_ptr<PizzaBuilder> addPepperoni() = 0;

        virtual std::shared_ptr<PizzaBuilder> addSausage() = 0;

        std::shared_ptr<Pizza> build();

        virtual ~PizzaBuilder() = 0;
    };
}
