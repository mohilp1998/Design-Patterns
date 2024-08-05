#include "include/turkey.h"

void Turkey::shortFly()
{
  std::cout << "Turkey flew 1 meter\n";
}

void Turkey::gobble()
{
  std::cout << "Turkey gobble-gobble\n";
}

// TurkeyAdapterCompose
TurkeyAdapterCompose::TurkeyAdapterCompose(Turkey *obj)
{
  turkey = obj;
}

void TurkeyAdapterCompose::fly()
{
  turkey->shortFly();
  turkey->shortFly();
  turkey->shortFly();
  turkey->shortFly();
  turkey->shortFly();
}

void TurkeyAdapterCompose::quack()
{
  turkey->gobble();
}

// TurkeyAdapterInheritance
void TurkeyAdapterInheritance::fly()
{
  shortFly();
  shortFly();
  shortFly();
  shortFly();
  shortFly();
}

void TurkeyAdapterInheritance::quack()
{
  gobble();
}