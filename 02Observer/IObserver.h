#pragma once

#include <memory>

namespace observer
{
    class ISubject;

    class IObserver
    {
    public:
        virtual void update(ISubject* subject) = 0;

        virtual ~IObserver() = default;
    };
}
