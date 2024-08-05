#include "include/components.h"
#include <iostream>

void Light::turnOn()
{
  std::cout << "Lights turned on!!\n";
}

void Light::turnOff()
{
  std::cout << "Lights turned off!!\n";
}

void CeilingFan::off()
{
  std::cout << "Fan turned off!\n";
  currSpeed = OFF;
}

void CeilingFan::lowSpeed()
{
  std::cout << "Fan low speed!\n";
  currSpeed = LOW;
}

void CeilingFan::medSpeed()
{
  std::cout << "Fan med speed!\n";
  currSpeed = MEDIUM;
}

void CeilingFan::highSpeed()
{
  std::cout << "Fan high speed!\n";
  currSpeed = HIGH;
}

SPEED CeilingFan::getCurrentSpeed()
{
  return currSpeed;
}