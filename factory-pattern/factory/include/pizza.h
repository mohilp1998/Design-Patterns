#include <string>

class Pizza
{
  public:
    virtual ~Pizza() = default;

    std::string pizzaName;

    void prepare();
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
};

class NYClamPizza: public Pizza
{
  public:
    NYClamPizza();
    ~NYClamPizza() = default;
};

class NYVeggiePizza: public Pizza
{
  public:
    NYVeggiePizza();
    ~NYVeggiePizza() = default;
};

class ChicagoCheesePizza: public Pizza
{
  public:
    ChicagoCheesePizza();
    ~ChicagoCheesePizza() = default;
};

class ChicagoClamPizza: public Pizza
{
  public:
    ChicagoClamPizza();
    ~ChicagoClamPizza() = default;
};

class ChicagoVeggiePizza: public Pizza
{
  public:
    ChicagoVeggiePizza();
    ~ChicagoVeggiePizza() = default;
};

