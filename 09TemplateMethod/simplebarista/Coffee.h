#pragma once

namespace templatemethod::simplebarista
{
    class Coffee
    {
        void boilWater();

        void brewCoffeeGrinds();

        void pourInCup();

        void addSugarAndMilk();

    public:
        void prepareRecipe();
    };
}
