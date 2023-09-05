# ⚡Range based for() loop exercise

## Question

You are given a vector as<br>
vector <int> num = {3, 6, 15, 17, 18, 21, 55, 100, 200, 300};<br>
Now, find how many numbers are evenly divisible by either 3 or 5.

## Program

```cpp
/*
You are given a vector as
  vector <int> num = {3, 6, 15, 17, 18, 21, 55, 100, 200, 300};
Now, find how many numbers are evenly divisible by either 3 or 5.
*/

#include <iostream>
#include <vector>
#include <conio.h>
using namespace std;

int main()
{
  vector<int> num = {3, 6, 15, 17, 18, 21, 55, 100, 200, 300};
  int count = 0;
  for (auto n : num)
  {
    if (n % 3 == 0 || n % 5 == 0)
      count++;
  }
  cout << count << " numbers are divisible by either 3 or 5.";
  getch();
  return 0;
}
```
