// changing vector elements using at() function

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

  num.at(0) = 10; // sets index 0 element to 10
  num.at(4) = 20; // sets index 4 element to 20

  cout << "Final Vector: ";
  for (auto i : num)
  {
    cout << i << " ";
  }

  return 0;
}