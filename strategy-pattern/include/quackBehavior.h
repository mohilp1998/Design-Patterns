#include <iostream>

//abstract class for quacking behavior
class QuackBehavior
{
  public:
    QuackBehavior() = default;
    virtual ~QuackBehavior() = default;

    virtual void quack() = 0;
};

//implementation for quacking behavior
class Quack: public QuackBehavior
{
  public:
    Quack() = default;
    ~Quack() = default;

    void quack();
};

class Squeak: public QuackBehavior
{
  public:
    Squeak() = default;
    ~Squeak() = default;

    void quack();
};

class MuteQuack: public QuackBehavior
{
  public:
    MuteQuack() = default;
    ~MuteQuack() = default;

    void quack();
};