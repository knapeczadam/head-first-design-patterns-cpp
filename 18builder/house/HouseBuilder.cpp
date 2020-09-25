#include "HouseBuilder.h"

#include "House.h"

#include <iostream>

namespace builder::house
{
    HouseBuilder::HouseBuilder()
    {
        house = std::make_shared<House>();
    }

    void HouseBuilder::setHouseType(HouseType newHouseType)
    {
        houseType = newHouseType;
        house->setHouseType(houseType);
    }

    std::shared_ptr<House> HouseBuilder::build()
    {
        std::cout << "Build the house!" << '\n';
        return house;
    }

    std::shared_ptr<HouseBuilder> HouseBuilder::getPtr()
    {
        return shared_from_this();
    }

    HouseBuilder::~HouseBuilder()
    {

    }
}
