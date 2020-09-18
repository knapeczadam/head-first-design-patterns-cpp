#pragma once

#include <iostream>
#include <list>
#include <string>

namespace factory::pizzafm
{
    class Pizza
    {
    protected:
        std::string name;

        std::string dough;

        std::string sauce;

        std::list<std::string> toppings;

    public:
        virtual ~Pizza() = 0;

        std::string getName() const;

        void prepare();

        void bake();

        virtual void cut();

        void box();

        friend std::ostream& operator<<(std::ostream& os, const Pizza& pizza);
    };
}
