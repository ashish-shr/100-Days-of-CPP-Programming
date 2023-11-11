// Program to demonstrate weak pointer [1]

#include <iostream>
#include <memory>

int main()
{
  // Create a shared_ptr
  std::shared_ptr<int> sharedPtr = std::make_shared<int>(42);

  // Make a weak_ptr from the shared_ptr
  std::weak_ptr<int> weakPtr = sharedPtr;

  if (!weakPtr.expired())
  {
    std::cout << "weakPtr is not expired." << std::endl;
  }
  else
  {
    std::cout << "weakPtr is now expired." << std::endl;
  }

  weakPtr.reset();

  if (!weakPtr.expired())
  {
    std::cout << "weakPtr is not expired." << std::endl;
  }
  else
  {
    std::cout << "weakPtr is now expired." << std::endl;
  }

  return 0;
}
