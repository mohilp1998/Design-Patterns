#include "include/menu.h"
#include <iostream>

class Waitress
{
  public:
    PancakeHouseMenu PM;
    DinerMenu DM;

    void printMenu()
    {
      std::cout << "Pancake House Menu is: " << "\n";
      Iterator *itr = PM.createIterator();
      while (itr->hasNext())
      {
        std::cout << itr->next() << "\n";
      }

      std::cout << "\n" << "Diner House Menu is: " << "\n";
      itr = DM.createIterator();
      while (itr->hasNext())
      {
        std::cout << itr->next() << "\n";
      }
    }
};

int main()
{
  Waitress rosy;

  rosy.printMenu();

  return 0;
}