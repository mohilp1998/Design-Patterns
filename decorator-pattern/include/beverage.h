#pragma once
#include <string>

// Beverage Base Class
class Beverage
{
  public:
    virtual ~Beverage() = default;

    std::string description;
    
    enum Size {SMALL, MEDIUM, LARGE};
    Beverage::Size drinkSize;

    virtual std::string getDescription();
    virtual Beverage::Size getSize();
    virtual float cost() = 0;
};

// Different types of beverages
class HouseBlend: public Beverage
{
  public:
    HouseBlend(Size sz);
    ~HouseBlend() = default;

    float cost();
};

class DarkRoast: public Beverage
{
  public:
    DarkRoast(Size sz);
    ~DarkRoast() = default;

    float cost();
};

class Espresso: public Beverage
{
  public:
    Espresso(Size sz);
    ~Espresso() = default;

    float cost();
};

class Decaf: public Beverage
{
  public:
    Decaf(Size sz);
    ~Decaf() = default;

    float cost();
};