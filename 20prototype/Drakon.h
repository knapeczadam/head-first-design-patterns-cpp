#pragma once

#include "Monster.h"

#include <string>

namespace prototype
{
    class Drakon : public Monster
    {
    public:
        Drakon(std::string newName, int newNumHeads, bool newCanBreatheFire);

        void spitPoison() override;

        std::unique_ptr<Monster> clone() override;
    };
}
