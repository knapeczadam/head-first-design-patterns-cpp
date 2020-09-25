#include "VacationBuilder.h"

namespace builder::vacation
{
    std::shared_ptr<VacationBuilder> VacationBuilder::getPtr()
    {
        return shared_from_this();
    }

    std::shared_ptr<Vacation> VacationBuilder::getVacation()
    {
        std::shared_ptr<Vacation> vacation = std::make_shared<Vacation>();
        vacation->setName(name);
        vacation->setAccommodations(accomodations);
        vacation->setEvents(events);
        return vacation;
    }

    VacationBuilder::~VacationBuilder()
    {
        
    }
}
