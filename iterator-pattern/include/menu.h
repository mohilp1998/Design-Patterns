#pragma once
#include "iterator.h"
#include <string>
#include <vector>
#include <list>

// Menu Interface
class Menu
{
  public:
    virtual ~Menu() = default;

    virtual Iterator *createIterator() = 0;
};

/* Pancake House Menu
 * Use std::vector<std::string> to store menu items
 * Constructor initializes the menu items
 */
class PancakeHouseMenu: public Menu
{
  public:
    std::vector<std::string> menuItems;
    Iterator *itr;

    PancakeHouseMenu();
    ~PancakeHouseMenu();

    Iterator *createIterator();
};

/* Diner House Menu
 * Use std::list<std::string> to store menu items
 * Constructor initializes the menu items
 */
class DinerMenu: public Menu
{
  public:
    std::list<std::string> menuItems;
    Iterator *itr;

    DinerMenu();
    ~DinerMenu();

    Iterator *createIterator();
};