#include "Tent.h"

namespace builder::vacation
{
    Tent::Tent()
    {
        name = "Tent";
    }

    Tent::Tent(const std::string& newName)
    {
        name = newName;
    }

    void Tent::setSiteNumber(int n)
    {
        siteNumber = n;
    }

    int Tent::getSiteNumber() const
    {
        return siteNumber;
    }

    std::string Tent::getLocation() const
    {
        if (siteNumber)
        {
            return "Site number " + std::to_string(siteNumber);
        }
        return "";
    }
}
