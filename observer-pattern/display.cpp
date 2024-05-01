#include "include/display.h"
#include <iostream>

CurrentConditionsDisplay::CurrentConditionsDisplay(Subject *wb)
{
  weatherData = wb;
  weatherData->registerObserver(this);
  temp = 0;
  humditiy = 0;
  pressure = 0;
}

CurrentConditionsDisplay::~CurrentConditionsDisplay()
{
  weatherData->removeObserver(this);
}

void CurrentConditionsDisplay::update()
{
  temp = weatherData->getTemp();
  humditiy = weatherData->getHumidity();
  pressure = weatherData->getPressure();
}

void CurrentConditionsDisplay::display()
{
  std::cout << "Temperature: " << temp << ", Humidity: " << humditiy
            << ", Pressure: " << pressure << "\n";
}

StatisticsDisplay::StatisticsDisplay(Subject *wb)
{
  weatherData = wb;
  weatherData->registerObserver(this);

  count = 0;
  avgTemp = 0;
  avgPressure = 0;
  avgHumidity = 0;
}

StatisticsDisplay::~StatisticsDisplay()
{
  weatherData->removeObserver(this);
}

void StatisticsDisplay::update()
{
  avgTemp = ((avgTemp*count) + weatherData->getTemp()) / (count + 1);
  avgHumidity = ((avgHumidity*count) + weatherData->getHumidity()) / (count + 1);
  avgPressure = ((avgPressure*count) + weatherData->getPressure()) / (count + 1);
  count++;
}

void StatisticsDisplay::display()
{
  std::cout << "Average Temperature: " << avgTemp
            << ", Average Humidity: " << avgHumidity
            << ", Average Pressure: " << avgPressure << "\n";
}

ForecastDisplay::ForecastDisplay(Subject *wb)
{
  weatherData = wb;
  weatherData->registerObserver(this);
}

ForecastDisplay::~ForecastDisplay()
{
  weatherData->removeObserver(this);
}

void ForecastDisplay::update()
{
  return;
}

void ForecastDisplay::display()
{
  std::cout << "Work for implementation in progress\n";
}