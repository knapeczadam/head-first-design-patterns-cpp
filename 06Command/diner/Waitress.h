#pragma once

#include <memory>
#include "IOrder.h"

namespace command::diner
{
    class Waitress
    {
        std::shared_ptr<IOrder> order = nullptr;

    public:
        void takeOrder(const std::shared_ptr<IOrder> newOrder);
    };
}
