// Program to demonstrate constructor initialization using initialization lists

#include <iostream>
using namespace std;

class Date
{
  int month, day, year;

public:
  Date() : month{0}, day{0}, year{0}
  {
  }

  Date(int m, int d, int y) : month{m}, day{d}, year{y}
  {
  }

  void display()
  {
    cout << month << "/" << day << "/" << year << endl;
  }
};

int main()
{
  Date d1;
  d1.display();
  Date d2(10, 20, 30);
  d2.display();
  return 0;
}