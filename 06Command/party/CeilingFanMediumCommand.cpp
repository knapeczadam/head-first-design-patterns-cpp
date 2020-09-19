#include "CeilingFanMediumCommand.h"

#include <utility>

namespace command::party
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
        switch (prevSpeed)
        {
            case CeilingFan::HIGH:
                ceilingFan->high();
                break;
            case CeilingFan::MEDIUM:
                ceilingFan->medium();
                break;
            case CeilingFan::LOW:
                ceilingFan->low();
                break;
            default:
                ceilingFan->off();
                break;
        }
    }
}
