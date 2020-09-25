#pragma once

#include <ostream>
#include <string>
#include <vector>

namespace builder::pizza
{
    class Pizza
    {
        std::string name;

        std::vector<std::string> toppings;

    public:
        void addToppings(const std::vector<std::string>& newToppings);

        void prepare();

        void bake();

        void cut();

        void box();

        void setName(const std::string& newName);

        friend std::ostream& operator<<(std::ostream& os, const Pizza& pizza);
    };
}
