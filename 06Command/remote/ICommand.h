#pragma once

namespace command::remote
{
    class ICommand
    {
    public:
        virtual ~ICommand() = default;

        virtual void execute() = 0;
    };
}
