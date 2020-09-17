#include "CurrentConditionDisplay.h"

#include "WeatherData.h"

#include <iostream>

namespace observer
{
    void CurrentConditionDisplay::display() const
    {
        std::cout << "Current conditions: " << temperature << "F degrees and " << humidity << "% humidity" << '\n';
    }

    void CurrentConditionDisplay::update(ISubject* subject)
    {
        WeatherData* currentSubject = dynamic_cast<WeatherData*>(subject);
        if (currentSubject)
        {
            temperature = currentSubject->getTemperature();
            humidity = currentSubject->getHumidity();
            display();
        }
    }

    CurrentConditionDisplay::CurrentConditionDisplay(std::shared_ptr<ISubject> newWeatherData) : weatherData{std::move(newWeatherData)}
    {
        weatherData->registerObserver(this);
    }
}
