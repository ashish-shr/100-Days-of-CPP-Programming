// accessing vectors elements using index and at() function

#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector<int> num{1, 2, 3, 4, 5};

  cout << "Element at Index 0: " << num.at(0) << endl; // 1
  cout << "Element at Index 1: " << num.at(1) << endl; // 2
  cout << "Element at Index 2: " << num.at(2) << endl; // 3
  cout << "Element at Index 3: " << num[3] << endl;    // 4
  cout << "Element at Index 4: " << num[4] << endl;    // 5

  return 0;
}