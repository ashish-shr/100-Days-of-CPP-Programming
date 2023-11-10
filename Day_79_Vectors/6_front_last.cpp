// first and last element of a vector using front() and back()

#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector<int> num{1, 2, 3, 4, 5};

  // returns first element of a vector num
  cout << "First Element: " << num.front() << endl; // 1
  // returns last element of a vector num
  cout << "Last Element: " << num.back() << endl; // 5

  return 0;
}