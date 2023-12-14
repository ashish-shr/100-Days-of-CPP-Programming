// Program to demonstrate abstract classes as Intefaces

#include <iostream>

class I_Account // Interface
{
public:
  virtual void display() = 0; // pure virtual function
  virtual ~I_Account(){};
};

class Saving : public I_Account // concrete class
{
public:
  virtual void display() override
  {
    std::cout << "In Saving::display" << std::endl;
  }
  virtual ~Saving(){};
};

class Checking : public I_Account // concrete class
{
public:
  virtual void display() override
  {
    std::cout << "In Checking::display" << std::endl;
  }
  virtual ~Checking(){};
};

int main()
{
  I_Account *ptr1 = new Saving();
  ptr1->display(); // In Saving::display
  I_Account *ptr2 = new Checking();
  ptr2->display(); // In Checking::display
  return 0;
}