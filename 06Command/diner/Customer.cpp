#include "Customer.h"

#include <utility>

namespace command::diner
{
    Customer::Customer(std::shared_ptr<Waitress> newWaitress) : waitress{std::move(newWaitress)}
    {

    }

    void Customer::createOrder(const std::shared_ptr<IOrder>& newOrder)
    {
        order = newOrder;
    }

    void Customer::hungry()
    {
        waitress->takeOrder(order);
    }
}
