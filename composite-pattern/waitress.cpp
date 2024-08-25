#include "include/menuComponent.h"

int main()
{
  // Hotel Menu Base
  MenuComponent *menu = new Menu("Hotel Menu", "Main Hotel Menu of All Things");
  
  // Pancake House menu
  MenuComponent *pkHouse = new Menu("Pancake House", "Only for Breakfast 11am to 2pm");
  menu->addChild(pkHouse);

  // Pancake House Menu Items
  MenuComponent *item = new MenuItems("Classic Pancake", "Buttermilk Pancake with Honey", 10, true);
  pkHouse->addChild(item);
  item = new MenuItems("Blueberry Pancake", "Classic with a twist of Blueberry", 12, true);
  pkHouse->addChild(item);
  item = new MenuItems("Oreos Pancake", "Unique Pancakes with Oreos", 15, true);
  pkHouse->addChild(item);
  item = new MenuItems("Chef's Special Pancake", "A unique recepie mastered by chef from streets of uganda", 25, false);
  pkHouse->addChild(item);


  MenuComponent *diner = new Menu("Diner", "Only for dinners 6pm to 10pm");
  menu->addChild(diner);

  item = new MenuItems("Scrambled Eggs", "Cause this is a forever breakfast at dinner", 10, false);
  diner->addChild(item);
  item = new MenuItems("Burger", "Classic Hamburger with Pickles", 15, false);
  diner->addChild(item);
  item = new MenuItems("Risotto Aldente", "Paste in red sauce with bread on side", 17, true);
  diner->addChild(item);

  menu->print();
  return 0;
}