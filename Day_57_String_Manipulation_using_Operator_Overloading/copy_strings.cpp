// Copy strings using operator overloading

#include <iostream>
#include <cstring>
using namespace std;

class copyStr
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
    cout << str << endl;
  }

  // overloading = operator for copying string
  char *operator=(copyStr c)
  {
    strcpy(str, c.str);
    return str;
  }
};

// driver code
int main()
{
  copyStr c1, c2;
  c1.getData();
  cout << "Original String: ";
  c1.showData();

  // calling overloaded = operator for copying string
  c2 = c1;
  cout << "Copied String: ";
  c2.showData();
  return 0;
}