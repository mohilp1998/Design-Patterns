#pragma once
#include <vector>
#include <iostream>

// Observer Interface
class Observer
{
  public:
    // Observer() = default;
    virtual ~Observer() = default;

    virtual void update() = 0;
};

// Subject Interface
class Subject
{
  public:
    // Subject() = default;
    virtual ~Subject() = default;

    virtual void registerObserver(Observer *o) = 0;
    virtual void removeObserver(Observer *o) = 0;
    virtual void notifyObserver() = 0;

    virtual float getTemp() = 0;
    virtual float getHumidity() = 0;
    virtual float getPressure() = 0;
};

//WeatherData Class
class WeatherData: public Subject
{
  public:
    std::vector<Observer *> obs;
    float temp;
    float humditiy;
    float pressure;

    WeatherData() = default;
    ~WeatherData() = default;

    void registerObserver(Observer *o);
    void removeObserver(Observer *o);
    void notifyObserver();


    float getTemp();
    float getHumidity();
    float getPressure();
    void measurementsChanged();
    void setMeasurements(float t, float h, float p);
};