#include "Dragon.h"

namespace prototype
{
    Dragon::Dragon(std::string newName, bool newHasWings) : Monster(newName)
    {
        hasWings = newHasWings;
        canBreatheFire = true;
    }

    std::unique_ptr<Monster> Dragon::clone()
    {
        return std::make_unique<Dragon>(name, hasWings);
    }
}
