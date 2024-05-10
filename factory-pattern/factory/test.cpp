#include "include/pizzaStore.h"
#include <memory>

int main()
{
  PizzaStore *NYPizza = new NYPizzaStore();
  PizzaStore *ChicagoPizza = new ChicagoPizzaStore();

  NYPizza->orderPizza("Cheese");
  ChicagoPizza->orderPizza("Veggie");
  ChicagoPizza->orderPizza("Clam");
  NYPizza->orderPizza("Clam");
  return 0;
}