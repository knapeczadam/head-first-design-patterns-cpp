#pragma once

namespace templatemethod::barista
{
    class CaffeineBeverageWithHook
    {
    protected:
        virtual void brew() = 0;

        virtual void addCondiments() = 0;

        void boilWater();

        void pourInCup();

        virtual bool customerWantsCondiments();

        virtual ~CaffeineBeverageWithHook() = 0;

    public:
        virtual void prepareRecipe() final;
    };
}
