#include "Wall.h"

#include <utility>

namespace builder::house
{
    Wall::Wall(std::string newMaterial) : name{"Wall made out of " + std::move(newMaterial)}
    {

    }

    std::string Wall::getName() const
    {
        return name;
    }

    void Wall::setName(const std::string& newName)
    {
        name = newName;
    }

    std::ostream& operator<<(std::ostream& os, const Wall& wall)
    {
        os << wall.name;
        return os;
    }
}
