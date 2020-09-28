#include "Monster.h"

#include <utility>

namespace prototype
{
    Monster::~Monster()
    {

    }

    Monster::Monster(std::string newName) : name{std::move(newName)}
    {

    }

    void Monster::spitPoison()
    {

    }

    void Monster::setName(const std::string& newName)
    {
        name = newName;
    }

    std::ostream& operator<<(std::ostream& os, const Monster& monster)
    {
        os << "I'm a monster name " << monster.name << " with " << monster.numHeads << " head(s). ";
        if (monster.canBreatheFire)
        {
            os << "I can breathe fire. ";
        }
        if (monster.eatsChildren)
        {
            os << "I eat children. ";
        }
        if (monster.hasWings)
        {
            os << "I have wings. ";
        }
        return os;
    }
}
