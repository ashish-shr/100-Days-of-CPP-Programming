# ⚡Overloading Unary Operators (- ++ -- !)

- Unary operators are the operators that perform operations on a single operand to produce a new value.
- Unary Minus - (changes the sign of its argument. A positive number becomes negative, and a negative number becomes positive.)
- Increment ++ (increment the value of the variable by 1 either post or pre-increment)
- Decrement -- (decrement the value of the variable by 1 either post or pre-decrement)
- NOT ! (Reverse the logical state of its operand. If a condition is true, then the Logical NOT operator will make it false.)

### Examples

```cpp
// Overloading unary - operator

#include <iostream>
using namespace std;

class unaryMinus
{
  int a, b;

public:
  void get()
  {
    cin >> a >> b;
  }

  void show(void)
  {
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
  }

  void operator-() // overloading unary - operator
  {
    a = -a;
    b = -b;
  }
};

int main()
{
  unaryMinus t;
  cout << "Enter value of a and b for t: ";
  t.get();
  cout << "Values before operator overloading: " << endl;
  t.show();
  -t; // calling overloaded unary - operator
  cout << "Values after operator overloading: " << endl;
  t.show();
  return 0;
}
```

```
Output:
Enter value of a and b for t: 8 -7
Values before operator overloading:
a: 8
b: -7
Values after operator overloading:
a: -8
b: 7
```

```cpp
// Overloading increment ++ operator

#include <iostream>
using namespace std;

class increment
{
  int a;

public:
  increment()
  {
    a = 0;
  }

  void show(void)
  {
    cout << "a: " << a << endl;
  }

  void operator++() // overloading pre-increment ++ operator
  {
    a = a + 1; // pre-increment
  }

  void operator++(int) // overloading post-increment ++ operator
  {
    a = a + 1; // post-increment
  }
};

int main()
{
  increment t;

  cout << "Value before operator overloading: " << endl;
  t.show();

  cout << "Value after pre-increment operator overloading: " << endl;
  ++t; // calling overloaded pre-increment ++ operator
  t.show();

  cout << "Value before operator overloading: " << endl;
  t.show();

  cout << "Value after post-increment operator overloading: " << endl;
  t++; // calling overloaded post-increment ++ operator
  t.show();

  return 0;
}
```

```
Output:
Value before operator overloading:
a: 0
Value after pre-increment operator overloading:
a: 1
Value before operator overloading:
a: 1
Value after post-increment operator overloading:
a: 2
```

```cpp
// Overloading decrement -- operator

#include <iostream>
using namespace std;

class decrement
{
  int a;

public:
  decrement()
  {
    a = 3;
  }

  void show(void)
  {
    cout << "a: " << a << endl;
  }

  void operator--() // overloading pre-decrement -- operator
  {
    a = a - 1; // pre-decrement
  }

  void operator--(int) // overloading post-decrement -- operator
  {
    a = a - 1; // post-decrement
  }
};

int main()
{
  decrement t;

  cout << "Value before operator overloading: " << endl;
  t.show();

  cout << "Value after pre-decrement operator overloading: " << endl;
  --t; // calling overloaded pre-decrement -- operator
  t.show();

  cout << "Value before operator overloading: " << endl;
  t.show();

  cout << "Value after post-decrement operator overloading: " << endl;
  t--; // calling overloaded post-decrement -- operator
  t.show();

  return 0;
}
```

```
Output:
Value before operator overloading:
a: 3
Value after pre-decrement operator overloading:
a: 2
Value before operator overloading:
a: 2
Value after post-decrement operator overloading:
a: 1
```

```cpp
// Overloading unary ! operator

#include <iostream>
using namespace std;

class unaryNot
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

  void operator!() // overloading unary ! operator
  {
    a = !a;
  }
};

int main()
{
  unaryNot t;
  cout << "Enter value of a for t: ";
  t.get();
  cout << "Value before operator overloading: " << endl;
  t.show();
  cout << "Value after operator overloading: " << endl;
  !t; // calling overloaded unary ! operator
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
