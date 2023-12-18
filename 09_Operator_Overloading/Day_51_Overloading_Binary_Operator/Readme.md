# ⚡Overloading Binary Operator (+ - \* / %)

## Binary Operator

- These operators operate or work with two operands.
- Addition +
  - Adds two operands
- Subtraction –
  - Subtracts second operand from the first
- Multiplication \*
  - Multiplies two operands
- Division /
  - Divides first operand by the second operand
- Modulo Operation %
  - Returns the remainder of an integer division

### Examples

```cpp
// Overloading Binary + operator

#include <iostream>
using namespace std;

class binaryPlus
{
  float a;

public:
  void get(void)
  {
    cin >> a;
  }

  void show(void)
  {
    cout << "t1 + t2: " << a;
  }

  binaryPlus operator+(binaryPlus t2) // overloading binary + operator
  {
    binaryPlus t3;
    t3.a = a + t2.a;
    return t3;
  }
};

int main()
{
  binaryPlus t1, t2, t3;
  cout << "Enter value of a for t1: ";
  t1.get();
  cout << "Enter value of a for t2: ";
  t2.get();
  t3 = t1 + t2; // calling overloaded binary + operator
  t3.show();
  return 0;
}
```

```
Output:
Enter value of a for t1: 3
Enter value of a for t2: 21
t1 + t2: 24
```

```cpp
// Overloading Binary - operator

#include <iostream>
using namespace std;

class binaryMinus
{
  float a;

public:
  void get(void)
  {
    cin >> a;
  }

  void show(void)
  {
    cout << "t1 - t2: " << a;
  }

  binaryMinus operator-(binaryMinus t2) // overloading binary - operator
  {
    binaryMinus t3;
    t3.a = a - t2.a;
    return t3;
  }
};

int main()
{
  binaryMinus t1, t2, t3;
  cout << "Enter value of a for t1: ";
  t1.get();
  cout << "Enter value of a for t2: ";
  t2.get();
  t3 = t1 - t2; // calling overloaded binary - operator
  t3.show();
  return 0;
}
```

```
Output:
Enter value of a for t1: 8
Enter value of a for t2: 7
t1 - t2: 1
```

```cpp
// Overloading Binary / operator

#include <iostream>
using namespace std;

class binaryDivision
{
  float a;

public:
  void get(void)
  {
    cin >> a;
  }

  void show(void)
  {
    cout << "t1 / t2: " << a;
  }

  binaryDivision operator/(binaryDivision t2) // overloading binary / operator
  {
    binaryDivision t3;
    t3.a = a / t2.a;
    return t3;
  }
};

int main()
{
  binaryDivision t1, t2, t3;
  cout << "Enter value of a for t1: ";
  t1.get();
  cout << "Enter value of a for t2: ";
  t2.get();
  t3 = t1 / t2; // calling overloaded binary / operator
  t3.show();
  return 0;
}
```

```
Output:
Enter value of a for t1: 24
Enter value of a for t2: 12
t1 / t2: 2
```

```cpp
// Overloading Binary * operator

#include <iostream>
using namespace std;

class binaryMultiply
{
  float a;

public:
  void get(void)
  {
    cin >> a;
  }

  void show(void)
  {
    cout << "t1 * t2: " << a;
  }

  binaryMultiply operator*(binaryMultiply t2) // overloading binary * operator
  {
    binaryMultiply t3;
    t3.a = a * t2.a;
    return t3;
  }
};

int main()
{
  binaryMultiply t1, t2, t3;
  cout << "Enter value of a for t1: ";
  t1.get();
  cout << "Enter value of a for t2: ";
  t2.get();
  t3 = t1 * t2; // calling overloaded binary * operator
  t3.show();
  return 0;
}
```

```
Output:
Enter value of a for t1: 8
Enter value of a for t2: 7
t1 * t2: 56
```

```cpp
// Overloading Binary % operator

#include <iostream>
using namespace std;

class binaryDivision
{
  int a;

public:
  void get(void)
  {
    cin >> a;
  }

  void show(void)
  {
    cout << "t1 % t2: " << a;
  }

  binaryDivision operator%(binaryDivision t2) // overloading binary % operator
  {
    binaryDivision t3;
    t3.a = a % t2.a;
    return t3;
  }
};

int main()
{
  binaryDivision t1, t2, t3;
  cout << "Enter value of a for t1: ";
  t1.get();
  cout << "Enter value of a for t2: ";
  t2.get();
  t3 = t1 % t2; // calling overloaded binary % operator
  t3.show();
  return 0;
}
```

```
Output:
Enter value of a for t1: 24
Enter value of a for t2: 13
t1 % t2: 11
```
