#include "MacroCommand.h"

#include <utility>

namespace command::party
{
    MacroCommand::MacroCommand(std::vector<std::shared_ptr<ICommand>> newCommands) : commands{std::move(newCommands)}
    {

    }

    void MacroCommand::execute()
    {
        for (const auto& command : commands)
        {
            command->execute();
        }
    }

    void MacroCommand::undo()
    {
        for (auto it = commands.rbegin(); it != commands.rend(); ++it)
        {
            it->get()->undo();
        }
    }
}
