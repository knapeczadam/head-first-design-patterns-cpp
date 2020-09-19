#include "CeilingFanOnCommand.h"

#include <utility>

namespace command::remote
{
    CeilingFanOnCommand::CeilingFanOnCommand(std::shared_ptr<CeilingFan> newCeilingFan) : ceilingFan{std::move(newCeilingFan)}
    {

    }

    void CeilingFanOnCommand::execute()
    {
        ceilingFan->high();
    }
}
