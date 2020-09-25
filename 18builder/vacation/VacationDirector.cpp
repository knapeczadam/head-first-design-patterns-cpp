#include "CityVacationBuilder.h"
#include "OutdoorsVacationBuilder.h"
#include "Vacation.h"
#include "VacationBuilder.h"

#include <iostream>
#include <memory>

using builder::vacation::CityVacationBuilder;
using builder::vacation::OutdoorsVacationBuilder;
using builder::vacation::Vacation;
using builder::vacation::VacationBuilder;

int main()
{
    std::shared_ptr<VacationBuilder> outdoorsyVacationBuilder = std::make_shared<OutdoorsVacationBuilder>();
    std::shared_ptr<Vacation> outdoorsyVacation = outdoorsyVacationBuilder
            ->addAccommodation("Two person tent", 2020, 7, 1, 5, 34)
            ->addEvent("Beach")
            ->addAccommodation("Two person tent")
            ->addEvent("Mountains")
            ->getVacation();
    std::cout << *outdoorsyVacation << '\n';

    std::shared_ptr<VacationBuilder> cityVacationBuilder = std::make_shared<CityVacationBuilder>();
    std::shared_ptr<Vacation> cityVacation = cityVacationBuilder
            ->addAccommodation("Grand Facadian", 2020, 8, 1, 5, 0)
            ->addAccommodation("Hotel Commander", 2020, 8, 6, 2, 0)
            ->addEvent("Cirque du Soleil")
            ->getVacation();
    std::cout << *cityVacation;
}
