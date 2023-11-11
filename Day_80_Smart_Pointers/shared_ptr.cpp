// Program to demonstrate shared pointer

#include <iostream>
#include <memory>

class MyClass
{
  int value;

public:
  MyClass(int val) : value(val)
  {
    std::cout << "Constructed MyClass with value: " << value << std::endl;
  }

  ~MyClass()
  {
    std::cout << "Destructed MyClass with value: " << value << std::endl;
  }

  void printValue() const
  {
    std::cout << "Value: " << value << std::endl;
  }
};

int main()
{
  std::shared_ptr<MyClass> sharedPtr1 = std::make_shared<MyClass>(42);

  std::cout << "Owner Count: " << sharedPtr1.use_count() << std::endl; // 1
  sharedPtr1->printValue();

  // Both shared pointers now own the object
  std::shared_ptr<MyClass> sharedPtr2 = sharedPtr1;

  std::cout << "Owner Count: " << sharedPtr1.use_count() << std::endl; // 2
  sharedPtr2->printValue();

  // The object will be deleted when the last shared_ptr that owns it is destroyed

  return 0;
}
