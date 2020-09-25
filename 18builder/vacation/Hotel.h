#pragma once

#include "Accommodation.h"

namespace builder::vacation
{
    class Hotel : public Accommodation
    {
        int roomNumber = 0;

    public:
        Hotel();

        explicit Hotel(const std::string& newName);

        void setRoomNumber(int n);

        int getRoomNumber() const;

        std::string getLocation() const override;
    };
}
