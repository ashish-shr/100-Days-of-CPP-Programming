// Overloading Binary + operator

#include <iostream>
using namespace std;

class binaryPlus
{
  float a;

public:
  void get(void)
  {
    cin >> a;
  }

  void show(void)
  {
    cout << "t1 + t2: " << a;
  }

  binaryPlus operator+(binaryPlus t2) // overloading binary + operator
  {
    binaryPlus t3;
    t3.a = a + t2.a;
    return t3;
  }
};

int main()
{
  binaryPlus t1, t2, t3;
  cout << "Enter value of a for t1: ";
  t1.get();
  cout << "Enter value of a for t2: ";
  t2.get();
  t3 = t1 + t2; // calling overloaded binary + operator
  t3.show();
  return 0;
}