#include "include/state.h"

// SoldState 
SoldState::SoldState(GumballMachine *machine)
{
  m_machine = machine;
}

void SoldState::insertQuarter()
{
  std::cout << "Please wait we are already giving you a gumball" << "\n";
}

void SoldState::ejectQuarter()
{
  std::cout << "Invalid Action already sold\n";
}

void SoldState::turnCrank()
{
  std::cout << "Invalid Action already dispensing\n";
}

void SoldState::dispense()
{
  std::cout << "Dispensing one gumball\n";
  m_machine->releaseBall();

  if (m_machine->count > 0)
  {
    m_machine->setState(m_machine->noQuarters);
  }
  else if (m_machine->count == 0)
  {
    m_machine->setState(m_machine->soldOut);
  }
  else
  {
    assertm(false, "Negative gumball count not possible");
  }
}

// SoldOutState
SoldOutState::SoldOutState(GumballMachine *machine)
{
  m_machine = machine;
}

void SoldOutState::insertQuarter()
{
  std::cout << "Invalid Action: No Gumballs in Machine\n";
}

void SoldOutState::ejectQuarter()
{
  std::cout << "Invalid Action: No Gumballs in Machine\n";
}

void SoldOutState::turnCrank()
{
  std::cout << "There are no gumballs in Machine\n";
}

void SoldOutState::dispense()
{
  std::cout << "Invalid Action: Nothing to dispense\n";
}

// NoQuarterState
NoQuarterState::NoQuarterState(GumballMachine *machine)
{
  m_machine = machine;
}

void NoQuarterState::insertQuarter()
{
  m_machine->setState(m_machine->hasQuarters);
}

void NoQuarterState::ejectQuarter()
{
  std::cout << "You haven't inserted a quarter\n";
}

void NoQuarterState::turnCrank()
{
  std::cout << "Invalid Action: Insert Quarter first\n";
}

void NoQuarterState::dispense()
{
  std::cout << "Invalid Action: Nothing to dispense\n";
}

// HasQuarterState
HasQuarterState::HasQuarterState(GumballMachine *machine)
{
  m_machine = machine;
}

void HasQuarterState::insertQuarter()
{
  std::cout << "Already one quarter do not insert another\n";
}

void HasQuarterState::ejectQuarter()
{
  std::cout << "Ejecting Quarter\n";
  m_machine->setState(m_machine->noQuarters);
}

void HasQuarterState::turnCrank()
{
  m_machine->setState(m_machine->sold);
}

void HasQuarterState::dispense()
{
  std::cout << "Invalid Action: Nothing to dispense\n";
}

//Gumball Machine
GumballMachine::GumballMachine(int numGumballs)
{
  if (numGumballs < 0)
  {
    assertm(false, "Cannot have negative gumballs\n");
  }
  count = numGumballs;

  sold = new SoldState(this);
  noQuarters = new NoQuarterState(this);
  hasQuarters = new HasQuarterState(this);
  soldOut = new SoldOutState(this);

  if (count > 0)
  {
    curr_state = noQuarters;
  }
  else
  {
    curr_state = soldOut;
  }
}

GumballMachine::~GumballMachine()
{
  delete soldOut;
  delete noQuarters;
  delete hasQuarters;
  delete sold;
}

void GumballMachine::insertQuarter()
{
  curr_state->insertQuarter();
}

void GumballMachine::ejectQuarter()
{
  curr_state->ejectQuarter();
}

void GumballMachine::turnCrank()
{
  curr_state->turnCrank();
  curr_state->dispense();
}

void GumballMachine::setState(State *state)
{
  curr_state = state;
}

void GumballMachine::releaseBall()
{
  std::cout << "1 gumball coming out\n";
  if (count > 0)
  {
    count = count - 1;
  }
}