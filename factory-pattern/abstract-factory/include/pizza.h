#include <string>
#include "pizzaIngredients.h"

class Pizza
{
  public:
    virtual ~Pizza() = default;

    std::string pizzaName;
    PizzaIngredientFactory *ingredients;

    virtual void prepare() = 0;
    void bake();
    void cut();
    void box();
    std::string getName();
};

// Different types of pizza
class NYCheesePizza: public Pizza
{
  public:
    NYCheesePizza();
    ~NYCheesePizza() = default;

    void prepare();
};

class NYClamPizza: public Pizza
{
  public:
    NYClamPizza();
    ~NYClamPizza() = default;

    void prepare();
};

class NYVeggiePizza: public Pizza
{
  public:
    NYVeggiePizza();
    ~NYVeggiePizza() = default;

    void prepare();
};

class ChicagoCheesePizza: public Pizza
{
  public:
    ChicagoCheesePizza();
    ~ChicagoCheesePizza() = default;

    void prepare();
};

class ChicagoClamPizza: public Pizza
{
  public:
    ChicagoClamPizza();
    ~ChicagoClamPizza() = default;

    void prepare();
};

class ChicagoVeggiePizza: public Pizza
{
  public:
    ChicagoVeggiePizza();
    ~ChicagoVeggiePizza() = default;

    void prepare();
};

