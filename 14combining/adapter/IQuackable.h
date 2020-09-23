#pragma once

namespace combining::adapter
{
    class IQuackable
    {
    public:
        virtual ~IQuackable() = default;

        virtual void quack() = 0;
    };
}
