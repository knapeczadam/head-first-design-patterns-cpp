#pragma once

#include <ctime>
#include <memory>

namespace builder::vacation
{
    class Reservation
    {
        std::shared_ptr<std::tm> arrivalDate = nullptr;

        int nights = 0;

    public:
        Reservation();

        void setArrivalDate(int year, int month, int day);

        std::shared_ptr<std::tm> getArrivalDate() const;

        void setNights(int newNights);

        int getNights() const;
    };
}
