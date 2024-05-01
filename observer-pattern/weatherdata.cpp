#include "include/weatherdata.h"

void WeatherData::registerObserver(Observer *o)
{
  obs.push_back(o);
}

void WeatherData::removeObserver(Observer *o)
{
  auto it = find(obs.begin(), obs.end(), o);
  if (it != obs.end())
  {
    obs.erase(it);
  }
}

void WeatherData::notifyObserver()
{
  for(auto it = obs.begin(); it != obs.end(); it++)
  {
    (*it)->update();
  }
}

float WeatherData::getTemp()
{
  return temp;
}

float WeatherData::getHumidity()
{
  return humditiy;
}

float WeatherData::getPressure()
{
  return pressure;
}

void WeatherData::measurementsChanged()
{
  notifyObserver();
}

void WeatherData::setMeasurements(float t, float h, float p)
{
  temp = t;
  humditiy = h;
  pressure = p;

  measurementsChanged();
}