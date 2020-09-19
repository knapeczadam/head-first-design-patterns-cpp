#pragma once

namespace command::diner
{
    class IOrder
    {
    public:
        virtual ~IOrder() = default;

        virtual void orderUp() = 0;
    };
}
