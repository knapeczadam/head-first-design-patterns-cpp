#pragma once

#include "IDisplayElement.h"
#include "IObserver.h"
#include "ISubject.h"
#include "WeatherData.h"

#include <memory>

namespace observer
{
    class StatisticsDisplay : public IObserver, public IDisplayElement
    {
        float maxTemp = 0.0f;

        float minTemp = 200.0f;

        float tempSum = 0.0f;

        unsigned int numReadings = 0;

        std::shared_ptr<ISubject> weatherData = nullptr;

    public:
        void display() const override;

        void update(ISubject* subject) override;

        explicit StatisticsDisplay(std::shared_ptr<ISubject> newWeatherData);

    };
}
