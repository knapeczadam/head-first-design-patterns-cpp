#pragma once

#include "VacationBuilder.h"

#include <memory>

namespace builder::vacation
{
    class OutdoorsVacationBuilder : public VacationBuilder
    {
    public:
        OutdoorsVacationBuilder();

        std::shared_ptr<VacationBuilder> addAccommodation() override;

        std::shared_ptr<VacationBuilder> addAccommodation(std::string name) override;

        std::shared_ptr<VacationBuilder>addAccommodation(std::string name, int year, int month, int day, int nights, int location) override;

        std::shared_ptr<VacationBuilder> addEvent(std::string event) override;
    };
}
