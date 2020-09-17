#include "StatisticsDisplay.h"

#include <iostream>
#include <utility>

namespace observer
{
    void StatisticsDisplay::display() const
    {
        std::cout << "Avg/Max/Min temperature = " << (tempSum / numReadings) << "/" << maxTemp << "/" << minTemp << '\n';
    }

    void StatisticsDisplay::update(ISubject* subject)
    {
        WeatherData* currentSubject = dynamic_cast<WeatherData*>(subject);
        if (currentSubject)
        {
            const float temperature = currentSubject->getTemperature();
            tempSum += temperature;
            ++numReadings;
            if (temperature > maxTemp)
            {
                maxTemp = temperature;
            }
            if (temperature < minTemp)
            {
                minTemp = temperature;
            }
            display();
        }
    }

    StatisticsDisplay::StatisticsDisplay(std::shared_ptr<ISubject> newWeatherData) : weatherData{std::move(newWeatherData)}
    {
        weatherData->registerObserver(this);
    }
}
