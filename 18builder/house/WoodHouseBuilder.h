#pragma once

#include "HouseBuilder.h"
#include "Roof.h"
#include "Wall.h"
#include "Window.h"

#include <memory>
#include <string>

namespace builder::house
{
    class WoodHouseBuilder : public HouseBuilder
    {
        int numWalls = 6;

        int numWindows = 10;

        std::string windowMaterial = "Tempered glass";

        std::string wallMaterial = "Wood, 4x6";

        std::string interiorWallMaterial = "Wood, 2x4";

        std::string roofMaterial = "Metal";

    public:
        WoodHouseBuilder();

        std::shared_ptr<HouseBuilder> addWalls() override;

        std::shared_ptr<HouseBuilder> addWindows() override;

        std::shared_ptr<HouseBuilder> addRoof() override;
    };
}
