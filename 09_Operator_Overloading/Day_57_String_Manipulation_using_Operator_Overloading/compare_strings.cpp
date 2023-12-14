// Compare two strings using operator overloading

#include <iostream>
#include <cstring>
using namespace std;

class compare
{
  char str[25];

public:
  void getData(void)
  {
    cout << "Enter a string: ";
    cin >> str;
  }

  void showData(void)
  {
    cout << "String: " << str << endl;
  }

  // overloading == operator for string comparison
  int operator==(compare c)
  {
    if (strcmp(str, c.str) == 0)
      return 1;
    else
      return 0;
  }
};

// driver code
int main()
{
  compare c1, c2;
  c1.getData();
  c1.showData();
  c2.getData();
  c2.showData();

  // calling overloaded == operator for string comparison
  if (c1 == c2)
    cout << "Strings are equal." << endl;
  else
    cout << "Strings are not equal." << endl;
  return 0;
}