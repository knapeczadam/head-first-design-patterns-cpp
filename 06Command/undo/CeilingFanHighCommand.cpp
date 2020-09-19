#include "CeilingFanHighCommand.h"

#include <utility>

namespace command::undo
{
    CeilingFanHighCommand::CeilingFanHighCommand(std::shared_ptr<CeilingFan> newCeilingFan) : ceilingFan{std::move(newCeilingFan)}
    {

    }

    void CeilingFanHighCommand::execute()
    {
        prevSpeed = ceilingFan->getSpeed();
        ceilingFan->high();
    }

    void CeilingFanHighCommand::undo()
    {
        if (prevSpeed == CeilingFan::HIGH)
        {
            ceilingFan->high();
        }
        else if (prevSpeed == CeilingFan::MEDIUM)
        {
            ceilingFan->medium();
        }
        else if (prevSpeed == CeilingFan::LOW)
        {
            ceilingFan->low();
        }
        else if (prevSpeed == CeilingFan::OFF)
        {
            ceilingFan->off();
        }
    }
}
