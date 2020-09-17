#pragma once

#include "IDisplayElement.h"
#include "IObserver.h"
#include "ISubject.h"
#include "WeatherData.h"

#include <memory>

namespace observer
{
    class ForecastDisplay : public IObserver, public IDisplayElement
    {
        float currentPressure = 29.92f;

        float lastPressure = 0.0f;

        std::shared_ptr<ISubject> weatherData = nullptr;

    public:
        explicit ForecastDisplay(std::shared_ptr<ISubject> newWeatherData);

        void display() const override;

        void update(ISubject* subject) override;
    };
}
