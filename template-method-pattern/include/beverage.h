#include <iostream>

class CaffeineBeverage
{
  public:
    // Default destructor
    virtual ~CaffeineBeverage() = default;

    void prepareReceipe();

    void boilWater();
    virtual void brew() = 0; // abstract function
    void pourInCup();
    virtual void addCondiments() = 0; // abstract function

    virtual bool customerWantsCondiments(); // hook
};

class Coffee: public CaffeineBeverage
{
  public:
    void brew();
    void addCondiments();
};

class Tea: public CaffeineBeverage
{
  public:
    void brew();
    void addCondiments();

    bool customerWantsCondiments();
};