#pragma once

#include "Cook.h"
#include "IOrder.h"

#include <memory>

namespace command::diner
{
    class BurgerAndFriesOrder : public IOrder
    {
        std::shared_ptr<Cook> cook = nullptr;

    public:
        explicit BurgerAndFriesOrder(std::shared_ptr<Cook> newCook);

        void orderUp() override;
    };
}
