#pragma once

#include "ISubject.h"

namespace observer
{
    class WeatherData : public ISubject
    {
        float temperature = 0.0f;

        float humidity = 0.0f;

        float pressure = 0.0f;

    public:
        WeatherData() = default;

        void measurementsChanged();

        void setMeasurements(float newTemperature, float newHumidity, float newPressure);

        float getTemperature() const;

        void setTemperature(float newTemperature);

        float getHumidity() const;

        void setHumidity(float newHumidity);

        float getPressure() const;

        void setPressure(float newPressure);
    };
}
