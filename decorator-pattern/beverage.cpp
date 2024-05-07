#include "include/beverage.h"
#include <cassert>

// Use (void) to silence unused warnings.
#define assertm(exp, msg) assert(((void)msg, exp))

std::string Beverage::getDescription()
{
  return description;
}

Beverage::Size Beverage::getSize()
{
  return drinkSize;
}

HouseBlend::HouseBlend(Beverage::Size sz)
{
  description = "House Blend";
  drinkSize = sz;
}

float HouseBlend::cost()
{
  switch(getSize())
  {
    case Beverage::SMALL:
      return 0.5;
    case Beverage::MEDIUM:
      return 1.5;
    case Beverage::LARGE:
      return 2.5;
    default:
      assert(false);
  }

  return -1;
}

DarkRoast::DarkRoast(Size sz)
{
  description = "Dark Roast";
  drinkSize = sz;
}

float DarkRoast::cost()
{
  switch(getSize())
  {
    case Beverage::SMALL:
      return 1.3;
    case Beverage::MEDIUM:
      return 2.3;
    case Beverage::LARGE:
      return 3.3;
    default:
      assert(false);
  }

  return -1;
}

Espresso::Espresso(Size sz)
{
  description = "Espresso";
  drinkSize = sz;
}

float Espresso::cost()
{
  switch(getSize())
  {
    case Beverage::SMALL:
      return 1.7;
    case Beverage::MEDIUM:
      return 2.7;
    case Beverage::LARGE:
      return 3.7;
    default:
      assert(false);
  }

  return -1;
}

Decaf::Decaf(Size sz)
{
  description = "Decaf";
  drinkSize = sz;
}

float Decaf::cost()
{
  switch(getSize())
  {
    case Beverage::SMALL:
      return 0.8;
    case Beverage::MEDIUM:
      return 1.8;
    case Beverage::LARGE:
      return 2.8;
    default:
      assert(false);
  }

  return -1;
}

