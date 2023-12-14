# ⚡Inline functions, default and constant arguments in C++

## Inline functions

- An inline function is a function that is expanded in line when it is called.
- When the inline function is called whole code of the inline function gets inserted or substituted at the point of the inline function call.
- This substitution is performed by the C++ compiler at compile time.
- An inline function may increase efficiency if it is small by reducing function overhead specially for small functions.

## Syntax

```cpp
  inline return_type function_name(parameters)
  {
    // function code
  }
```

- Example:

```cpp
  inline void displayNum(int num)
  {
    cout << num << endl;
  }
```

## Things to consider

- Inline function is only a request to the compiler, not a command.
- If a function contains a loop. (for, while and do-while)
- If a function contains static variables.
- If a function is recursive.
- If a function return type is other than void, and the return statement doesn’t exist in a function body.
- If a function contains a switch or goto statement.

## Default arguments

- A default argument is a value provided in a function declaration that is automatically assigned by the compiler if the calling function doesn’t provide a value for the argument.
- In case any value is passed, the default value is overridden.
- Example:

```cpp
  void sum(int a, int b = 3)
  {
    int c = a + b;
    cout << "Sum:" << c;
  }

  int main()
  {
    sum(5);
    return 0;
  }
```

## Constant arguments

- A constant argument is the one whose modification cannot take place by the function.
- Example:

```cpp
  void len(const int num)
  {
    // this is not allowed
    num = 4;
  }

  int main()
  {
    len(321);
    return 0;
  }
```

## Programs

```cpp
// CPP Program to demonstrate constant arguments

#include <iostream>
using namespace std;

void len(const int num)
{
  // this is not allowed
  num = 4;
}

int main()
{
  len(321);
  return 0;
}
```

```cpp
// CPP Program to demonstrate default arguments

#include <iostream>
using namespace std;

// function with default arguments
int sum(int x, int y, int z = 0, int w = 0)
{
  return (x + y + z + w);
}

int main()
{
  cout << sum(10, 15) << endl;
  cout << sum(10, 15, 25) << endl;
  cout << sum(10, 15, 25, 30) << endl;
  return 0;
}
```

```cpp
// CPP Program to demonstrate inline function

#include <iostream>
using namespace std;

// inline function
inline int cube(int s)
{
  return s * s * s;
}

int main()
{
  cout << "The cube of 3 is: " << cube(3) << "\n";
  return 0;
}

```
