#pragma once

#include <iostream>
#include <list>

namespace factory::pizzas
{
    class Pizza
    {
    protected:
        std::string name;

        std::string dough;

        std::string sauce;

        std::list<std::string> toppings;

    public:
        std::string getName() const;

        void prepare() const;

        void bake() const;

        void cut() const;

        void box() const;

        friend std::ostream& operator<<(std::ostream& os, const Pizza& pizza);

        virtual ~Pizza() = 0;
    };
}
