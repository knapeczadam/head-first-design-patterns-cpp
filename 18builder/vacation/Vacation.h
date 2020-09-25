#pragma once

#include "Accommodation.h"

#include <memory>
#include <ostream>
#include <string>
#include <vector>

namespace builder::vacation
{
    class Vacation
    {
        std::string name;

        std::vector<std::shared_ptr<Accommodation>> accommodations;

        std::vector<std::string> events;

    public:
        void setName(const std::string& newName);

        void setAccommodations(const std::vector<std::shared_ptr<Accommodation>>& newAccommodations);

        void setEvents(const std::vector<std::string>& newEvents);

        friend std::ostream& operator<<(std::ostream& os, const Vacation& vacation);
    };
}
