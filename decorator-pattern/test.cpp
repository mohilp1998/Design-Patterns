#include "include/beverage.h"
#include "include/decorator.h"
#include <memory>
#include <iostream>
#include <vector>

void printOrder(Beverage *bz)
{
  std::cout << "Order: " << bz->getDescription() << ". Cost: "
            << bz->cost() << "\n";
}

int main()
{
  std::vector<Beverage*> bzptrs;

  // House Blend, Milk - small
  bzptrs.push_back(new Milk(new HouseBlend(Beverage::SMALL)));
  
  // Dark Roast, Double Mocha, Soy - medium
  bzptrs.push_back(new Mocha(new Mocha(new Soy(new DarkRoast(Beverage::MEDIUM)))));

  // Decaf, Mocha, Whip, Milk - Large
  bzptrs.push_back(new Mocha(new Whip(new Milk(new Decaf(Beverage::LARGE)))));

  // Espresso, Mocha - Large
  bzptrs.push_back(new Mocha(new Espresso(Beverage::LARGE)));

  for (int i=0; i< bzptrs.size(); i++)
  {
    printOrder(bzptrs[i]);
    delete bzptrs[i];
  }
  bzptrs.erase(bzptrs.begin(), bzptrs.end());

  return 0;
}