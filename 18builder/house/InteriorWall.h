#pragma once

#include "Wall.h"

#include <ostream>
#include <string>

namespace builder::house
{
    class InteriorWall : public Wall
    {
        std::string name;

        std::string material;

    public:
        explicit InteriorWall(std::string newMaterial);

        friend std::ostream& operator<<(std::ostream& os, const InteriorWall& interiorWall);
    };
}
