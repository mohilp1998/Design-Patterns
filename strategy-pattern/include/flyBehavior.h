#include <iostream>

// abstract class/interface for flyBehavior
class FlyBehavior
{
  public:
    FlyBehavior() = default;
    virtual ~FlyBehavior() = default;
    virtual void fly() = 0;
};

// implementations of different flying behaviors
class FlyNoWings: public FlyBehavior
{
  public:
    FlyNoWings() = default;
    ~FlyNoWings() = default;

    void fly();
};

class FlyWings: public FlyBehavior
{
  public:
    FlyWings() = default;
    ~FlyWings() = default;

    void fly();
};

class FlyRocket: public FlyBehavior
{
  public:
    FlyRocket() = default;
    ~FlyRocket() = default;

    void fly();
};