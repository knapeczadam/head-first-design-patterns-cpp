#include "Window.h"

#include <utility>

namespace builder::house
{
    Window::Window(std::string newMaterial) : name{"Window made out of " + std::move(newMaterial)}
    {

    }

    std::string Window::getName() const
    {
        return name;
    }

    void Window::setName(const std::string& newName)
    {
        name = newName;
    }

    std::ostream& operator<<(std::ostream& os, const Window& window)
    {
        os << window.name;
        return os;
    }
}
