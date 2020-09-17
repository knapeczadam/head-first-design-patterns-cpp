#pragma once

namespace observer
{
    class IDisplayElement
    {
    public:
        virtual void display() const = 0;

        virtual ~IDisplayElement() = default;
    };
}
