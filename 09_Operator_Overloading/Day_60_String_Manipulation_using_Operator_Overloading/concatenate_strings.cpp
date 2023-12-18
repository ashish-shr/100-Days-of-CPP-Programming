// Concatenate two strings using operator overloading

#include <iostream>
#include <cstring>
using namespace std;

class concatenate
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

  // overloading + operator for string concatenation
  char *operator+(concatenate c)
  {
    strcpy(str, strcat(str, c.str));
    return str;
  }
};

// driver code
int main()
{
  concatenate c1, c2;
  c1.getData();
  c1.showData();
  c2.getData();
  c2.showData();

  // calling overloaded + operator for string concatenation
  c1 + c2;
  c1.showData();
  return 0;
}