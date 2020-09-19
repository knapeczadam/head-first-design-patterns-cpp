#pragma once

namespace command::party
{
    class ICommand
    {
    public:
        virtual ~ICommand() = default;

        virtual void execute() = 0;

        virtual void undo() = 0;
    };
}
