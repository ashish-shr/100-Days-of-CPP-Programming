// Program to demonstrate unique pointer

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
  std::unique_ptr<MyClass> uniquePtr1 = std::make_unique<MyClass>(42);

  uniquePtr1->printValue();

  // std::unique_ptr<MyClass> uniquePtr2 = uniquePtr1; // invalid

  // std::unique_ptr<MyClass> uniquePtr2 = std::move(uniquePtr1); // valid
  // uniquePtr2->printValue();

  // No need to delete, handled automatically when uniquePtr goes out of scope

  return 0;
}
