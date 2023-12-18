# ⚡Overloading Equality Operator (== and !=)

## Equality Operator

- The equality operators, equal to (==) and not equal to (!=), have lower precedence than the relational operators, but they behave similarly.
- The result type for these operators is bool.

## Equal-to-operator

- The equal-to operator (==) returns true if both operands have the same value; otherwise, it returns false.

#### Example

```cpp
// comparing two objects without overloading == operator

#include <iostream>
using namespace std;

class test
{
  int a;

public:
  void get()
  {
    cin >> a;
  }
  void compare(test t2) // function to compare two objects
  {
    if (a == t2.a)
      cout << "Objects are equal.";
    else
      cout << "Object are not equal";
  }
};

int main()
{
  test t1, t2;
  cout << "Enter value of a for t1 object: ";
  t1.get();
  cout << "Enter value of a for t2 object: ";
  t2.get();
  t1.compare(t2); // calling compare function
  return 0;
}
```

```cpp
// comparing two objects with overloading == operator

#include <iostream>
using namespace std;

class test
{
  int a;

public:
  void get()
  {
    cin >> a;
  }
  void operator==(test t2) // overloading == operator
  {
    if (a == t2.a)
      cout << "Objects are equal.";
    else
      cout << "Object are not equal";
  }
};

int main()
{
  test t1, t2;
  cout << "Enter value of a for t1 object: ";
  t1.get();
  cout << "Enter value of a for t2 object: ";
  t2.get();
  t1 == t2; // calling overloaded == operator
  return 0;
}
```

## Not-equal-to operator

- The not-equal-to operator (!=) returns true if the operands don't have the same value; otherwise, it returns false.

#### Example

```cpp
// comparing two objects without overloading != operator

#include <iostream>
using namespace std;

class test
{
  int a;

public:
  void get()
  {
    cin >> a;
  }
  void compare(test t2) // function to compare two objects
  {
    if (a != t2.a)
      cout << "Objects are not equal.";
    else
      cout << "Object are equal";
  }
};

int main()
{
  test t1, t2;
  cout << "Enter value of a for t1 object: ";
  t1.get();
  cout << "Enter value of a for t2 object: ";
  t2.get();
  t1.compare(t2); // calling compare function
  return 0;
}
```

```cpp
// comparing two objects with overloading != operator

#include <iostream>
using namespace std;

class test
{
  int a;

public:
  void get()
  {
    cin >> a;
  }
  void operator!=(test t2) // overloading != operator
  {
    if (a != t2.a)
      cout << "Objects are not equal.";
    else
      cout << "Object are equal";
  }
};

int main()
{
  test t1, t2;
  cout << "Enter value of a for t1 object: ";
  t1.get();
  cout << "Enter value of a for t2 object: ";
  t2.get();
  t1 != t2; // calling overloaded != operator
  return 0;
}
```
