// insert an element at given index

#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector<int> num{1, 2, 3, 4, 5};

  cout << "Original vector : " << endl;
  for (auto x : num)
    cout << x << " ";
  cout << endl;

  // Inserting the value 100 at num[3]
  num.insert(num.begin() + 3, 100);

  // Printing the modified vector
  cout << "Vector after inserting 100 at num[3] : " << endl;
  for (auto x : num)
    cout << x << " ";
  cout << endl;

  // Inserting the value 500 at num[1]
  num.insert(num.begin() + 1, 500);

  // Printing the modified vector
  cout << "Vector after inserting 500 at num[1] : " << endl;
  for (auto x : num)
    cout << x << " ";

  return 0;
}
