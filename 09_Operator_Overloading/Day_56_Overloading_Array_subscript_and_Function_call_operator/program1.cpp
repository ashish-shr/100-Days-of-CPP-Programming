// Overloading array subscript[] operator

#include <iostream>
using namespace std;

class test
{
  int a[3];

public:
  void getData(int x, int y, int z)
  {
    a[0] = x;
    a[1] = y;
    a[2] = z;
  }

  int operator[](int index) // overloading array subscript[] operator
  {
    return a[index];
  }
};

int main()
{
  test t;
  t.getData(3, 2, 1);
  cout << "Array..." << endl;

  // calling overloaded array subscript[] operator
  cout << "t[0]: " << t[0] << endl;
  cout << "t[1]: " << t[1] << endl;
  cout << "t[2]: " << t[2] << endl;
  return 0;
}