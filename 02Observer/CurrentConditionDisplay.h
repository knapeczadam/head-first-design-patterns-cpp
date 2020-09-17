#pragma once

#include "IDisplayElement.h"
#include "IObserver.h"
#include "ISubject.h"

#include <memory>

namespace observer
{
    class CurrentConditionDisplay : public IObserver, public IDisplayElement
    {
        float temperature = 0.0f;

        float humidity = 0.0f;

        std::shared_ptr<ISubject> weatherData = nullptr;

    public:
        explicit CurrentConditionDisplay(std::shared_ptr<ISubject> newWeatherData);

        void display() const override;

        void update(ISubject* subject) override;
    };
}
