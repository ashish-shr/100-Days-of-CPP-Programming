// Program to demonstrate weak pointer [2]

#include <iostream>
#include <memory>

int main()
{
  // Create a shared_ptr
  std::shared_ptr<int> sharedPtr = std::make_shared<int>(42);

  // Make a weak_ptr from the shared_ptr
  std::weak_ptr<int> weakPtr = sharedPtr;

  if (std::shared_ptr<int> lockedSharedPtr = weakPtr.lock())
  {
    std::cout << "Successfully locked the weak pointer." << std::endl;
    std::cout << "*lockedSharedPtr: " << *lockedSharedPtr << std::endl;
  }
  else
  {
    std::cout << "Failed to lock the weak pointer." << std::endl;
  }

  weakPtr.reset();

  if (std::shared_ptr<int> lockedSharedPtr = weakPtr.lock())
  {
    std::cout << "Successfully locked the weak pointer." << std::endl;
    std::cout << "*lockedSharedPtr: " << *lockedSharedPtr << std::endl;
  }
  else
  {
    std::cout << "Failed to lock the weak pointer." << std::endl;
  }

  return 0;
}
