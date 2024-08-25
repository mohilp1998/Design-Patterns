#include "include/state.h"

int main()
{
  GumballMachine m1 = GumballMachine(10);

  // Inserting and Ejecting Quarter
  std::cout << "User1\n";
  m1.insertQuarter();
  m1.ejectQuarter();
  std::cout << "\n";

  // Inserting and dispensing
  std::cout << "User2\n";
  m1.insertQuarter();
  m1.turnCrank();
  std::cout << "\n";

  // Just turning crank
  std::cout << "User3\n";
  m1.turnCrank();
  std::cout << "\n";
}