#include <iostream>
#include <cassert>
// Use (void) to silence unused warnings.
#define assertm(exp, msg) assert(((void)msg, exp))

// Duck Interface
class Duck
{
  public:
    // Default destructor
    virtual ~Duck() = default;

    // abstract functions
    virtual void fly() = 0;
    virtual void quack() = 0;
};

// Mallard Duck
class MallardDuck: public Duck
{
  public:
    void fly();
    void quack();
};