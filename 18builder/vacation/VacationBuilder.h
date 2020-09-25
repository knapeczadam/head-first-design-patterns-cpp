#pragma once

#include "Accommodation.h"
#include "Vacation.h"

#include <memory>
#include <string>
#include <vector>

namespace builder::vacation
{
    class VacationBuilder : public std::enable_shared_from_this<VacationBuilder>
    {
    protected:
        std::string name;

        std::vector<std::shared_ptr<Accommodation>> accomodations;

        std::vector<std::string> events;

    protected:
        virtual std::shared_ptr<VacationBuilder> getPtr();

    public:
        virtual std::shared_ptr<VacationBuilder> addAccommodation() = 0;

        virtual std::shared_ptr<VacationBuilder> addAccommodation(std::string name) = 0;

        virtual std::shared_ptr<VacationBuilder> addAccommodation(std::string name, int year, int month, int day, int nights, int location) = 0;

        virtual std::shared_ptr<VacationBuilder> addEvent(std::string event) = 0;

        std::shared_ptr<Vacation> getVacation();

        virtual ~VacationBuilder() = 0;
    };
}
