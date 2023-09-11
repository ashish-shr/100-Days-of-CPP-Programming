// Overloading less than or equal <= operator

#include <iostream>
using namespace std;

class test
{
  int a;

public:
  void get(void)
  {
    cin >> a;
  }
  int operator<=(test t) // overloading less than or equal <= operator
  {
    if (a <= t.a)
      return 1;
    else
      return 0;
  }
};

int main()
{
  test t1, t2;
  cout << "Enter value of a for t1: ";
  t1.get();
  cout << "Enter value of a for t2: ";
  t2.get();
  if (t1 <= t2) // calling overloaded less than or equal <= operator
    cout << "t1 is lesser or equal to t2!";
  else
    cout << "t2 is lesser or equal to t1!";
  return 0;
}