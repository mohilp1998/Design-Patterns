#include "include/pizzaStore.h"
#include <memory>
#include <cassert>

// Use (void) to silence unused warnings.
#define assertm(exp, msg) assert(((void)msg, exp))

Pizza* PizzaStore::orderPizza(std::string type)
{
  // create the pizza
  pizza = createPizza(type);

  pizza->prepare();
  pizza->bake();
  pizza->cut();
  pizza->box();

  return pizza;
}

Pizza* NYPizzaStore::createPizza(std::string type)
{
  if (0 == type.compare("Cheese"))
    return new NYCheesePizza();
  else if (0 == type.compare("Clam"))
    return new NYClamPizza();
  else if (0 == type.compare("Veggie"))
    return new NYVeggiePizza();
  else
    assert(false);
  
  return nullptr;
}

Pizza* ChicagoPizzaStore::createPizza(std::string type)
{
  if (0 == type.compare("Cheese"))
    return new ChicagoCheesePizza();
  else if (0 == type.compare("Clam"))
    return new ChicagoClamPizza();
  else if (0 == type.compare("Veggie"))
    return new ChicagoVeggiePizza();
  else
    assert(false);

  return nullptr;
}