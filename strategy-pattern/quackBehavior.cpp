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

    void quack()
    {
      std::cout << "QUACK QUACK\n";
    }
};

class Squeak: public QuackBehavior
{
  public:
    Squeak() = default;
    ~Squeak() = default;

    void quack()
    {
      std::cout << "SQUEAK SQUEAK\n";
    }
};

class MuteQuack: public QuackBehavior
{
  public:
    MuteQuack() = default;
    ~MuteQuack() = default;

    void quack()
    {
      std::cout << "------\n";
    }
};