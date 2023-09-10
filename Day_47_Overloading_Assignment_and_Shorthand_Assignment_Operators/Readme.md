# ⚡Overloading Assignment Operators (= += -= \*= /= %=)

## Assignment Operators

- Assignment operators are used to assigning value to a variable.
- The left side operand of the assignment operator is a variable and right side operand of the assignment operator is a value.
- The value on the right side must be of the same data-type of the variable on the left side.
- "=": This is the simplest assignment operator. This operator is used to assign the value on the right to the variable on the left.
- "+=": This operator is combination of "+" and "=" operators. This operator first adds the current value of the variable on left to the value on the right and then assigns the result to the variable on the left.
- "-=": This operator is combination of "-" and "=" operators. This operator first subtracts the current value of the variable on left from the value on the right and then assigns the result to the variable on the left.
- "\*=": This operator is combination of "\*" and "=" operators. This operator first multiplies the current value of the variable on left to the value on the right and then assigns the result to the variable on the left.
- "/=": This operator is combination of "/" and "=" operators. This operator first divides the current value of the variable on left by the value on the right and then assigns the result to the variable on the left.
- "%=": This operator is combination of "%" and "=" operators. This operator first divides the current value of the variable on left by the value on the right and then assigns the remainder to the variable on the left.

### Examples

```cpp
// Overloading assignment = operator

#include <iostream>
using namespace std;

class assign
{
  int a;

public:
  void get(void)
  {
    cin >> a;
  }
  void show(void)
  {
    cout << a << endl;
  }
  void operator=(assign o) // overloading assignment = operator
  {
    a = o.a;
  }
};

int main()
{
  assign o1, o2;
  cout << "Enter value of a: ";
  o2.get();
  o1 = o2; // calling overloaded assignment = operator
  cout << "Value of o1: ";
  o1.show();
  cout << "Value of o2: ";
  o2.show();
  return 0;
}
```

```
Output:
Enter value of a: 3
Value of o1: 3
Value of o2: 3
```

```cpp
// Overloading shorthand += operator

#include <iostream>
using namespace std;

class shortHand
{
  int a;

public:
  void get(void)
  {
    cin >> a;
  }
  void show(void)
  {
    cout << a << endl;
  }
  void operator+=(shortHand o) // overloading shorthand += operator
  {
    a = a + o.a;
  }
};

int main()
{
  shortHand o1, o2;
  cout << "Enter value of a for o1: ";
  o1.get();
  cout << "Enter value of a for o2: ";
  o2.get();
  o1 += o2; // calling overloaded shorthand += operator
  cout << "Value of o1: ";
  o1.show();
  cout << "Value of o2: ";
  o2.show();
  return 0;
}
```

```
Output:
Enter value of a for o1: 1
Enter value of a for o2: 2
Value of o1: 3
Value of o2: 2
```

```cpp
// Overloading shorthand -= operator

#include <iostream>
using namespace std;

class shortHand
{
  int a;

public:
  void get(void)
  {
    cin >> a;
  }
  void show(void)
  {
    cout << a << endl;
  }
  void operator-=(shortHand o) // overloading shorthand -= operator
  {
    a = a - o.a;
  }
};

int main()
{
  shortHand o1, o2;
  cout << "Enter value of a for o1: ";
  o1.get();
  cout << "Enter value of a for o2: ";
  o2.get();
  o1 -= o2; // calling overloaded shorthand -= operator
  cout << "Value of o1: ";
  o1.show();
  cout << "Value of o2: ";
  o2.show();
  return 0;
}
```

```
Output:
Enter value of a for o1: 3
Enter value of a for o2: 2
Value of o1: 1
Value of o2: 2
```

```cpp
// Overloading shorthand *= operator

#include <iostream>
using namespace std;

class shortHand
{
  int a;

public:
  void get(void)
  {
    cin >> a;
  }
  void show(void)
  {
    cout << a << endl;
  }
  void operator*=(shortHand o) // overloading shorthand *= operator
  {
    a = a * o.a;
  }
};

int main()
{
  shortHand o1, o2;
  cout << "Enter value of a for o1: ";
  o1.get();
  cout << "Enter value of a for o2: ";
  o2.get();
  o1 *= o2; // calling overloaded shorthand *= operator
  cout << "Value of o1: ";
  o1.show();
  cout << "Value of o2: ";
  o2.show();
  return 0;
}
```

```
Output:
Enter value of a for o1: 2
Enter value of a for o2: 3
Value of o1: 6
Value of o2: 3
```

```cpp
// Overloading shorthand /= operator

#include <iostream>
using namespace std;

class shortHand
{
  int a;

public:
  void get(void)
  {
    cin >> a;
  }
  void show(void)
  {
    cout << a << endl;
  }
  void operator/=(shortHand o) // overloading shorthand /= operator
  {
    a = a /= o.a;
  }
};

int main()
{
  shortHand o1, o2;
  cout << "Enter value of a for o1: ";
  o1.get();
  cout << "Enter value of a for o2: ";
  o2.get();
  o1 /= o2; // calling overloaded shorthand /= operator
  cout << "Value of o1: ";
  o1.show();
  cout << "Value of o2: ";
  o2.show();
  return 0;
}
```

```
Output:
Enter value of a for o1: 4
Enter value of a for o2: 2
Value of o1: 2
Value of o2: 2
```

```cpp
// Overloading shorthand %= operator

#include <iostream>
using namespace std;

class shortHand
{
  int a;

public:
  void get(void)
  {
    cin >> a;
  }
  void show(void)
  {
    cout << a << endl;
  }
  void operator%=(shortHand o) // overloading shorthand %= operator
  {
    a = a %= o.a;
  }
};

int main()
{
  shortHand o1, o2;
  cout << "Enter value of a for o1: ";
  o1.get();
  cout << "Enter value of a for o2: ";
  o2.get();
  o1 %= o2; // calling overloaded shorthand %= operator
  cout << "Value of o1: ";
  o1.show();
  cout << "Value of o2: ";
  o2.show();
  return 0;
}
```

```
Output:
Enter value of a for o1: 4
Enter value of a for o2: 2
Value of o1: 0
Value of o2: 2
```
