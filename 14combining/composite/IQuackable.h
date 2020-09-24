#pragma once

namespace combining::composite
{
    class IQuackable
    {
    public:
        virtual ~IQuackable() = default;

        virtual void quack() = 0;
    };
}
