#pragma once

#include "HouseBuilder.h"
#include "Roof.h"
#include "Wall.h"
#include "Window.h"

#include <memory>
#include <string>

namespace builder::house
{
    class StoneHouseBuilder : public HouseBuilder
    {
        int numWalls = 5;

        int numWindows = 20;

        std::string windowMaterial = "Antique glass";

        std::string wallMaterial = "Stone, 2 feet thick";

        std::string interiorWallMaterial = "Stone, 1 foot thick";

        std::string roofMaterial = "Tile";

    public:
        StoneHouseBuilder();

        std::shared_ptr<HouseBuilder> addWalls() override;

        std::shared_ptr<HouseBuilder> addWindows() override;

        std::shared_ptr<HouseBuilder> addRoof() override;
    };
}
