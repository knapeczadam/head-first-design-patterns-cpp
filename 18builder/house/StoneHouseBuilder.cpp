#include "StoneHouseBuilder.h"

#include "InteriorWall.h"
#include "House.h"

namespace builder::house
{
    StoneHouseBuilder::StoneHouseBuilder()
    {
        builderName = "Stone House Builder";
        setHouseType(HouseType::STONE);
    }

    std::shared_ptr<HouseBuilder> StoneHouseBuilder::addWalls()
    {
        for (int i = 0; i < numWalls - 1; ++i)
        {
            house->addWall(std::make_shared<Wall>(wallMaterial));
        }
        house->addWall(std::make_shared<InteriorWall>(interiorWallMaterial));
        return getPtr();
    }

    std::shared_ptr<HouseBuilder> StoneHouseBuilder::addWindows()
    {
        for (int i = 0; i < numWindows; ++i)
        {
            house->addWindow(std::make_shared<Window>(windowMaterial));
        }
        return getPtr();
    }

    std::shared_ptr<HouseBuilder> StoneHouseBuilder::addRoof()
    {
        house->addRoof(std::make_shared<Roof>(roofMaterial));
        return getPtr();
    }
}
