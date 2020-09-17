#include "WeatherData.h"

namespace observer
{
    float WeatherData::getTemperature() const
    {
        return temperature;
    }

    void WeatherData::setTemperature(float newTemperature)
    {
        temperature = newTemperature;
    }

    float WeatherData::getHumidity() const
    {
        return humidity;
    }

    void WeatherData::setHumidity(float newHumidity)
    {
        humidity = newHumidity;
    }

    float WeatherData::getPressure() const
    {
        return pressure;
    }

    void WeatherData::setPressure(float newPressure)
    {
        pressure = newPressure;
    }

    void WeatherData::setMeasurements(float newTemperature, float newHumidity, float newPressure)
    {
        temperature = newTemperature;
        humidity = newHumidity;
        pressure = newPressure;
        measurementsChanged();
    }

    void WeatherData::measurementsChanged()
    {
        setChanged();
        notifyObservers();
    }
}
