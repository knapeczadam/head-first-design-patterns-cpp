#pragma once

#include <memory>
#include <ostream>
#include <string>

namespace templatemethod::sort
{
    class Duck
    {
        std::string name;

        int weight = 0;

    public:
        Duck(std::string newName, int newWeight);

        friend std::ostream& operator<<(std::ostream& os, const Duck& duck);

        friend bool operator<(const Duck& lhs, const Duck& rhs);

        friend bool operator<(const std::shared_ptr<Duck>& lhs, const std::shared_ptr<Duck>& rhs);
    };
}
