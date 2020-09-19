#pragma once

namespace adapter::ducks
{
    class ITurkey
    {
    public:
        virtual ~ITurkey() = default;

        virtual void gobble() = 0;

        virtual void fly() = 0;
    };
}
