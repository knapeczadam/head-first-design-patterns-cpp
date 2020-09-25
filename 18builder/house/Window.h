#pragma once

#include <ostream>
#include <string>

namespace builder::house
{
    class Window
    {
        std::string name;

        std::string material;

    public:
        explicit Window(std::string newMaterial);

        std::string getName() const;

        void setName(const std::string& newName);

        friend std::ostream& operator<<(std::ostream& os, const Window& window);
    };
}
