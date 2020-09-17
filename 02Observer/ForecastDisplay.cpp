#include "ForecastDisplay.h"

#include <iostream>
#include <utility>

namespace observer
{
    void ForecastDisplay::display() const
    {
        std::cout << "Forecast: ";
        if (currentPressure > lastPressure)
        {
            std::cout << "Improving weather on the way!";
        }
        else if (currentPressure == lastPressure)
        {
            std::cout << "More of the same";
        }
        else if (currentPressure < lastPressure)
        {
            std::cout << "Watch out for cooler, rainy weather";
        }
        std::cout << '\n';
    }

    void ForecastDisplay::update(ISubject* subject)
    {
        WeatherData* currentSubject = dynamic_cast<WeatherData*>(subject);
        if (currentSubject)
        {
            lastPressure = currentPressure;
            currentPressure = currentSubject->getPressure();
            display();
        }
    }

    ForecastDisplay::ForecastDisplay(std::shared_ptr<ISubject> newWeatherData) : weatherData{std::move(newWeatherData)}
    {
        weatherData->registerObserver(this);
    }
}
