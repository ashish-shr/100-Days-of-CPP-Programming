// user-defined exception classes

#include <iostream>

class DivideByZeroException
{
};

class NegativeValueException
{
};

double calculateMPG(double miles, double gallons)
{
  // throwing user-defined exception classes
  if (gallons == 0)
    throw DivideByZeroException();
  if (miles < 0 || gallons < 0)
    throw NegativeValueException();
  return (miles / gallons);
}

int main()
{
  double miles, gallons;
  std::cout << "Enter miles and gallons: ";
  std::cin >> miles >> gallons;

  try
  {
    std::cout << "Miles per gallon: " << calculateMPG(miles, gallons) << std::endl;
  }

  // catching user-defined exceptions
  catch (const DivideByZeroException &ex)
  {
    std::cerr << "Cannot divide by zero." << std::endl;
  }
  catch (const NegativeValueException &ex)
  {
    std::cerr << "Cannot divide by negative value." << std::endl;
  }
  std::cout << "Program continues." << std::endl;

  return 0;
}