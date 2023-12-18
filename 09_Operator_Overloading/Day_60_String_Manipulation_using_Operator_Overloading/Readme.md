# ⚡String Manipulation using Operator Overloading

## String Manipulation

- In C++, operator overloading allows us to define custom behaviors for operators when applied to objects of user-defined classes.
- This feature can be particularly useful for string manipulation, where we can create custom classes to represent strings and overload operators to perform various operations on these string objects.
- We can overload the assignment operator (=) to copy one string to another.
- We can overload the addition operator (+) to perform string concatenation like regular strings.
- We can overload the comparison operators (==, !=, <, >, <=, >=) to compare strings for equality and order and so on.

### Examples

```cpp
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
```

```
Output:
Enter a string: Education
Original String: Education
Copied String: Education
```

```cpp
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
```

```
Output:
Enter a string: Love
String: Love
Enter a string: Hope
String: Hope
Strings are not equal.
```

```
Output:
Enter a string: Hope
String: Hope
Enter a string: Hope
String: Hope
Strings are equal.
```

```cpp
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
```

```
Output:
Enter a string: Help
String: Help
Enter a string: Others
String: Others
String: HelpOthers
```
