#include "Drakon.h"

#include <iostream>
#include <utility>

namespace prototype
{
    Drakon::Drakon(std::string newName, int newNumHeads, bool newCanBreatheFire) : Monster(std::move(newName))
    {
        numHeads = newNumHeads;
        canBreatheFire = newCanBreatheFire;
    }

    void Drakon::spitPoison()
    {
        std::cout << name << " spits poison" << '\n';
    }

    std::unique_ptr<Monster> Drakon::clone()
    {
        return std::make_unique<Drakon>(name, numHeads, canBreatheFire);
    }
}
