#include "House.h"

#include <iostream>

namespace builder::house
{
    House::House()
    {

    }

    std::shared_ptr<House> House::setHouseType(HouseType newHouseType)
    {
        houseType = newHouseType;
        switch (houseType)
        {
            case HouseType::STONE:
                name = "My stone house";
                break;
            case HouseType::WOOD:
                name = "My wood house";
                break;
            case HouseType::GINGERBREAD:
                name = "My holiday gingerbread house";
                break;
        }
        return getPtr();
    }

    std::shared_ptr<House> House::addRoof(const std::shared_ptr<Roof>& newRoof)
    {
        roof = newRoof;
        return getPtr();
    }

    std::shared_ptr<House> House::addWall(const std::shared_ptr<Wall>& newWall)
    {
        walls.emplace_back(newWall);
        return getPtr();
    }

    std::shared_ptr<House> House::addWindow(const std::shared_ptr<Window>& newWindow)
    {
        windows.emplace_back(newWindow);
        return getPtr();
    }

    void House::setName(const std::string& newName)
    {
        name = newName;
    }

    std::shared_ptr<House> House::getPtr()
    {
        return shared_from_this();
    }

    std::ostream& operator<<(std::ostream& os, const House& house)
    {
        os << "---- " << house.name << " ----\n";
        for (const auto& wall : house.walls)
        {
            os << "--- " << wall->getName() << " ---\n";
        }
        for (const auto& window : house.windows)
        {
            os << "--- " << window->getName() << " ---\n";
        }
        os << "--- " << house.roof->getName() << " ---\n";
        return os;
    }
}
