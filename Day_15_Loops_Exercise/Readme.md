# ⚡Problems Regarding Loop Control Structure

## Problems

1. Program to calculate sum of odd integers from 1 to 15 (inclusive) using for loop.
2. Program to find factorial of n number.
3. Program to generate multiplicative table of n number.
4. Program to display fibonacci series of n numbers.
5. Program to reverse a number.
6. Program to calculate power of number.

## Programs

```cpp
// 1. Calculate sum of odd integers from 1 to 15 (inclusive) using for loop.

#include <iostream>
using namespace std;

int main()
{
  int sum;
  for (int i = 1; i <= 15; i++)
  {
    if ((i % 2) != 0)
      sum = sum + i;
  }
  cout << "Sum: " << sum;
  return 0;
}
```

```cpp
// 2. Program to find factorial of n number.

#include <iostream>
using namespace std;

int main()
{
  int num, fact = 1;
  cout << "Number? ";
  cin >> num;
  for (int i = 1; i <= num; i++)
    fact = fact * i;
  cout << "Factorial of " << num << " is " << fact;
  return 0;
}
```

```cpp
// 3. Program to generate multiplicative table of n number.

#include <iostream>
using namespace std;

int main()
{
  int num;
  cout << "Num? ";
  cin >> num;
  for (int i = 1; i <= 10; i++)
    cout << num << " x " << i << "= " << num * i << endl;
  return 0;
}
```

```cpp
// 4. Program to display fibonacci series of n numbers.

#include <iostream>
using namespace std;

int main()
{
  int n, firstNum = 0, secondNum = 1;
  cout << "Series upto? ";
  cin >> n;
  cout << firstNum << " " << secondNum << " ";
  for (int i = 3; i <= n; i++)
  {
    int next = firstNum + secondNum;
    cout << next << " ";
    firstNum = secondNum;
    secondNum = next;
  }
  return 0;
}
```

```cpp
// 5. Program to reverse a number.

#include <iostream>
using namespace std;

int main()
{
  int num;
  cout << "Number? ";
  cin >> num;
  int rem, sum;
  while (num > 0)
  {
    rem = num % 10;
    sum = sum * 10 + rem;
    num = num / 10;
  }
  cout << "Reverse: " << sum;
  return 0;
}
```

```cpp
// 6. Calculate power of number.

#include <iostream>
using namespace std;

int main()
{
  int num, power, result = 1;
  cout << "Enter number and power: ";
  cin >> num >> power;
  for (int i = 1; i <= power; i++)
  {
    result = result * num;
  }
  cout << num << "^" << power << " is " << result;
  return 0;
}
```
