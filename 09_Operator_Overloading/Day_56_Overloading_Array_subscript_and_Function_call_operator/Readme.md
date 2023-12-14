# ⚡Overloading Array Subscript and Function Call Operator

## Array Subscript Operator

- The Subscript or Array Index Operator is denoted by "[]".
- This operator is generally used with arrays to retrieve and manipulate the array elements.
- This is a binary operator.
- Overloading [] allows us to access elements of an object of our class using array-like syntax.
- It's particularly useful when our class represents a collection of elements.

### Example

```cpp
// Overloading array subscript[] operator

#include <iostream>
using namespace std;

class test
{
  int a[3];

public:
  void getData(int x, int y, int z)
  {
    a[0] = x;
    a[1] = y;
    a[2] = z;
  }

  int operator[](int index) // overloading array subscript[] operator
  {
    return a[index];
  }
};

int main()
{
  test t;
  t.getData(3, 2, 1);
  cout << "Array..." << endl;

  // calling overloaded array subscript[] operator
  cout << "t[0]: " << t[0] << endl;
  cout << "t[1]: " << t[1] << endl;
  cout << "t[2]: " << t[2] << endl;
  return 0;
}
```

```
Output:
Array...
t[0]: 3
t[1]: 2
t[2]: 1
```

## Function Call Operator

- The function call operator is denoted by "()" which is used to call function and pass parameters.
- When the function call operator is overloaded, an operator function is created that can be used to pass parameters.
- Overloading () allows us to make objects of our class callable like functions.
- This is useful when we want to encapsulate some behavior that should be triggered by invoking an object.

### Example

```cpp
// Overloading function call() operator

#include <iostream>
using namespace std;

class test
{
  int a, b;

public:
  test()
  {
    cout << "default constructor called..." << endl;
    a = 0;
    b = 0;
  }

  test(int x, int y)
  {
    cout << "parameterized constructor called..." << endl;
    a = x;
    b = y;
  }

  void showData(void)
  {
    cout << "value of a: " << a << endl;
    cout << "value of b: " << b << endl;
  }

  void operator()(int x, int y) // overloading function call() operator
  {
    cout << "() operator called..." << endl;
    a = x;
    b = y;
  }
};

int main()
{
  test t1;
  t1.showData();
  test t2(8, 7);
  t2.showData();
  t2(6, 8); // calling overloaded function call() operator
  t2.showData();
  return 0;
}
```

```
Output:
default constructor called...
value of a: 0
value of b: 0
parameterized constructor called...
value of a: 8
value of b: 7
() operator called...
value of a: 6
value of b: 8
```
