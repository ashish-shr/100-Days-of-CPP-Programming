# ⚡Capture Lists in Lambda Expressions

## Capture Lists

- A capture list is a way to capture external variables in the scope of the lambda.
- In other words, a capture list in a lambda function allows we to specify which external variables the lambda should have access to and whether it should access them by reference or by value.

### Example

Consider a lambda function:

```cpp
auto lambda = []() {
    // lambda body
};
```

Now, let's say we want to use some variables from the surrounding scope inside the lambda. That's where the capture list comes in.

Let's say we want to use a and b inside our lambda expression

```cpp
#include <iostream>

int main()
{
  int a{3};
  int b{21};

  // lambda function
  auto sum = []()
  {
    std::cout << "a + b: " << (a + b) << std::endl;
  }(); // this will give an error

  return 0;
}
```

In the above example, we cannot simply use variables a and b inside the lambda expression. That will give an error. So, we need to specify the capture list in order to do so.

## Capturing By Value

- In capture by value, what we have in the lambda function or expression is just a copy.
- So, it does not affect the original value of our variable.

### Example

```cpp
// capturing by value

#include <iostream>

int main()
{
  int var{3};

  // value
  auto func = [var]()
  {
    std::cout << "Inner value: " << var << std::endl;
  };

  for (int i = 0; i < 5; i++)
  {
    std::cout << "Outer value: " << var << std::endl;
    func();
    ++var;
  }
}
```

```
Output:
Outer value: 3
Inner value: 3
Outer value: 4
Inner value: 3
Outer value: 5
Inner value: 3
Outer value: 6
Inner value: 3
Outer value: 7
Inner value: 3
```

## Capturing by Reference

- In capture by reference, what we have in the lambda function or expression is the original value.
- So, it does affect the original value of our variable.

### Example

```cpp
// capturing by reference

#include <iostream>

int main()
{
  int var{3};

  // reference
  auto func = [&var]()
  {
    std::cout << "Inner value: " << var << std::endl;
  };

  for (int i = 0; i < 5; i++)
  {
    std::cout << "Outer value: " << var << std::endl;
    func();
    var++;
  }
}
```

```
Output:
Outer value: 3
Inner value: 3
Outer value: 4
Inner value: 4
Outer value: 5
Inner value: 5
Outer value: 6
Inner value: 6
Outer value: 7
Inner value: 7
```

## Capturing all by value

- If we want to capture all external variables by value, we can use the capture list `=`.
- This is useful when we want to make a copy of all external variables in the lambda function.

```cpp
// capturing all by value

#include <iostream>

int main()
{
  int var{3};

  // value
  auto func = [=]()
  {
    std::cout << "Inner value: " << var << std::endl;
  };

  for (int i = 0; i < 5; i++)
  {
    std::cout << "Outer value: " << var << std::endl;
    func();
    ++var;
  }
}
```

```
Output:
Outer value: 3
Inner value: 3
Outer value: 4
Inner value: 3
Outer value: 5
Inner value: 3
Outer value: 6
Inner value: 3
Outer value: 7
Inner value: 3
```

## Capturing all by reference

- If we want to capture all external variables by reference, we can use the capture list `&`.
- This means that the lambda will have access to all external variables by reference, allowing it to modify the original variables in the outer scope.

```cpp
// capturing all by reference

#include <iostream>

int main()
{
  int var{3};

  // reference
  auto func = [&]()
  {
    std::cout << "Inner value: " << var << std::endl;
  };

  for (int i = 0; i < 5; i++)
  {
    std::cout << "Outer value: " << var << std::endl;
    func();
    var++;
  }
}
```

```
Output:
Outer value: 3
Inner value: 3
Outer value: 4
Inner value: 4
Outer value: 5
Inner value: 5
Outer value: 6
Inner value: 6
Outer value: 7
Inner value: 7
```
