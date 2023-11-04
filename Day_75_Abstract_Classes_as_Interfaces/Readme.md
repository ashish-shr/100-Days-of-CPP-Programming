# ⚡Abstract Classes as Interfaces

## Interfaces

- An abstract class that has only pure virtual functions (i.e. Pure Abstract Class) is called an interface.
- Similar to abstract classes, we cannot create an instance of the interface class.
- Any class derived from the (Pure Abstract Class) interface must implement all of the methods of the base class i.e. Interface.
- Unlike C#, Java and other languages, C++ does not provide true interfaces.
- We use abstract classes and pure virtual functions to achieve it.

### Example

```cpp
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
```

```
Output:
In Saving::display
In Checking::display
```
