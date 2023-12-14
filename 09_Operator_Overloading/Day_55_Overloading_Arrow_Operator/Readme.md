# ⚡Overloading Arrow Operator

## Arrow Operator

- The -> (arrow) operator is used to access class, structure or union members using a pointer.
- The Dot(.) operator is used to normally access members of a class, structure or union.
- But, the Arrow(->) operator is used to access the members of the class, structure or union using pointers.
- Arrow (->) operator in C++ represents the same meaning which is done by the (\*) asterisk operator and dot(.) operator i.e. to dereference a pointer.
- The overloaded -> operator returns a pointer to the current instance of the class, which is represented by "this" pointer.

### Example

```cpp
// Overloading arrow -> operator

#include <iostream>
using namespace std;

class test
{
  int a;

public:
  void setData(void)
  {
    cout << "Enter value of a: ";
    cin >> a;
  }

  void showData(void)
  {
    cout << "Value of a: ";
    cout << a;
  }

  test *operator->() // overloading arrow -> operator
  {
    return this;
  }
};

int main()
{
  test t;
  t->setData();  // calling overloaded arrow -> operator
  t->showData(); // calling overloaded arrow -> operator
  return 0;
}
```

```
Output:
Enter value of a: 3
Value of a: 3
```
