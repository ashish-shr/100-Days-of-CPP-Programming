// initializing vector iterators using begin() function

#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector<int> num{1, 2, 3, 4, 5};

  vector<int>::iterator iter;

  // iter points to num[0] -> 1
  iter = num.begin();
  cout << "num[0] = " << *iter << endl; // 1

  // iter points to num[2] -> 3
  iter = num.begin() + 2;
  cout << "num[2] = " << *iter; // 3

  return 0;
}