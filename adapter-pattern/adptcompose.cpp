#include "include/turkey.h"

int main()
{
  Turkey myTurkey;
  MallardDuck myDuck;
  TurkeyAdapterCompose turkeyAdapter(&myTurkey);

  // Testing for client using duck
  Duck *client;

  client = &myDuck;
  client->fly();
  client->quack();

  client = &turkeyAdapter;
  client->fly();
  client->quack();

  return 0;
}