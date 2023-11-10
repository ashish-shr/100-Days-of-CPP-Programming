// insert multiple elements at given index

#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector<int> num{1, 2, 3, 4, 5};

  // Printing out the original vector
  cout << "Original vector : " << endl;
  for (auto x : num)
    cout << x << " ";
  cout << endl;

  // Inserting the value 100, 4 times starting at num[3]
  num.insert(num.begin() + 3, 4, 100);

  // Printing the modified vector
  cout << "Vector after inserting 100, 4 times, starting at num[3]" << endl;
  for (auto x : num)
    cout << x << " ";

  return 0;
}
