#include "CeilingFanLowCommand.h"

#include <utility>

namespace command::undo
{
    CeilingFanLowCommand::CeilingFanLowCommand(std::shared_ptr<CeilingFan> newCeilingFan) : ceilingFan{std::move(newCeilingFan)}
    {

    }

    void CeilingFanLowCommand::execute()
    {
        prevSpeed = ceilingFan->getSpeed();
        ceilingFan->low();
    }

    void CeilingFanLowCommand::undo()
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
