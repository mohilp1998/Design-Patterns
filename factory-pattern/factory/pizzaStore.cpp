#include "include/pizzaStore.h"

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
  

}