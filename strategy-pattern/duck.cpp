#include "flyBehavior.cpp"
#include "quackBehavior.cpp"
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
    
    void swim()
    {
      std::cout << "swimming..";
    }

    void performQuack()
    {
      quackBehavior->quack();
    }

    void performFly()
    {
      flyBehavior->fly();
    }

    void setFlyBehavior(FlyBehavior *fb)
    {
      // Assumed fb dynamically allocated. Deleting old object.
      delete flyBehavior;

      flyBehavior = fb;
    }

    void setQuackBehavior(QuackBehavior *qb)
    {
      // Assumed qb dynamically allocated. Deleting old object.
      delete quackBehavior;

      quackBehavior = qb;
    }
};


// Duck Classes implementation
class MallardDuck: public Duck
{
  public:
    ~MallardDuck() = default;

    MallardDuck()
    {
      flyBehavior = new FlyWings;
      quackBehavior = new Quack;
    }

    void display()
    {
      std::cout << "Mallard Duck\n";
    }
};


class RedHeadDuck: public Duck
{
  public:
    ~RedHeadDuck() = default;

    RedHeadDuck()
    {
      flyBehavior = new FlyWings;
      quackBehavior = new Quack;
    }

    void display()
    {
      std::cout << "Red Head Duck\n";
    }
};


class RubberDuck: public Duck
{
  public:
    ~RubberDuck() = default;

    RubberDuck()
    {
      flyBehavior = new FlyNoWings;
      quackBehavior = new Squeak;
    }

    void display()
    {
      std::cout << "Rubber Duck\n";
    }
};


class DecoyDuck: public Duck
{
  public:
    ~DecoyDuck() = default;

    DecoyDuck()
    {
      flyBehavior = new FlyRocket;
      quackBehavior = new MuteQuack;
    }

    void display()
    {
      std::cout << "Decoy Duck\n";
    }
};