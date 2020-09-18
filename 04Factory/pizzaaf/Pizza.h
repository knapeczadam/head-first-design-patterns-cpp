#pragma once

#include "ICheese.h"
#include "IClams.h"
#include "IDough.h"
#include "IPepperoni.h"
#include "ISauce.h"
#include "IVeggies.h"

#include <memory>
#include <list>
#include <ostream>
#include <string>

namespace factory::pizzaaf
{
    class Pizza
    {
    protected:
        std::string name;

        std::shared_ptr<IDough> dough = nullptr;

        std::shared_ptr<ISauce> sauce = nullptr;

        std::shared_ptr<ICheese> cheese = nullptr;

        std::list<std::shared_ptr<IVeggies>> veggies;

        std::shared_ptr<IPepperoni> pepperoni = nullptr;

        std::shared_ptr<IClams> clam = nullptr;

    public:
        virtual void prepare() = 0;

        virtual ~Pizza() = 0;

        void bake() const;

        void cut() const;

        void box() const;

        void setName(const std::string& newName);

        friend std::ostream& operator<<(std::ostream& os, const Pizza& pizza);

        std::string getName() const;
    };
}
