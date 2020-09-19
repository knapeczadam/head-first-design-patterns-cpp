#pragma once

namespace adapter::ducks
{
    class IDuck
    {
    public:
        virtual ~IDuck() = default;

        virtual void quack() = 0;

        virtual void fly() = 0;
    };
}
