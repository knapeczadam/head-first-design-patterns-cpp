#include "CurrentConditionDisplay.h"
#include "ForecastDisplay.h"
#include "StatisticsDisplay.h"
#include "WeatherData.h"

#include <memory>

using observer::WeatherData;
using observer::CurrentConditionDisplay;
using observer::ForecastDisplay;
using observer::StatisticsDisplay;

int main()
{
    std::shared_ptr<WeatherData> weatherData = std::make_shared<WeatherData>();

    std::shared_ptr<CurrentConditionDisplay> currentDisplay = std::make_shared<CurrentConditionDisplay>(weatherData);
    std::shared_ptr<ForecastDisplay> forecastDisplay = std::make_shared<ForecastDisplay>(weatherData);
    std::shared_ptr<StatisticsDisplay> statisticsDisplay = std::make_shared<StatisticsDisplay>(weatherData);

    weatherData->setMeasurements(80.0f, 65.0f, 30.4f);
    weatherData->setMeasurements(82.0f, 70.0f, 29.2f);
    weatherData->setMeasurements(78.0f, 90.0f, 29.2f);

    weatherData->removeObserver(currentDisplay.get());
    weatherData->setMeasurements(62.0f, 90.0f, 28.1f);
}
