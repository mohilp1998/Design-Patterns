#include <string>

// Pizza Ingredients Interface
class Dough
{
  public:
    virtual ~Dough() = default;
    std::string doughType;
};

class Sauce
{
  public:
    virtual ~Sauce() = default;
    std::string sauceType;
};

class Cheese
{
  public:
    virtual ~Cheese() = default;
    std::string cheeseType;
};

class Clam
{
  public:
    virtual ~Clam() = default;
    std::string clamType;
};

class Veggies
{
  public:
    virtual ~Veggies() = default;
    std::string veggielist;
};

// Real ingredients
class ThickCrustDough: public Dough
{
  public:
    ThickCrustDough();
    ~ThickCrustDough() = default;
};

class ThinCrustDough: public Dough
{
  public:
    ThinCrustDough();
    ~ThinCrustDough() = default;
};

class PlumTomatoSauce: public Sauce
{
  public:
    PlumTomatoSauce();
    ~PlumTomatoSauce() = default;
};

class MarinaraSauce: public Sauce
{
  public:
    MarinaraSauce();
    ~MarinaraSauce() = default;
};

class Mozzarella: public Cheese
{
  public:
    Mozzarella();
    ~Mozzarella() = default;
};

class Reggiano: public Cheese
{
  public:
    Reggiano();
    ~Reggiano() = default;
};

class FrozenClam: public Clam
{
  public:
    FrozenClam();
    ~FrozenClam() = default;
};

class FreshClam: public Clam
{
  public:
    FreshClam();
    ~FreshClam() = default;
};

class NYVeggies: public Veggies
{
  public:
    NYVeggies();
    ~NYVeggies() = default;
};

class ChicagoVeggies: public Veggies
{
  public:
    ChicagoVeggies();
    ~ChicagoVeggies() = default;
};

// Pizza Ingredient Abstract Factory
class PizzaIngredientFactory
{
  public:
    virtual ~PizzaIngredientFactory() = default;

    Dough *dough;
    Sauce *sauce;
    Cheese *cheese;
    Clam *clam;
    Veggies *veggies;

    std::string createDough();
    std::string createSauce();
    std::string createCheese();
    std::string createClam();
    std::string createVeggies();
};

class NYPizzaIngredientFactory: public PizzaIngredientFactory
{
  public:
    NYPizzaIngredientFactory();
    ~NYPizzaIngredientFactory() = default;
};

class ChicagoPizzaIngredientFactory: public PizzaIngredientFactory
{
  public:
    ChicagoPizzaIngredientFactory();
    ~ChicagoPizzaIngredientFactory() = default;
};