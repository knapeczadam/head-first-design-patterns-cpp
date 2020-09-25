#pragma once

#include "HouseBuilder.h"
#include "Roof.h"
#include "Wall.h"
#include "Window.h"

#include <memory>
#include <ostream>
#include <string>
#include <vector>

namespace builder::house
{
    class House : public std::enable_shared_from_this<House>
    {
        std::string name;

        HouseType houseType;

        std::shared_ptr<Roof> roof = nullptr;

        std::vector<std::shared_ptr<Wall>> walls;

        std::vector<std::shared_ptr<Window>> windows;

    private:
        std::shared_ptr<House> getPtr();

    public:
        House();

        std::shared_ptr<House> setHouseType(HouseType newHouseType);

        std::shared_ptr<House> addRoof(const std::shared_ptr<Roof>& newRoof);

        std::shared_ptr<House> addWall(const std::shared_ptr<Wall>& newWall);

        std::shared_ptr<House> addWindow(const std::shared_ptr<Window>& newWindow);

        void setName(const std::string& newName);

        friend std::ostream& operator<<(std::ostream& os, const House& house);
    };
}
