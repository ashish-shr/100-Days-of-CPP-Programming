// removing all the elements of a vector using clear() function

#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector<int> num{1, 2, 3, 4, 5};

  cout << "Initial Vector: ";
  for (auto i : num)
  {
    cout << i << " ";
  }
  cout << endl;
  num.clear();

  cout << "Final Vector: ";
  for (auto i : num)
  {
    cout << i << " ";
  }
  cout << endl;

  return 0;
}
