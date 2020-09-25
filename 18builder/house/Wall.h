#pragma once

#include <ostream>
#include <string>

namespace builder::house
{
    class Wall
    {
        std::string name;

        std::string material;

    public:
        explicit Wall(std::string newMaterial);

        virtual std::string getName() const;

        virtual void setName(const std::string& newName);

        friend std::ostream& operator<<(std::ostream& os, const Wall& wall);
    };
}
