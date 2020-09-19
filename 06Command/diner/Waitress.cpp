#include "Waitress.h"

namespace command::diner
{
    void Waitress::takeOrder(const std::shared_ptr<IOrder> newOrder)
    {
        order = newOrder;
        order->orderUp();
    }
}
