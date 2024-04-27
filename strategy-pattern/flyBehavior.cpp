#include "include/flyBehavior.h"

void FlyNoWings::fly()
{
  std::cout << "NO flying!\n";
}

void FlyWings::fly()
{
  std::cout << "Flying with WINGS!\n";
}

void FlyRocket::fly()
{
  std::cout << "Flying insanely fast with ROCKETS!\n";
}