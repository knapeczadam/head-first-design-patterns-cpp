#pragma once

#include <ostream>
#include <string>

namespace builder::house
{
    class Roof
    {
        std::string name;

        std::string material;

    public:
        explicit Roof(std::string newMaterial);

        std::string getName() const;

        void setName(const std::string& newName);

        friend std::ostream& operator<<(std::ostream& os, const Roof& roof);
    };
}
