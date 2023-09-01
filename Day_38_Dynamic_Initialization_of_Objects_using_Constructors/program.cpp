// Program to demonstrate dynamic initialization of objects using constructors

#include <iostream>
using namespace std;

class piechart
{
  float deg;

public:
  piechart() = default;
  piechart(float d)
  {
    deg = d;
    cout << "In percentage: " << (deg / 360) * 100 << endl;
  }
};

int main()
{
  float deg;
  piechart p1;
  cout << "Enter the degree value: ";
  cin >> deg;
  p1 = piechart(deg); // dynamic initialization of object
  return 0;
}