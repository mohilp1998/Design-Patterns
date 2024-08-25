#include <iostream>
#include <string>

#include <cassert>
// Use (void) to silence unused warnings.
#define assertm(exp, msg) assert(((void)msg, exp))

// GumballMachine Forward Declaration
class GumballMachine;

class State
{
  public:
    GumballMachine *m_machine;

    virtual ~State() = default;
  
    virtual void insertQuarter() = 0;
    virtual void ejectQuarter() = 0;
    virtual void turnCrank() = 0;
    virtual void dispense() = 0;
};

// States
class SoldState: public State
{
  public:
    SoldState(GumballMachine *machine);
    void insertQuarter();
    void ejectQuarter();
    void turnCrank();
    void dispense();
};

class SoldOutState: public State
{
  public:
    SoldOutState(GumballMachine *machine);
    void insertQuarter();
    void ejectQuarter();
    void turnCrank();
    void dispense();
};

class NoQuarterState: public State
{
  public:
    NoQuarterState(GumballMachine *machine);
    void insertQuarter();
    void ejectQuarter();
    void turnCrank();
    void dispense();
};

class HasQuarterState: public State
{
  public:
    HasQuarterState(GumballMachine *machine);
    void insertQuarter();
    void ejectQuarter();
    void turnCrank();
    void dispense();
};

// Class GumballMachine
class GumballMachine
{
  public:
    State *soldOut;
    State *noQuarters;
    State *hasQuarters;
    State *sold;

    State *curr_state;
    int count;

    GumballMachine(int numGumballs);
    ~GumballMachine();

    void insertQuarter();
    void ejectQuarter();
    void turnCrank();

    void setState(State *state);

    void releaseBall();
};