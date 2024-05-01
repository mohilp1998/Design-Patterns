#include <memory>
#include "include/weatherdata.h"
#include "include/display.h"

int cnt = 0;
void testFun(WeatherData *ws, float t, float h, float p)
{
  cnt++;
  std::cout << cnt << "-ADDING NEW MEASUREMENTS\n";
  ws->setMeasurements(t, h, p);
  std::cout << "------------------------\n\n";
}

int main()
{
  WeatherData *ws = new WeatherData();
  testFun(ws, 75.0, 67.8, 27.8); // we should not get any prints

  CurrentConditionsDisplay *ccd = new CurrentConditionsDisplay(ws);
  testFun(ws, 65.2, 0.6, 5.6); //Only one display

  StatisticsDisplay *sd = new StatisticsDisplay(ws);
  testFun(ws, 35.2, 45.6, 79.4); //2 display

  ForecastDisplay *fd = new ForecastDisplay(ws);
  testFun(ws, 39.5, 78.5, 15.4); //3 display
  testFun(ws, 82.3, 46.3, 114); //3 display
  testFun(ws, 12.3, 78.5, 34.5); //3 display

  ws->removeObserver(ccd); //de-register the display
  testFun(ws, 12.3, 23.5, 45.6); //2 display

  delete sd; // should automatically remove itself also
  testFun(ws, 35.3, 53.5, 63.5); //1 display

  ws->registerObserver(ccd); //re-register the display
  testFun(ws, 11.1, 22.2, 33.3); //2 display

  return 0;
}