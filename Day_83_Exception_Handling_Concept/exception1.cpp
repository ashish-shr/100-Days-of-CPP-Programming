// divide by zero example

#include <iostream>

int main()
{
  double sum{}, total{}, average{};
  std::cout << "Enter sum and total: ";
  std::cin >> sum >> total;

  try // try block
  {
    if (total == 0)
      throw 0;             // throw the exception
    average = sum / total; // won't execute if total == 0
    std::cout << "Average: " << average << std::endl;
  }
  catch (int &ex) // exception handler
  {
    std::cerr << "Can't divide by " << ex << std::endl;
  }

  std::cout << "Program continues" << std::endl;

  return 0;
}