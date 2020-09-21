#pragma once

#include "CaffeineBeverageWithHook.h"

namespace templatemethod::barista
{
    class CoffeeWithHook : public CaffeineBeverageWithHook
    {
        unsigned char getUserInput();

    public:
        void brew() override;

        void addCondiments() override;

        bool customerWantsCondiments() override;
    };
}
