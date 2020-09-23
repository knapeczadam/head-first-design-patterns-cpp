#pragma once

namespace combining::factory
{
    class IQuackable
    {
    public:
        virtual ~IQuackable() = default;

        virtual void quack() = 0;
    };
}
