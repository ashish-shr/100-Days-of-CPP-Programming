// Program to demonstrate deep copying with copy constructor

#include <iostream>

class DeepCopy
{
public:
  int data;
  int *ptr;

  DeepCopy(int d)
  {
    data = d;
    ptr = new int(d);
  }

  // Deep copy constructor
  DeepCopy(const DeepCopy &other)
  {
    data = other.data;
    ptr = new int;
    *ptr = *other.ptr;
  }

  void Display()
  {
    std::cout << "Data: " << data << ", Int: " << *ptr << std::endl;
  }

  ~DeepCopy()
  {
    delete ptr;
    ptr = nullptr;
  }
};

int main()
{

  // Deep copy example
  DeepCopy obj1(1);
  DeepCopy obj2 = obj1; // Deep copy

  obj1.Display();
  obj2.Display();

  // Modify obj2
  obj2.data = 2;
  *obj2.ptr = 3;

  obj1.Display();
  obj2.Display(); // Each object has its own separate int, so they don't affect each other

  return 0;
}
