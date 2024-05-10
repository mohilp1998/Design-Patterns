#include "include/pizza.h"
#include <iostream>

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
  std::cout << "\tPlace Pizza in pizza store box\n\n";
}

std::string Pizza::getName()
{
  return pizzaName;
}

NYCheesePizza::NYCheesePizza()
{
  pizzaName = "New York Cheese Pizza";
  ingredients = new NYPizzaIngredientFactory();
}

void NYCheesePizza::prepare()
{
  std::cout << "Preparing the Pizza " << pizzaName << "\n";
  std::cout << "\tUsing Ingredients:\n";
  std::cout << "\t\t Dough: " << ingredients->createDough() << "\n";
  std::cout << "\t\t Sauce: " << ingredients->createSauce() << "\n";
  std::cout << "\t\t Cheese: " << ingredients->createCheese() << "\n";
}

NYClamPizza::NYClamPizza()
{
  pizzaName = "New York Clam Pizza";
  ingredients = new NYPizzaIngredientFactory();
}

void NYClamPizza::prepare()
{
  std::cout << "Preparing the Pizza " << pizzaName << "\n";
  std::cout << "\tUsing Ingredients:\n";
  std::cout << "\t\t Dough: " << ingredients->createDough() << "\n";
  std::cout << "\t\t Sauce: " << ingredients->createSauce() << "\n";
  std::cout << "\t\t Cheese: " << ingredients->createCheese() << "\n";
  std::cout << "\t\t Clam: " << ingredients->createClam() << "\n";
}

NYVeggiePizza::NYVeggiePizza()
{
  pizzaName = "New York Veggie Pizza";
  ingredients = new NYPizzaIngredientFactory();
}

void NYVeggiePizza::prepare()
{
  std::cout << "Preparing the Pizza " << pizzaName << "\n";
  std::cout << "\tUsing Ingredients:\n";
  std::cout << "\t\t Dough: " << ingredients->createDough() << "\n";
  std::cout << "\t\t Sauce: " << ingredients->createSauce() << "\n";
  std::cout << "\t\t Cheese: " << ingredients->createCheese() << "\n";
  std::cout << "\t\t Veggies: " << ingredients->createVeggies() << "\n";
}

ChicagoCheesePizza::ChicagoCheesePizza()
{
  pizzaName = "Chicago Cheese Pizza";
  ingredients = new ChicagoPizzaIngredientFactory();
}

void ChicagoCheesePizza::prepare()
{
  std::cout << "Preparing the Pizza " << pizzaName << "\n";
  std::cout << "\tUsing Ingredients:\n";
  std::cout << "\t\t Dough: " << ingredients->createDough() << "\n";
  std::cout << "\t\t Sauce: " << ingredients->createSauce() << "\n";
  std::cout << "\t\t Cheese: " << ingredients->createCheese() << "\n";
}

ChicagoClamPizza::ChicagoClamPizza()
{
  pizzaName = "Chicago Clam Pizza";
  ingredients = new ChicagoPizzaIngredientFactory();
}

void ChicagoClamPizza::prepare()
{
  std::cout << "Preparing the Pizza " << pizzaName << "\n";
  std::cout << "\tUsing Ingredients:\n";
  std::cout << "\t\t Dough: " << ingredients->createDough() << "\n";
  std::cout << "\t\t Sauce: " << ingredients->createSauce() << "\n";
  std::cout << "\t\t Cheese: " << ingredients->createCheese() << "\n";
  std::cout << "\t\t Clam: " << ingredients->createClam() << "\n";
}

ChicagoVeggiePizza::ChicagoVeggiePizza()
{
  pizzaName = "Chicago Veggie Pizza";
  ingredients = new ChicagoPizzaIngredientFactory();
}

void ChicagoVeggiePizza::prepare()
{
  std::cout << "Preparing the Pizza " << pizzaName << "\n";
  std::cout << "\tUsing Ingredients:\n";
  std::cout << "\t\t Dough: " << ingredients->createDough() << "\n";
  std::cout << "\t\t Sauce: " << ingredients->createSauce() << "\n";
  std::cout << "\t\t Cheese: " << ingredients->createCheese() << "\n";
  std::cout << "\t\t Veggies: " << ingredients->createVeggies() << "\n";
}