#include "duck.cpp"
#include <memory>

int main()
{
  // Testing the code
  Duck *d[4];

  d[0] = new MallardDuck;
  d[1] = new RedHeadDuck;
  d[2] = new RubberDuck;
  d[3] = new DecoyDuck;

  for (int i=0; i < 4; i++)
  {
    //Basics
    d[i]->display();
    d[i]->performFly();
    d[i]->performQuack();
    d[i]->swim();
    std::cout << "\n\n";
  }

  return 0;
}