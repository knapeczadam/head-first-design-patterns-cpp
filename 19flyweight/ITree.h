#pragma once

namespace flyweight
{
    class ITree
    {
    public:
        virtual ~ITree() = default;

        virtual void display(int x, int y) = 0;

        virtual bool isWithinRage(int month);
    };
}
