#include "Vacation.h"

namespace builder::vacation
{
    void Vacation::setName(const std::string& newName)
    {
        name = newName;
    }

    void Vacation::setAccommodations(const std::vector<std::shared_ptr<Accommodation>>& newAccommodations)
    {
        accommodations = newAccommodations;
    }

    void Vacation::setEvents(const std::vector<std::string>& newEvents)
    {
        events = newEvents;
    }

    std::ostream& operator<<(std::ostream& os, const Vacation& vacation)
    {
        os << "---- " << vacation.name << " ----\n";
        for (const auto& accommodation : vacation.accommodations)
        {
            os << *accommodation;
        }
        for (const auto& event : vacation.events)
        {
            os << event << '\n';
        }
        return os;
    }
}
