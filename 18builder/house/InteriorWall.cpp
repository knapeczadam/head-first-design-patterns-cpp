#include "InteriorWall.h"

#include <utility>

namespace builder::house
{
    InteriorWall::InteriorWall(std::string newMaterial) : Wall(newMaterial),
    name{"Interior wall made out of " + std::move(newMaterial)}
    {

    }

    std::ostream& operator<<(std::ostream& os, const InteriorWall& interiorWall)
    {
        os << interiorWall.name;
        return os;
    }
}
