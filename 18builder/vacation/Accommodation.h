#pragma once

#include "Reservation.h"

#include <memory>
#include <ostream>
#include <string>

namespace builder::vacation
{
    class Accommodation
    {
        std::shared_ptr<Reservation> reservation = nullptr;

    protected:
        std::string name;

    public:
        void setReservation(const std::shared_ptr<Reservation>& r);

        std::shared_ptr<Reservation> getReservation() const;

        virtual std::string getLocation() const = 0;

        virtual ~Accommodation() = 0;

        friend std::ostream& operator<<(std::ostream& os, const Accommodation& accommodation);
    };
}
