// Program to demonstrate shallow copying with copy constructor

#include <iostream>

class ShallowCopy
{
public:
  int data;
  int *ptr;

  ShallowCopy(int d)
  {
    data = d;
    ptr = new int(d);
  }

  // Shallow copy constructor
  ShallowCopy(const ShallowCopy &other)
  {
    data = other.data;
    ptr = other.ptr;
  }

  void Display()
  {
    std::cout << "Data: " << data << ", Int: " << *ptr << std::endl;
  }

  ~ShallowCopy()
  {
    delete ptr;
    ptr = nullptr;
  }
};

int main()
{
  // Shallow copy example
  ShallowCopy obj1(1);
  ShallowCopy obj2 = obj1; // Shallow copy

  obj1.Display();
  obj2.Display();

  // Modify obj2
  obj2.data = 2;
  *obj2.ptr = 3;

  obj1.Display();
  obj2.Display(); // Both objects share the same int pointer, so modifying one affects the other

  return 0;
}
