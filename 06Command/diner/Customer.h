#pragma once

#include <memory>
#include "Waitress.h"

namespace command::diner
{
    class Customer
    {
        std::shared_ptr<Waitress> waitress = nullptr;

        std::shared_ptr<IOrder> order = nullptr;

    public:
        explicit Customer(std::shared_ptr<Waitress> newWaitress);

        void createOrder(const std::shared_ptr<IOrder>& newOrder);

        void hungry();
    };
}
