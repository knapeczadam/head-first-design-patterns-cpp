#include "OutdoorsVacationBuilder.h"

#include "Tent.h"

namespace builder::vacation
{
    OutdoorsVacationBuilder::OutdoorsVacationBuilder()
    {
        name = "Outdoorsy Vacation Builder";
    }
    std::shared_ptr<VacationBuilder> OutdoorsVacationBuilder::addAccommodation()
    {
        accomodations.emplace_back(std::make_shared<Tent>());
        return getPtr();
    }

    std::shared_ptr<VacationBuilder> OutdoorsVacationBuilder::addAccommodation(std::string name)
    {
        accomodations.emplace_back(std::make_shared<Tent>(name));
        return getPtr();
    }

    std::shared_ptr<VacationBuilder>OutdoorsVacationBuilder::addAccommodation(std::string name, int year, int month, int day, int nights, int location)
    {
        std::shared_ptr<Reservation> reservation = std::make_shared<Reservation>();
        reservation->setArrivalDate(year, month, day);
        reservation->setNights(nights);

        std::shared_ptr<Tent> tent = std::make_shared<Tent>(name);
        tent->setReservation(reservation);
        tent->setSiteNumber(location);
        accomodations.emplace_back(tent);
        return getPtr();
    }

    std::shared_ptr<VacationBuilder> OutdoorsVacationBuilder::addEvent(std::string event)
    {
        events.emplace_back("Hike: " + event);
        return getPtr();
    }
}
