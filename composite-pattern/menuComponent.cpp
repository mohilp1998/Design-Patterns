#include "include/menuComponent.h"

// MenuComponent::MenuComponent(std::string name, std::string description,
//                   int price, bool isVegetarian)
// {
//   m_name = name;
//   m_description = description;
//   m_price = price;
//   m_isVegetarian = isVegetarian;
// }

std::string MenuComponent::getName()
{
  return m_name;
}

std::string MenuComponent::getDescription()
{
  return m_description;
}

int MenuComponent::getPrice()
{
  return m_price;
}

bool MenuComponent::isVegetarian()
{
  return m_isVegetarian;
}

Menu::Menu(std::string name, std::string description)
{
  m_name = name;
  m_description = description;
  m_price = 0;
  m_isVegetarian = false;
}

Menu::~Menu()
{
  for (int i=0; i < m_children.size(); i++) 
  {
    delete m_children[i];
  }
}

void Menu::addChild(MenuComponent* elem)
{
  m_children.push_back(elem);
}

void Menu::remove(int idx)
{
  if (idx > m_children.size()) 
  {
    assertm(false, "Index greater than number of childern");
  }
  delete m_children[idx];
  m_children.erase(m_children.begin() + idx);
}

MenuComponent* Menu::getChild(int idx)
{
  if (idx > m_children.size()) 
  {
    assertm(false, "Index greater than number of childern");
  }
  return m_children[idx];
}

void Menu::print()
{
  std::cout << "\n";
  std::string printingLine = this->getName() + " " +
        this->getDescription(); 
  std::cout << printingLine << "\n";
  std::cout << "---------------------------------\n";


  for (int i=0; i<m_children.size(); i++)
  {
    m_children[i]->print();
  }
}

MenuItems::MenuItems(std::string name, std::string description,
            int price, bool isVegetarian)
{
  m_name = name;
  m_description = description;
  m_price = price;
  m_isVegetarian = isVegetarian;
}

void MenuItems::addChild(MenuComponent* elem)
{
  assertm(false, "'addChild' should not be called for MenuItems");
}

void MenuItems::remove(int idx)
{
  assertm(false, "'remove' should not be called for MenuItems");
}

MenuComponent* MenuItems::getChild(int idx)
{
  assertm(false, "'getChild' should not be called for MenuItems");
}

void MenuItems::print()
{
  std::string printingLine = this->getName() + " " +
        this->getDescription() + "\t" + "$" + std::to_string(this->getPrice()) +
        + " (" + (this->isVegetarian() ? "V" : "NV") + ")"; 
  std::cout << printingLine << "\n";
}