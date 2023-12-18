// initializing vector iterators using end() function

#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector<int> num{1, 2, 3, 4, 5};

  vector<int>::iterator iter;

  // iter points to the last element i.e. num[4]
  iter = num.end() - 1;
  cout << *iter; // 5

  return 0;
}