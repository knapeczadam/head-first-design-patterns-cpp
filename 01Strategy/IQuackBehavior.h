#pragma once

namespace strategy
{
    class IQuackBehavior
    {
    public:
        virtual void quack() = 0;

        virtual ~IQuackBehavior() = default;
    };
}
