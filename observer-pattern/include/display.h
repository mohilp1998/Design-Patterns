#pragma once
#include "weatherdata.h"
// Display Interface
class Display
{
  public:
    // Display() = default;
    virtual ~Display() = default;

    virtual void display() = 0;
};

// Display Elements
class CurrentConditionsDisplay: public Observer, public Display
{
  public:
    Subject *weatherData;
    float temp;
    float humditiy;
    float pressure;

    CurrentConditionsDisplay(Subject *wb);
    ~CurrentConditionsDisplay();

    void update();
    void display();
};

class StatisticsDisplay: public Observer, public Display
{
  public:
    Subject *weatherData;
    float avgTemp;
    float avgHumidity;
    float avgPressure;
    float count;

    StatisticsDisplay(Subject *wb);
    ~StatisticsDisplay();

    void update();
    void display();
};

class ForecastDisplay: public Observer, public Display
{
  public:
    Subject *weatherData;

    ForecastDisplay(Subject *wb);
    ~ForecastDisplay();

    void update();
    void display();
};