#include "include/duck.h"

// Base Duck Class Functions
void Duck::swim()
{
  std::cout << "swimming..";
}

void Duck::performQuack()
{
  quackBehavior->quack();
}

void Duck::performFly()
{
  flyBehavior->fly();
}

void Duck::setFlyBehavior(FlyBehavior *fb)
{
  // Assumed fb dynamically allocated. Deleting old object.
  delete flyBehavior;

  flyBehavior = fb;
}

void Duck::setQuackBehavior(QuackBehavior *qb)
{
  // Assumed qb dynamically allocated. Deleting old object.
  delete quackBehavior;

  quackBehavior = qb;
}


// Duck Classes implementation
MallardDuck::MallardDuck()
{
  flyBehavior = new FlyWings;
  quackBehavior = new Quack;
}

void MallardDuck::display()
{
  std::cout << "Mallard Duck\n";
}

//---//
RedHeadDuck::RedHeadDuck()
{
  flyBehavior = new FlyWings;
  quackBehavior = new Quack;
}

void RedHeadDuck::display()
{
  std::cout << "Red Head Duck\n";
}

//---//
RubberDuck::RubberDuck()
{
  flyBehavior = new FlyNoWings;
  quackBehavior = new Squeak;
}

void RubberDuck::display()
{
  std::cout << "Rubber Duck\n";
}

//---//
DecoyDuck::DecoyDuck()
{
  flyBehavior = new FlyRocket;
  quackBehavior = new MuteQuack;
}

void DecoyDuck::display()
{
  std::cout << "Decoy Duck\n";
}