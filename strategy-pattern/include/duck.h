#include "flyBehavior.h"
#include "quackBehavior.h"
#include <cstddef>
#include <iostream>
#include <memory>

// Base Duck Class
class Duck
{
  public:
    Duck() = default;
    ~Duck() = default;

    FlyBehavior *flyBehavior;
    QuackBehavior *quackBehavior;

    virtual void display() = 0;
    
    void swim();
    void performQuack();
    void performFly();
    void setFlyBehavior(FlyBehavior *fb);
    void setQuackBehavior(QuackBehavior *qb);
};

// Duck Classes implementation
class MallardDuck: public Duck
{
  public:
    ~MallardDuck() = default;

    MallardDuck();
    void display();
};


class RedHeadDuck: public Duck
{
  public:
    ~RedHeadDuck() = default;

    RedHeadDuck();
    void display();
};


class RubberDuck: public Duck
{
  public:
    ~RubberDuck() = default;

    RubberDuck();
    void display();
};


class DecoyDuck: public Duck
{
  public:
    ~DecoyDuck() = default;

    DecoyDuck();
    void display();
};