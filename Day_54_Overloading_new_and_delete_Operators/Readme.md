# ⚡Overloading new and delete operators

## new operator

- The "new" operator in C++ is used to allocate memory dynamically for a variable or an object at runtime.

### Syntax

```cpp
  void *operator new(size_t size);
```

- The overloaded new operator receives size of type size_t, which specifies the number of bytes of memory to be allocated.
- The return type of the overloaded new must be void\*.The overloaded function returns a pointer to the beginning of the block of memory allocated.

## delete operator

- The "delete" operator is used to deallocate memory that the "new" operator previously allocated.

### Syntax

```cpp
   void operator delete(void*);
```

- The function receives a parameter of type void\* which has to be deleted. Function should not return anything.

### Examples

```cpp
// Overloading new and delete operators for specific class

#include <iostream>
#include <cstdlib>
using namespace std;

class test
{
public:
  // overloading new operator
  void *operator new(size_t size)
  {
    cout << "calling our overloaded new operator..." << endl;
    void *p = malloc(size);
    return p;
  }

  // overloading delete operator
  void operator delete(void *p)
  {
    cout << "calling our overloaded delete operator..." << endl;
    free(p);
  }
};

int main()
{
  test *optr = new test; // overloaded new operator is called
  delete (optr);         // overloaded delete operator is called
  return 0;
}
```

```
Output:
calling our overloaded new operator...
calling our overloaded delete operator...
```

```cpp
// Overloading new and delete operators globally

/*
Note: In general, overloading "new" and "delete" operators globally
for built-in types can work, but it's essential to be aware that the
behavior can vary, and it might not always be portable or consistent
across different environments.
*/

#include <iostream>
#include <cstdlib>
using namespace std;

// overloading new operator
void *operator new(size_t size)
{
  cout << "calling our overloaded new operator..." << endl;
  void *p = malloc(size);
  return p;
}

// overloading delete operator
void operator delete(void *p)
{
  cout << "calling our overloaded delete operator..." << endl;
  free(p);
}

int main()
{
  int *ptr = new int; // overloaded new operator is called
  delete (ptr);       // overloaded delete operator is called
  return 0;
}
```

### Note

- New and Delete operators can be overloaded globally or they can be overloaded for specific classes.
- If these operators are overloaded using member function for a class, it means that these operators are overloaded only for that specific class.
- If overloading is done outside a class (i.e. it is not a member function of a class), the overloaded "new" and "delete" will be called anytime we make use of these operators (within classes or outside classes). This is global overloading.
- Both overloaded new and delete operator functions are static members by default. Therefore, they don’t have access to "this" pointer .
- Operator overloading works for user-defined types (e.g., classes), but it does not apply to built-in types like int.
- In general, overloading "new" and "delete" operators globally for built-in types can work, but it's essential to be aware that the behavior can vary, and it might not always be portable or consistent across different environments.
