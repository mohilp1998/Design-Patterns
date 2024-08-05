#include "include/turkey.h"

int main()
{
  MallardDuck myDuck;
  TurkeyAdapterInheritance turkeyAdapter;

  // Testing for client using duck
  Duck *client;

  client = &turkeyAdapter;
  client->fly();
  client->quack();

  client = &myDuck;
  client->fly();
  client->quack();

  return 0;
}