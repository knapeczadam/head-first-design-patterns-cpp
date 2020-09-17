#pragma once

namespace strategy
{
    class IFlyBehavior
    {
    public:
        virtual void fly() = 0;

        virtual ~IFlyBehavior() = default;
    };
}
