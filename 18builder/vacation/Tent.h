#pragma once

#include "Accommodation.h"

namespace builder::vacation
{
    class Tent : public Accommodation
    {
        int siteNumber = 0;

    public:
        Tent();

        explicit Tent(const std::string& newName);

        void setSiteNumber(int n);

        int getSiteNumber() const;

        std::string getLocation() const override;
    };
}
