#include "Hotel.h"

namespace builder::vacation
{
    Hotel::Hotel()
    {
        name = "Hotel";
    }

    Hotel::Hotel(const std::string& newName)
    {
        name = newName;
    }

    void Hotel::setRoomNumber(int n)
    {
        roomNumber = n;
    }

    int Hotel::getRoomNumber() const
    {
        return roomNumber;
    }

    std::string Hotel::getLocation() const
    {
        if (roomNumber)
        {
            return "Room number " + std::to_string(roomNumber);
        }
        return "";
    }
}
