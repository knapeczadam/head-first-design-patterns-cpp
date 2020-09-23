#pragma once

namespace combining::ducks
{
    class IQuackable
    {
    public:
        virtual ~IQuackable() = default;

        virtual void quack() = 0;
    };
}
