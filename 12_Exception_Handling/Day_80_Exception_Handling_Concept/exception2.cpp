// throwing an exception from a function

#include <iostream>

void average(double sum, double total)
{
  if (total == 0)
    throw 0;                                                // throw the exception
  std::cout << "Average is " << (sum / total) << std::endl; // won't execute if total == 0
}

int main()
{
  double sum{}, total{};
  std::cout << "Enter sum and total: ";
  std::cin >> sum >> total;
  try // try block
  {
    average(sum, total);
  }
  catch (int &ex) // exception handler
  {
    std::cerr << "Cannot divide by zero." << std::endl;
  }

  std::cout << "Program continues" << std::endl;
  return 0;
}