# ⚡Lambda Expressions in C++

## Lambda Expressions

- Lambda functions are similar to user-defined functions but without a name.
- They're commonly referred to as anonymous functions.
- Once we have them set up, we can either give them names and call them, or we can even get them to do things directly.
- Lambda functions are efficient whenever you want to create a function that will only contain simple expressions – that is, expressions that are usually a single line of a statement.

## Lambda Function Signature

### Syntax

```cpp
[capture_list](parameters) ->return_type
{
  //function body
};
```

### Examples

```cpp
#include <iostream>

int main()
{
  //lambda function
  []()
  {
    std::cout << "Good Morning" << std::endl;
  };
  //does nothing because we have not called it yet
  return 0;
}
```

```cpp
// call lambda function directly after definition

#include <iostream>

int main()
{
  // lambda function
  []()
  {
    std::cout << "Good Morning" << std::endl;
  }(); // Good Morning

  return 0;
}
```

```
Output:
Good Morning
```

```cpp
#include <iostream>

int main()
{
  // lambda function assigned to a auto variable
  auto func = []()
  {
    std::cout << "Good Morning" << std::endl;
  };
  func(); //Good Morning
  return 0;
}
```

```
Output:
Good Morning
```

```cpp
// lambda function that takes parameters

#include <iostream>

int main()
{
  // lambda function
  [](int a, int b) // parameters as integer a and b
  {
    std::cout << "a + b: " << a + b << std::endl;
  }(3, 21); // 24

  return 0;
}
```

```
Output:
a + b: 24
```

```cpp
// lambda function that takes parameters [2]

#include <iostream>

int main()
{
  // lambda function
  auto sum = [](int a, int b) // parameters as integer a and b
  {
    std::cout << "a + b: " << a + b << std::endl;
  };
  sum(10, 20); // 30
  sum(8, 7);   // 15

  return 0;
}
```

```
Output:
a + b: 30
a + b: 15
```

```cpp
// lambda function that takes parameters [3]

#include <iostream>

int main()
{
  int a, b;
  std::cout << "Enter a and b: " << std::endl;
  std::cin >> a >> b; // 10 20

  // lambda function
  auto sum = [](int a, int b) // parameters as integer a and b
  {
    std::cout << "a + b: " << a + b << std::endl;
  };
  sum(a, b); // 30
  return 0;
}
```

```
Output:
Enter a and b:
10 20
a + b: 30
```

```cpp
// lambda function that returns something

#include <iostream>

int main()
{
  // lambda function
  auto sum = [](int a, int b)
  {
    return (a + b);
  }(3, 21);
  std::cout << "sum: " << sum << std::endl; // 24

  return 0;
}
```

```
Output:
sum: 24
```

```cpp
// lambda function that returns something [2]

#include <iostream>

int main()
{
  // lambda function
  auto sum = [](int a, int b)
  {
    return (a + b);
  };
  std::cout << "sum: " << sum(8, 7) << std::endl; // 24

  return 0;
}
```

```
Output:
sum: 15
```

```cpp
// lambda function that print directly

#include <iostream>

int main()
{
  // lambda function
  std::cout << "sum: " << [](int a, int b)
  {
    return (a + b);
  }(3, 21) << std::endl; // 24

  return 0;
}
```

```
Output:
sum: 24
```

```cpp
// lambda function that specify return type

#include <iostream>

int main()
{
  // lambda function
  auto sum = [](double a, double b) -> int
  {
    return (a + b); // 8.7 + 3.21 -> 8 + 7 -> 11
  }(8.7, 3.21);
  std::cout << "sum: " << sum << std::endl; // 11

  return 0;
}
```

```
Output:
sum: 11
```
