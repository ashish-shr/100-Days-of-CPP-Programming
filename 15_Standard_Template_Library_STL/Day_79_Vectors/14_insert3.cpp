// insert ramge of elements at given index

#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector<int> original{1, 2, 3, 4, 5};

  vector<int> temp{2, 5, 9, 0, 3, 10};

  // Printing out the original vector
  cout << "Original vector :" << endl;
  for (auto x : original)
    cout << x << " ";
  cout << endl;

  // Printing out the temp vector
  cout << "Temp vector :" << endl;
  for (auto x : temp)
    cout << x << " ";
  cout << endl;

  // Inserting the portion of temp vector in original
  // vector temp.begin()+3 is starting iterator of vector
  // to be copied temp.begin()+5 is ending iterator of
  // vector to be copied
  original.insert(original.begin() + 3, temp.begin() + 2, temp.begin() + 5);

  // Printing the modified vector
  cout << "Vector after Inserting the portion of temp vector in original vector :" << endl;
  for (auto x : original)
    cout << x << " ";

  return 0;
}
