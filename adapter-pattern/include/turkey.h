#include "duck.h"

class Turkey
{
  public:
    void shortFly();
    void gobble();
};

// TurkeyAdapterCompose
class TurkeyAdapterCompose: public Duck
{
  public:
    Turkey *turkey;

    TurkeyAdapterCompose(Turkey *obj);
    void fly();
    void quack();
};

// TurkeyAdapterInheritance
class TurkeyAdapterInheritance: public Duck, public Turkey
{
  void fly();
  void quack();

  // shortFly and gobble will be inherited from parent class
};