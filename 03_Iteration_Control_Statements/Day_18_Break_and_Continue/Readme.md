# ⚡Break and Continue in C++

## break

The break statement is used to jump out of a switch statement and can also be used to jump out of a loop.

#### Example

```cpp
for (int i = 0; i < 5; i++) {
  if (i == 4) {
    break;
  }
  cout << i << " ";
}
```

- the above loop will print upto 3 as 0 1 2 3.

## continue

The continue statement breaks one iteration (in the loop), if a specified condition occurs, and continues with the next iteration in the loop.

#### Example

```cpp
for (int i = 0; i < 5; i++) {
  if (i == 4) {
    continue;
  }
  cout << i << " ";
}
```

- the above loop will print upto 4 skipping the number 4 as 0 1 2 3 5.

## Programs

```cpp
// the following loop will print upto 3 as 0 1 2 3.

#include <iostream>
using namespace std;

int main()
{
  for (int i = 0; i < 5; i++)
  {
    if (i == 4)
    {
      break;
    }
    cout << i << " ";
  }
  return 0;
}
```

```cpp
// the following loop will print upto 7 skipping the number 4 as 0 1 2 3 5 6 7.

#include <iostream>
using namespace std;

int main()
{
  for (int i = 0; i < 8; i++)
  {
    if (i == 4)
    {
      continue;
    }
    cout << i << " ";
  }
  return 0;
}
```
