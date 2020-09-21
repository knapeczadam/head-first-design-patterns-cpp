#include "Duck.h"

#include <iostream>
#include <utility>

namespace templatemethod::sort
{
    Duck::Duck(std::string newName, int newWeight) : name{std::move(newName)}, weight{newWeight}
    {

    }

    std::ostream& operator<<(std::ostream& os, const Duck& duck)
    {
        os << duck.name << " weighs " << duck.weight;
        return os;
    }

    bool operator<(const Duck& lhs, const Duck& rhs)
    {
        return lhs.weight < rhs.weight;
    }

    bool operator<(const std::shared_ptr<Duck>& lhs, const std::shared_ptr<Duck>& rhs)
    {
        return *lhs < *rhs;
    }
}
