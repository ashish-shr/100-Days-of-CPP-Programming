// finding size of vector using size() function

#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector<int> num{1, 2, 3, 4, 5};

  cout << num.size() << endl; // returns size of vector num i.e. 5

  return 0;
}