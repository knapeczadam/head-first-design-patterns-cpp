#pragma once

namespace templatemethod::barista
{
    class CaffeineBeverage
    {
    protected:
        virtual void brew() = 0;

        virtual void addCondiments() = 0;

        void boilWater();

        void pourInCup();

        virtual ~CaffeineBeverage() = 0;

    public:
        virtual void prepareRecipe() final;
    };
}
