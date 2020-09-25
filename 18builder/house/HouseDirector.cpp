#include "GingerbreadHouseBuilder.h"
#include "House.h"
#include "HouseBuilder.h"
#include "StoneHouseBuilder.h"
#include "WoodHouseBuilder.h"

#include <iostream>
#include <memory>

using builder::house::GingerbreadHouseBuilder;
using builder::house::House;
using builder::house::HouseBuilder;
using builder::house::StoneHouseBuilder;
using builder::house::WoodHouseBuilder;

int main()
{
    std::shared_ptr<HouseBuilder> woodHouseBuilder = std::make_shared<WoodHouseBuilder>();
    std::shared_ptr<House> woodHouse = woodHouseBuilder->addWalls()->addWindows()->addRoof()->build();
    std::cout << *woodHouse << '\n';

    std::shared_ptr<HouseBuilder> stoneHouseBuilder = std::make_shared<StoneHouseBuilder>();
    std::shared_ptr<House> stoneHouse = stoneHouseBuilder->addWalls()->addWindows()->addRoof()->build();
    std::cout << *stoneHouse << '\n';

    std::shared_ptr<HouseBuilder> gingerbreadHouseBuilder = std::make_shared<GingerbreadHouseBuilder>();
    std::shared_ptr<House> gingerbreadHouse = gingerbreadHouseBuilder->addWalls()->addWindows()->addRoof()->build();
    std::cout << *gingerbreadHouse;
}
