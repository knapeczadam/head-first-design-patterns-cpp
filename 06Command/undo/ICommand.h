#pragma once

namespace command::undo
{
    class ICommand
    {
    public:
        virtual ~ICommand() = default;

        virtual void execute() = 0;

        virtual void undo() = 0;
    };
}
