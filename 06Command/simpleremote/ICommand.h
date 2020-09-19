#pragma once

namespace command::simpleremote
{
    class ICommand
    {
    public:
        virtual ~ICommand() = default;

        virtual void execute() = 0;
    };
}
