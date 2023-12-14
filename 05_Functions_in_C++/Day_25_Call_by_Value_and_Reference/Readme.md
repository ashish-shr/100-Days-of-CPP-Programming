# ⚡Call by value and Call by reference

## Call by value and Call by reference in C++

There are two ways to pass value or data to function i.e. call by value and call by reference. Original value is not modified in call by value but it is modified in call by reference.

## Call by value in C++

- In call by value, original value is not modified.
- In call by value, value being passed to the function is locally stored by the function parameter in stack memory location.
- If we change the value of function parameter, it is changed for the current function only.
- It will not change the value of variable inside the caller method such as main().

#### Example:

```cpp
#include <iostream>
using namespace std;
void change(int data);

int main()
{
  int data = 3;
  change(data);
  cout << "Value of the data is: " << data << endl;
  return 0;
}

void change(int data)
{
  data = 8;
}
```

## Call by reference in C++

- In call by reference, original value is modified because we pass reference (address).
- Here, address of the value is passed in the function, so actual and formal arguments share the same address space.
- Hence, value changed inside the function, is reflected inside as well as outside the function.

#### Example:

```cpp
#include <iostream>
using namespace std;
void swap(int *, int *);

int main()
{
  int x = 3, y = 21;
  swap(&x, &y); // passing value to function
  cout << "Value of x is: " << x << endl;
  cout << "Value of y is: " << y << endl;
  return 0;
}

void swap(int *x, int *y)
{
  int tmp;
  tmp = *x;
  *x = *y;
  *y = tmp;
}
```
