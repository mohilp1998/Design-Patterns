#include "pizza.h"

class PizzaStore
{
  public:
    virtual ~PizzaStore() = default;

    Pizza *pizza;

    Pizza* orderPizza(std::string type);
    virtual Pizza* createPizza(std::string type) = 0;
};

// PizzaStore subclasses that adds the creation method
class NYPizzaStore: public PizzaStore
{
  public:
    NYPizzaStore() = default;
    ~NYPizzaStore() = default;

    Pizza *createPizza(std::string type);
};

class ChicagoPizzaStore: public PizzaStore
{
  public:
    ChicagoPizzaStore() = default;
    ~ChicagoPizzaStore() = default;

    Pizza* createPizza(std::string type);
};
