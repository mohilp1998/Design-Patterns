#include "include/duck.h"
#include <memory>

int main()
{
  // Testing the code
  Duck *d[4];

  d[0] = new MallardDuck;
  d[1] = new RedHeadDuck;
  d[2] = new RubberDuck;
  d[3] = new DecoyDuck;

  // Checking basics
  for (int i=0; i < 4; i++)
  {
    d[i]->display();
    d[i]->performFly();
    d[i]->performQuack();
    d[i]->swim();
    std::cout << "\n\n";
  }

  // Changing the behaviors
  d[0]->setFlyBehavior(new FlyRocket);
  d[1]->setQuackBehavior(new MuteQuack);
  d[2]->setQuackBehavior(new Quack);
  d[3]->setFlyBehavior(new FlyWings);
  d[3]->setQuackBehavior(new Squeak);

  // Check again
  for (int i=0; i < 4; i++)
  {
    d[i]->display();
    d[i]->performFly();
    d[i]->performQuack();
    d[i]->swim();
    std::cout << "\n\n";
  }

  return 0;
}