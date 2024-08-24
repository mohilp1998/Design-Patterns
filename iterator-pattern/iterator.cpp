#include "include/iterator.h"

PancakeHouseMenuIterator::PancakeHouseMenuIterator(std::vector<std::string> *items)
{
  menuItems = items;
  currPos = 0;
}

bool PancakeHouseMenuIterator::hasNext()
{
  if (menuItems->size() > currPos)
    return true;
  
  return false;
}

std::string PancakeHouseMenuIterator::next()
{
  if (currPos >= menuItems->size())
  {
    assertm(false, "Current Position Greater than menu size");
  }
  return menuItems->at(currPos++);
}

void PancakeHouseMenuIterator::remove()
{
  if (currPos >= menuItems->size())
  {
    assertm(false, "Current Position Greater than menu size");
  }
  menuItems->erase(menuItems->begin() + currPos);
  return;
}

DinerMenuIterator::DinerMenuIterator(std::list<std::string> *items)
{
  menuItems = items;
  currPos = 0;
}

bool DinerMenuIterator::hasNext()
{
  if (menuItems->size() > currPos)
    return true;
  
  return false;
}

std::string DinerMenuIterator::next()
{
  if (currPos >= menuItems->size())
  {
    assertm(false, "Current Position Greater than menu size");
  }

  // I know it's a bad implementation.
  // Can do better by storing itr and j pair in class.
  std::string ret = "";
  int j = 0;
  for (auto it = menuItems->begin(); it != menuItems->end(); it++)
  {
    if (j == currPos)
    {
      ret = *it;
      currPos++;
      break;
    }
    j++;
  }
  
  return ret;
}

void DinerMenuIterator::remove()
{
  if (currPos >= menuItems->size())
  {
    assertm(false, "Current Position Greater than menu size");
  }

  int j = 0;
  for (auto it = menuItems->begin(); it != menuItems->end(); it++)
  {
    if (j == currPos)
    {
      menuItems->erase(it);
      break;
    }
  }

  return;
}