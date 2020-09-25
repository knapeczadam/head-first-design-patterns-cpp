#include "Roof.h"

#include <utility>

namespace builder::house
{
    Roof::Roof(std::string newMaterial) : name{"Roof made out of " + std::move(newMaterial)}
    {

    }

    std::string Roof::getName() const
    {
        return name;
    }

    void Roof::setName(const std::string& newName)
    {
        name = newName;
    }

    std::ostream& operator<<(std::ostream& os, const Roof& roof)
    {
        os << roof.name;
        return os;
    }
}
