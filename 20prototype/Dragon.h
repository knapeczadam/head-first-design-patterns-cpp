#pragma once

#include "Monster.h"

#include <string>

namespace prototype
{
    class Dragon : public Monster
    {
    public:
        Dragon(std::string newName, bool newHasWings);

        std::unique_ptr<Monster> clone() override;
    };
}
