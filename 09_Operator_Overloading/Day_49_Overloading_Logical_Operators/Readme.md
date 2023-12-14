# ⚡Overloading Logical Operators (&& || !)

## Logical Operators

- Logical operators are symbols that allow you to combine or modify conditions to make logical evaluations.
- They are used to perform logical operations on boolean values (true or false).
- Logical AND Operator (&&): It is a binary operator that returns true if both of its operands are true. Otherwise, it returns false.
- Logical OR Operator (||): It is a binary operator that returns true if at least one of its operands is true. It returns false only when both operands are false.
- Logical NOT Operator (!): It is a unary operator that is used to negate the value of a condition. It returns true if the condition is false, and false if the condition is true.

### Examples

```cpp
// Overloading logical AND && operator

#include <iostream>
using namespace std;

class logicalAnd
{
  int a;

public:
  void get()
  {
    cin >> a;
  }

  void show(void)
  {
    cout << "a: " << a << endl;
  }

  int operator&&(logicalAnd t) // overloading logical AND && operator
  {
    int x;
    x = a && t.a;
    return x;
  }
};

int main()
{
  logicalAnd t1, t2;
  cout << "Enter value of a for t1: ";
  t1.get();
  cout << "Enter value of a for t2: ";
  t2.get();
  int res = t1 && t2; // calling overloaded logical AND && operator
  cout << res;
  return 0;
}
```

```
Output:
Enter value of a for t1: 1
Enter value of a for t2: 2
1
```

```cpp
// Overloading logical OR || operator

#include <iostream>
using namespace std;

class logicalOr
{
  int a;

public:
  void get()
  {
    cin >> a;
  }

  void show(void)
  {
    cout << "a: " << a << endl;
  }

  int operator||(logicalOr t) // overloading logical OR || operator
  {
    int x;
    x = a || t.a;
    return x;
  }
};

int main()
{
  logicalOr t1, t2;
  cout << "Enter value of a for t1: ";
  t1.get();
  cout << "Enter value of a for t2: ";
  t2.get();
  int res = t1 || t2; // calling overloaded logical OR || operator
  cout << res;
  return 0;
}
```

```
Output:
Enter value of a for t1: 1
Enter value of a for t2: 0
1
```

```cpp
// Overloading logical not ! operator

#include <iostream>
using namespace std;

class logicalNot
{
  int a;

public:
  void get()
  {
    cin >> a;
  }

  void show(void)
  {
    cout << "a: " << a << endl;
  }

  void operator!() // overloading logical not ! operator
  {
    a = !a;
  }
};

int main()
{
  logicalNot t;
  cout << "Enter value of a for t: ";
  t.get();
  cout << "Value before operator overloading: " << endl;
  t.show();
  cout << "Value after operator overloading: " << endl;
  !t; // calling overloaded logical not ! operator
  t.show();
  return 0;
}
```

```
Output:
Enter value of a for t: 3
Value before operator overloading:
a: 3
Value after operator overloading:
a: 0
```
