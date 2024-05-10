#include "include/pizza.h"
#include <iostream>

void Pizza::prepare()
{
  std::cout << "\tPreparing the Pizza " << pizzaName << "\n";
}

void Pizza::bake()
{
  std::cout << "\tBake for 25 minutes at 350\n";
}

void Pizza::cut()
{
  std::cout << "\tCutting Pizza into diagonal slices\n";
}

void Pizza::box()
{
  std::cout << "\tPlace Pizza in pizza store box\n";
}

std::string Pizza::getName()
{
  return pizzaName;
}

NYCheesePizza::NYCheesePizza()
{
  pizzaName = "New York Cheese Pizza";
}

NYClamPizza::NYClamPizza()
{
  pizzaName = "New York Clam Pizza";
}

NYVeggiePizza::NYVeggiePizza()
{
  pizzaName = "New York Veggie Pizza";
}

ChicagoCheesePizza::ChicagoCheesePizza()
{
  pizzaName = "Chicago Cheese Pizza";
}

ChicagoClamPizza::ChicagoClamPizza()
{
  pizzaName = "Chicago Clam Pizza";
}

ChicagoVeggiePizza::ChicagoVeggiePizza()
{
  pizzaName = "Chicago Veggie Pizza";
}