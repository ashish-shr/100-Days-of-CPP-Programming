// call by reference
#include <iostream>
using namespace std;
void swap(int *, int *);

int main()
{
  int x = 3, y = 21;
  swap(&x, &y); // passing value to function
  cout << "Value of x is: " << x << endl;
  cout << "Value of y is: " << y << endl;
  return 0;
}

void swap(int *x, int *y)
{
  int tmp;
  tmp = *x;
  *x = *y;
  *y = tmp;
}