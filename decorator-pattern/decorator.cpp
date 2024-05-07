#include "include/decorator.h"
#include <cassert>
#include <iostream>
#include <memory>

// Use (void) to silence unused warnings.
#define assertm(exp, msg) assert(((void)msg, exp))

// Decorator's implementation of getSize
Beverage::Size CondimentDecorator::getSize()
{
  return beverage->getSize();
}


Milk::Milk(Beverage *bz)
{
  beverage = bz;
}
Milk::~Milk()
{
  delete beverage;
}

float Milk::cost()
{
  float ct = 0;
  switch(getSize())
  {
    case Beverage::SMALL:
      ct = 0.1;
      break;
    case Beverage::MEDIUM:
      ct = 0.2;
      break;
    case Beverage::LARGE:
      ct = 0.3;
      break;
    default:
      assert(false);
  }

  return beverage->cost() + ct;
}

std::string Milk::getDescription()
{
  return beverage->getDescription() + ", Milk";
}

Mocha::Mocha(Beverage *bz)
{
  beverage = bz;
}
Mocha::~Mocha()
{
  delete beverage;
}

float Mocha::cost()
{
  float ct = 0;
  switch(getSize())
  {
    case Beverage::SMALL:
      ct = 0.5;
      break;
    case Beverage::MEDIUM:
      ct = 0.7;
      break;
    case Beverage::LARGE:
      ct = 0.9;
      break;
    default:
      assert(false);
  }

  return beverage->cost() + ct;
}

std::string Mocha::getDescription()
{
  return beverage->getDescription() + ", Mocha";
}

Soy::Soy(Beverage *bz)
{
  beverage = bz;
}
Soy::~Soy()
{
  delete beverage;
}

float Soy::cost()
{
  float ct = 0;
  switch(getSize())
  {
    case Beverage::SMALL:
      ct = 0.2;
      break;
    case Beverage::MEDIUM:
      ct = 0.4;
      break;
    case Beverage::LARGE:
      ct = 0.5;
      break;
    default:
      assert(false);
  }

  return beverage->cost() + ct;
}

std::string Soy::getDescription()
{
  return beverage->getDescription() + ", Soy";
}

Whip::Whip(Beverage *bz)
{
  beverage = bz;
}
Whip::~Whip()
{
  delete beverage;
}

float Whip::cost()
{
  float ct = 0;
  switch(getSize())
  {
    case Beverage::SMALL:
      ct = 1.3;
      break;
    case Beverage::MEDIUM:
      ct = 1.7;
      break;
    case Beverage::LARGE:
      ct = 1.9;
      break;
    default:
      assert(false);
  }

  return beverage->cost() + ct;
}

std::string Whip::getDescription()
{
  return beverage->getDescription() + ", Whip";
}