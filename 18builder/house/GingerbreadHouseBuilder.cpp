#include "GingerbreadHouseBuilder.h"

#include "House.h"

namespace builder::house
{
    GingerbreadHouseBuilder::GingerbreadHouseBuilder()
    {
        builderName = "Gingerbread House Builder";
        setHouseType(HouseType::GINGERBREAD);
    }

    std::shared_ptr<HouseBuilder> GingerbreadHouseBuilder::addWalls()
    {
        for (int i = 0; i < numWalls; ++i)
        {
            house->addWall(std::make_shared<Wall>(wallMaterial));
        }
        return getPtr();
    }

    std::shared_ptr<HouseBuilder> GingerbreadHouseBuilder::addWindows()
    {
        for (int i = 0; i < numWindows; ++i)
        {
            house->addWindow(std::make_shared<Window>(windowMaterial));
        }
        return getPtr();
    }

    std::shared_ptr<HouseBuilder> GingerbreadHouseBuilder::addRoof()
    {
        house->addRoof(std::make_shared<Roof>(roofMaterial));
        return getPtr();
    }
}
