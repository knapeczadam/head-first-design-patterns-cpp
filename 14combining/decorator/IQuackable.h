#pragma once

namespace combining::decorator
{
    class IQuackable
    {
    public:
        virtual ~IQuackable() = default;

        virtual void quack() = 0;
    };
}
