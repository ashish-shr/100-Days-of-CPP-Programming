// standard exception classes

#include <iostream>
#include <stdexcept>

double divideNumbers(double numerator, double denominator)
{
  if (denominator == 0)
  {
    throw std::invalid_argument("Cannot divide by zero");
  }
  return numerator / denominator;
}

int main()
{
  try
  {
    double result = divideNumbers(8, 0); // Throws std::invalid_argument
  }
  catch (const std::invalid_argument &e)
  {
    std::cerr << "Invalid Argument: " << e.what() << std::endl;
  }

  return 0;
}
