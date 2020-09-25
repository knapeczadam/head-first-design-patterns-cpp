#include "Accommodation.h"

namespace builder::vacation
{
    void Accommodation::setReservation(const std::shared_ptr<Reservation>& r)
    {
        reservation = r;
    }

    std::shared_ptr<Reservation> Accommodation::getReservation() const
    {
        return reservation;
    }

    Accommodation::~Accommodation()
    {

    }

    std::ostream& operator<<(std::ostream& os, const Accommodation& accommodation)
    {
        os << "You're staying at " << accommodation.name;
        if (accommodation.reservation)
        {
            const auto arrivalDate = accommodation.reservation->getArrivalDate();
            os << "\nYou have a reservation for arrival date: " << arrivalDate->tm_year << "-" << arrivalDate->tm_mon << "-" << arrivalDate->tm_mday;
            os << ", staying for " << accommodation.reservation->getNights() << " nights";
        }
        if (!accommodation.getLocation().empty())
        {
            os << " in " << accommodation.getLocation();
        }
        os << '\n';
        return os;
    }
}
