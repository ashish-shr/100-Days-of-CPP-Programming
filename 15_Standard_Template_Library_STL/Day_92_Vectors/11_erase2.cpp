// removing elements using erase() function in range

#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector<int> num{3, 2, 1, 4, 5, 6, 7, 8};
  vector<int>::iterator itr1, itr2;

  cout << "Initial Vector: ";
  for (auto i : num)
  {
    cout << i << " ";
  }
  cout << endl;

  itr1 = num.begin() + 3; // points num[3]
  itr2 = num.begin() + 5; // points num[5]
  num.erase(itr1, itr2);  // removes elements from num[3] to num[4]

  cout << "Final Vector: ";
  for (auto i : num)
  {
    cout << i << " "; // 3 2 1 6 7 8
  }
  cout << endl;

  return 0;
}
