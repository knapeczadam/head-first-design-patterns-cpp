#include "CityVacationBuilder.h"

#include "Hotel.h"

namespace builder::vacation
{
    CityVacationBuilder::CityVacationBuilder()
    {
        name = "City Vacation Builder";
    }
    std::shared_ptr<VacationBuilder> CityVacationBuilder::addAccommodation()
    {
        accomodations.emplace_back(std::make_shared<Hotel>());
        return getPtr();
    }

    std::shared_ptr<VacationBuilder> CityVacationBuilder::addAccommodation(std::string name)
    {
        accomodations.emplace_back(std::make_shared<Hotel>(name));
        return getPtr();
    }

    std::shared_ptr<VacationBuilder>CityVacationBuilder::addAccommodation(std::string name, int year, int month, int day, int nights, int location)
    {
        std::shared_ptr<Reservation> reservation = std::make_shared<Reservation>();
        reservation->setArrivalDate(year, month, day);
        reservation->setNights(nights);

        std::shared_ptr<Hotel> hotel = std::make_shared<Hotel>(name);
        hotel->setReservation(reservation);
        hotel->setRoomNumber(location);
        accomodations.emplace_back(hotel);
        return getPtr();
    }

    std::shared_ptr<VacationBuilder> CityVacationBuilder::addEvent(std::string event)
    {
        events.emplace_back("See the " + event + " show");
        return getPtr();
    }
}
