#include <vector>
#include <string>
#include <iostream>

#include <cassert>
// Use (void) to silence unused warnings.
#define assertm(exp, msg) assert(((void)msg, exp))


class MenuComponent
{
  public:
    std::vector<MenuComponent *> m_children;
    std::string m_name;
    std::string m_description;
    int m_price;
    bool m_isVegetarian;

    // We are going to provide a default implementation of MenuComponent
    virtual ~MenuComponent() = default;

    // Following functions have default implementation
    std::string getName();
    std::string getDescription();
    int getPrice();
    bool isVegetarian();

    // Following are specific to non-leaf nodes
    virtual void addChild(MenuComponent *elem) = 0;
    virtual void remove(int idx) = 0;
    virtual MenuComponent *getChild(int idx) = 0;

    // Following are implemented differently in leaf or non-leaf
    virtual void print() = 0;
};

// Non-leaf nodes
class Menu: public MenuComponent
{
  public:
    Menu(std::string name, std::string description);
    ~Menu();
    void addChild(MenuComponent *elem);
    void remove(int idx);
    MenuComponent *getChild(int idx);

    void print();
};

// leaf-nodes
class MenuItems: public MenuComponent
{
  public:
    MenuItems(std::string name, std::string description,
            int price, bool isVegetarian);
    ~MenuItems() = default;
    void addChild(MenuComponent *elem);
    void remove(int idx);
    MenuComponent *getChild(int idx);

    void print();
};