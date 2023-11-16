// divide by zero and negative value example

#include <iostream>

double calculateMPG(double miles, double gallons)
{
  if (gallons == 0)
    throw 0;
  if (miles < 0 || gallons < 0)
    throw std::string("Negative value error!");
  return (miles / gallons);
}

int main()
{
  double miles, gallons;
  std::cout << "Enter miles and gallons: ";
  std::cin >> miles >> gallons;

  // handling multiple exceptions
  try
  {
    std::cout << "Miles per gallon: " << calculateMPG(miles, gallons) << std::endl;
  }
  catch (int &ex)
  {
    std::cerr << "Cannot divide by zero." << std::endl;
  }
  catch (std::string &ex)
  {
    std::cerr << "Cannot divide by negative value." << std::endl;
  }
  std::cout << "Program continues." << std::endl;

  return 0;
}