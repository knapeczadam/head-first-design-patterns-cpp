#include "CeilingFanMediumCommand.h"

#include <utility>

namespace command::undo
{
    CeilingFanMediumCommand::CeilingFanMediumCommand(std::shared_ptr<CeilingFan> newCeilingFan) : ceilingFan{std::move(newCeilingFan)}
    {

    }

    void CeilingFanMediumCommand::execute()
    {
        prevSpeed = ceilingFan->getSpeed();
        ceilingFan->medium();
    }

    void CeilingFanMediumCommand::undo()
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
