#pragma once

#include <memory>
#include "Waitress.h"

namespace command::diner
{
    class Customer
    {
        std::shared_ptr<Waitress> waitress;

        std::shared_ptr<IOrder> order;

    public:
        explicit Customer(std::shared_ptr<Waitress> newWaitress);

        void createOrder(const std::shared_ptr<IOrder>& newOrder);

        void hungry();
    };
}
