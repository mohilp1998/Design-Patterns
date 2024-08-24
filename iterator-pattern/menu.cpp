#include "include/menu.h"

PancakeHouseMenu::PancakeHouseMenu()
{
  // Inserting the pancake house menu items
  menuItems.push_back("Item 1: Buttermilk Pancake       $5");
  menuItems.push_back("Item 2: Blueberry Pancake        $6");
  menuItems.push_back("Item 3: Apple Pancake            $6");
  menuItems.push_back("Item 4: Loaded Pancake           $7");
  menuItems.push_back("Item 5: Chef's Special Pancake   $10");

  itr = nullptr;
}

Iterator *PancakeHouseMenu::createIterator()
{
  if (itr == nullptr)
  {
    itr = new PancakeHouseMenuIterator(&menuItems);
  }
  
  return itr;
}

PancakeHouseMenu::~PancakeHouseMenu()
{
  delete itr;
}

DinerMenu::DinerMenu()
{
  // Inserting the pancake house menu items
  menuItems.push_back("Item 1: Scrambled Eggs           $5");
  menuItems.push_back("Item 2: Burger                   $10");
  menuItems.push_back("Item 3: Orange Juice             $3");
  menuItems.push_back("Item 4: Burrito Bowl             $12");
  menuItems.push_back("Item 5: Schezwan Chicken         $14");

  itr = nullptr;
}

Iterator *DinerMenu::createIterator()
{
  if (itr == nullptr)
  {
    itr = new DinerMenuIterator(&menuItems);
  }
  
  return itr;
}

DinerMenu::~DinerMenu()
{
  delete itr;
}
