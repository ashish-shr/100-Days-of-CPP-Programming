// adding elements to a vector using push_back() function

#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector<int> num{1, 2, 3};

  cout << "Initial Vector: ";
  for (auto i : num)
  {
    cout << i << " ";
  }
  cout << endl;

  num.push_back(4); // adds 4 at the end of vector num

  cout << "Final Vector: ";
  for (auto i : num)
  {
    cout << i << " ";
  }

  return 0;
}