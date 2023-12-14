// 4. Write a C++ program to check whether a triangle is Equilateral, Isosceles or Scalene.

#include <iostream>
using namespace std;

int main()
{
  float sideA, sideB, sideC;
  cout << "Enter three sides of triangle: ";
  cin >> sideA >> sideB >> sideC;
  if (sideA + sideB > sideC && sideA + sideC > sideB && sideB + sideC > sideA)
  {
    if ((sideA == sideB) && (sideB == sideC) && (sideA == sideC))
      cout << "Equilateral triangle";
    else if ((sideA == sideB) || (sideB == sideC) || (sideA == sideC))
      cout << "Isoceles triangle";
    else
      cout << "Scalene triangle";
  }
  else
    cout << "Invalid sides";
  return 0;
}