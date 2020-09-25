#pragma once

#include "HouseBuilder.h"
#include "Roof.h"
#include "Wall.h"
#include "Window.h"

#include <memory>
#include <string>

namespace builder::house
{
class GingerbreadHouseBuilder : public HouseBuilder
    {
        int numWalls = 4;

        int numWindows = 4;

        std::string windowMaterial = "Sugar";

        std::string wallMaterial = "Gingerbread";

        std::string roofMaterial = "Twizzlers";

    public:
        GingerbreadHouseBuilder();

        std::shared_ptr<HouseBuilder> addWalls() override;

        std::shared_ptr<HouseBuilder> addWindows() override;

        std::shared_ptr<HouseBuilder> addRoof() override;
    };
}
