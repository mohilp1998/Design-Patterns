#pragma once
#include "beverage.h"
#include <string>

// Decorator Class
class CondimentDecorator: public Beverage
{
  public:
    virtual ~CondimentDecorator() = default;

    Beverage *beverage;
    virtual std::string getDescription() = 0;
    Beverage::Size getSize();
};

// Decorators
class Milk: public CondimentDecorator
{
  public:
    Milk(Beverage *bz);
    ~Milk();

    float cost();
    std::string getDescription();
};

class Mocha: public CondimentDecorator
{
  public:
    Mocha(Beverage *bz);
    ~Mocha();

    float cost();
    std::string getDescription();
};

class Soy: public CondimentDecorator
{
  public:
    Soy(Beverage *bz);
    ~Soy();

    float cost();
    std::string getDescription();
};

class Whip: public CondimentDecorator
{
  public:
    Whip(Beverage *bz);
    ~Whip();

    float cost();
    std::string getDescription();
};