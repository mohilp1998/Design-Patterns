#include "include/pizzaIngredients.h"

ThickCrustDough::ThickCrustDough()
{
  doughType = "Thick Crust";
}

ThinCrustDough::ThinCrustDough()
{
  doughType = "Thin Crust";
}

PlumTomatoSauce::PlumTomatoSauce()
{
  sauceType = "Plum Tomato Sauce";
}

MarinaraSauce::MarinaraSauce()
{
  sauceType = "Marinara Sauce";
}

Mozzarella::Mozzarella()
{
  cheeseType = "Mozzarella Cheese";
}

Reggiano::Reggiano()
{
  cheeseType = "Reggiano Cheese";
}

FrozenClam::FrozenClam()
{
  clamType = "Frozen Clam";
}

FreshClam::FreshClam()
{
  clamType = "Fresh Clam";
}

NYVeggies::NYVeggies()
{
  veggielist = "Onion Pepper Jalapeneos";
}

ChicagoVeggies::ChicagoVeggies()
{
  veggielist = "Mushroom Pineapple Jalapeneos";
}

// Factories
NYPizzaIngredientFactory::NYPizzaIngredientFactory()
{
  dough = new ThickCrustDough();
  sauce = new PlumTomatoSauce();
  cheese = new Mozzarella();
  clam = new FrozenClam();
  veggies = new NYVeggies();
}

ChicagoPizzaIngredientFactory::ChicagoPizzaIngredientFactory()
{
  dough = new ThinCrustDough();
  sauce = new MarinaraSauce();
  cheese = new Reggiano();
  clam = new FreshClam();
  veggies = new ChicagoVeggies();
}

std::string PizzaIngredientFactory::createDough()
{
  return dough->doughType;
}

std::string PizzaIngredientFactory::createSauce()
{
  return sauce->sauceType;
}

std::string PizzaIngredientFactory::createCheese()
{
  return cheese->cheeseType;
}

std::string PizzaIngredientFactory::createClam()
{
  return clam->clamType;
}

std::string PizzaIngredientFactory::createVeggies()
{
  return veggies->veggielist;
}