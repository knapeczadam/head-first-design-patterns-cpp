#include "Reservation.h"

namespace builder::vacation
{
    Reservation::Reservation()
    {
        std::time_t t = std::time(nullptr);
        arrivalDate = std::make_shared<std::tm>(*std::localtime(&t));
    }
    void Reservation::setArrivalDate(int year, int month, int day)
    {
        arrivalDate->tm_year = year;
        arrivalDate->tm_mon = month;
        arrivalDate->tm_mday = day;
    }

    std::shared_ptr<std::tm> Reservation::getArrivalDate() const
    {
        return arrivalDate;
    }

    void Reservation::setNights(int newNights)
    {
        nights = newNights;
    }

    int Reservation::getNights() const
    {
        return nights;
    }
}
