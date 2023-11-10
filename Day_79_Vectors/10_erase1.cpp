// removing elements using erase() function at specific position

#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector<int> num{1, 2, 3, 4, 5};
  vector<int>::iterator itr;

  cout << "Initial Vector: ";
  for (auto i : num)
  {
    cout << i << " ";
  }
  cout << endl;

  itr = num.begin(); // points num[0]
  num.erase(itr);    // removes num[0] element

  cout << "Final Vector: ";
  for (auto i : num)
  {
    cout << i << " ";
  }
  cout << endl;

  return 0;
}
