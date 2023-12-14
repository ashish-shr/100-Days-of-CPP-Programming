# ⚡Overloading Comparision or Relational Operators

## Comparision Operators (Relational Operators)

- Comparison operators are operators used for comparing two elements, these are mostly used with if-else conditions as they return true-false as result.
- Greater than (>) : this operator checks whether operand1 is greater than operand2. If the result turns out to be true, it returns true or else returns false.
- Greater than or equal to (>=) : this operator checks whether operand1 is greater than or equal to operand2. If the result turns out to be true, it returns true or else returns false.
- Less than (<) : this operator checks whether operand1 is lesser than operand2. If the result turns out to be true, it returns true or else returns false.
- Less than or equal to (<=) : this operator checks whether operand1 is lesser than or equal to operand2. If the result turns out to be true, it returns true or else returns false.

### Examples

```cpp
// Overloading greater than > operator

#include <iostream>
using namespace std;

class test
{
  int a;

public:
  void get(void)
  {
    cin >> a;
  }
  int operator>(test t) // overloading greater than > operator
  {
    if (a > t.a)
      return 1;
    else
      return 0;
  }
};

int main()
{
  test t1, t2;
  cout << "Enter value of a for t1: ";
  t1.get();
  cout << "Enter value of a for t2: ";
  t2.get();
  if (t1 > t2) // calling overloaded greater than > operator
    cout << "t1 is greater!";
  else
    cout << "t2 is greater!";
  return 0;
}
```

```
Output:
Enter value of a for t1: 3
Enter value of a for t2: 21
t2 is greater!
```

```cpp
// Overloading greater than or equal >= operator

#include <iostream>
using namespace std;

class test
{
  int a;

public:
  void get(void)
  {
    cin >> a;
  }
  int operator>=(test t) // overloading greater than or equal >= operator
  {
    if (a >= t.a)
      return 1;
    else
      return 0;
  }
};

int main()
{
  test t1, t2;
  cout << "Enter value of a for t1: ";
  t1.get();
  cout << "Enter value of a for t2: ";
  t2.get();
  if (t1 >= t2) // calling overloaded greater than or equal >= operator
    cout << "t1 is greater or equal to t2!";
  else
    cout << "t2 is greater or equal to t1!";
  return 0;
}
```

```
Output:
Enter value of a for t1: 8
Enter value of a for t2: 8
t1 is greater or equal to t2!
```

```cpp
// Overloading less than < operator

#include <iostream>
using namespace std;

class test
{
  int a;

public:
  void get(void)
  {
    cin >> a;
  }
  int operator<(test t) // overloading less than < operator
  {
    if (a < t.a)
      return 1;
    else
      return 0;
  }
};

int main()
{
  test t1, t2;
  cout << "Enter value of a for t1: ";
  t1.get();
  cout << "Enter value of a for t2: ";
  t2.get();
  if (t1 < t2) // calling overloaded less than < operator
    cout << "t1 is lesser!";
  else
    cout << "t2 is lesser!";
  return 0;
}
```

```
Output:
Enter value of a for t1: 8
Enter value of a for t2: 7
t2 is lesser!
```

```cpp
// Overloading less than or equal <= operator

#include <iostream>
using namespace std;

class test
{
  int a;

public:
  void get(void)
  {
    cin >> a;
  }
  int operator<=(test t) // overloading less than or equal <= operator
  {
    if (a <= t.a)
      return 1;
    else
      return 0;
  }
};

int main()
{
  test t1, t2;
  cout << "Enter value of a for t1: ";
  t1.get();
  cout << "Enter value of a for t2: ";
  t2.get();
  if (t1 <= t2) // calling overloaded less than or equal <= operator
    cout << "t1 is lesser or equal to t2!";
  else
    cout << "t2 is lesser or equal to t1!";
  return 0;
}
```

```
Output:
Enter value of a for t1: 7
Enter value of a for t2: 8
t1 is lesser or equal to t2!
```
