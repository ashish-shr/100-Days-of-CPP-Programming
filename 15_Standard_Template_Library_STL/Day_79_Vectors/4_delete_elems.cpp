// deleting elements to a vector using pop_back() function

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

  num.pop_back(); // deletes 5 from vector num

  cout << "Final Vector: ";
  for (auto i : num)
  {
    cout << i << " ";
  }

  return 0;
}