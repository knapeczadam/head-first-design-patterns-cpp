#pragma once

#include <memory>
#include <string>

namespace builder::house
{
    class House;

    enum class HouseType
    {
        STONE,
        WOOD,
        GINGERBREAD
    };

    class HouseBuilder : public std::enable_shared_from_this<HouseBuilder>
    {
        HouseType houseType;

    protected:
        std::string builderName;

        std::shared_ptr<House> house = nullptr;

        virtual std::shared_ptr<HouseBuilder> getPtr();

    public:
        HouseBuilder();

        void setHouseType(HouseType newHouseType);

        virtual std::shared_ptr<HouseBuilder> addWalls() = 0;

        virtual std::shared_ptr<HouseBuilder> addRoof() = 0;

        virtual std::shared_ptr<HouseBuilder> addWindows() = 0;

        std::shared_ptr<House> build();

        virtual ~HouseBuilder() = 0;
    };
}
