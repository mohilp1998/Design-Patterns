#include "include/beverage.h"

void CaffeineBeverage::prepareReceipe()
{
  boilWater();
  brew();
  pourInCup();
  if (customerWantsCondiments())
    addCondiments();
}

void CaffeineBeverage::boilWater()
{
  std::cout << "Boiling Water\n";
}

void CaffeineBeverage::pourInCup()
{
  std::cout << "Pouring in a cup without making mess\n";
}

bool CaffeineBeverage::customerWantsCondiments()
{
  return true; //default behavior is true
}

void Coffee::brew()
{
  std::cout << "Brewing the coffee from Brazil\n";
};

void Coffee::addCondiments()
{
  std::cout << "Adding 2% milk and foam\n";
}

void Tea::brew()
{
  std::cout << "Assamese tea is used for brewing\n";
};

void Tea::addCondiments()
{
  std::cout << "There are no condiments in tea\n";
}

bool Tea::customerWantsCondiments()
{
  // No condiments in tea
  return false;
}


int main()
{
  Coffee coffee;
  Tea tea;

  // Testing
  coffee.prepareReceipe();
  std::cout << "\nCoffee Ready to serve\n\n";

  tea.prepareReceipe();
  std::cout << "\nTea Ready to serve\n\n";
  return 0;
}