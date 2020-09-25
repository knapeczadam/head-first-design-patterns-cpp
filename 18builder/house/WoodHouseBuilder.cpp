#include "WoodHouseBuilder.h"

#include "InteriorWall.h"
#include "House.h"

#include <iostream>

namespace builder::house
{
    WoodHouseBuilder::WoodHouseBuilder()
    {
        builderName = "Wood House Builder";
        setHouseType(HouseType::WOOD);
    }

    std::shared_ptr<HouseBuilder> WoodHouseBuilder::addWalls()
    {
        for (int i = 0; i < 4; ++i)
        {
            house->addWall(std::make_shared<Wall>(wallMaterial));
        }
        for (int i = 0; i < numWalls - 4; ++i)
        {
            house->addWall(std::make_shared<InteriorWall>(interiorWallMaterial));
        }
        return getPtr();
    }

    std::shared_ptr<HouseBuilder> WoodHouseBuilder::addWindows()
    {
        for (int i = 0; i < numWindows; ++i)
        {
            house->addWindow(std::make_shared<Window>(windowMaterial));
        }
        return getPtr();
    }

    std::shared_ptr<HouseBuilder> WoodHouseBuilder::addRoof()
    {
        house->addRoof(std::make_shared<Roof>(roofMaterial));
        return getPtr();
    }
}
