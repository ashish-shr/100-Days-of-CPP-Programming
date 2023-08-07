// 2. Write a C++ program to accept a coordinate point in an XY coordinate system and determine in which quadrant the coordinate point lies.

#include <iostream>
using namespace std;

int main()
{
  int x, y;
  cout << "Enter x and y coordinates: ";
  cin >> x >> y;
  if (x > 0 && y > 0)
    cout << "First Quadrant";
  else if (x < 0 && y > 0)
    cout << "Second Quadrant";
  else if (x < 0 && y < 0)
    cout << "Third Quadrant";
  else if (x > 0 && y < 0)
    cout << "Fourth Quadrant";
  return 0;
}