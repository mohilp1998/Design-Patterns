#pragma once
#include <string>
#include <vector>
#include <list>

#include <cassert>

// Use (void) to silence unused warnings.
#define assertm(exp, msg) assert(((void)msg, exp))

// Iterator Interface
class Iterator
{
  public:
    virtual ~Iterator() = default;

    virtual bool hasNext() = 0;
    virtual std::string next() = 0;
    virtual void remove() = 0;
};

/* Pancake House Menu Iterator
 * Uses std::vector<std::string> to store menu items
 */
class PancakeHouseMenuIterator: public Iterator
{
  public:
    std::vector<std::string> *menuItems;
    int currPos;

    PancakeHouseMenuIterator(std::vector<std::string> *items);
    ~PancakeHouseMenuIterator() = default;

    bool hasNext();
    std::string next();
    void remove();
};

/* Diner Menu Iterator
 * Uses std::list<std::string> to store menu items
 */
class DinerMenuIterator: public Iterator
{
  public:
    std::list<std::string> *menuItems;
    int currPos;

    DinerMenuIterator(std::list<std::string> *items);
    ~DinerMenuIterator() = default;

    bool hasNext();
    std::string next();
    void remove();
};