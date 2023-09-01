# ⚡Dynamic Initialization of Objects Using Constructors

## Dynamic Initialization of Objects Using Constructors

- The dynamic initialization of the object means that the object is initialized at the runtime.
- Dynamic initialization of the object using a constructor is beneficial when the data is of different formats.
- An example program is shown below to demonstrate the concept of dynamic initialization of objects using constructors.

#### Example

```cpp
// Program to demonstrate dynamic initialization of objects using constructors

#include <iostream>
using namespace std;

class piechart
{
  float deg;

public:
  piechart() = default;
  piechart(float d)
  {
    deg = d;
    cout << "In percentage: " << (deg / 360) * 100 << endl;
  }
};

int main()
{
  float deg;
  piechart p1;
  cout << "Enter the degree value: ";
  cin >> deg;
  p1 = piechart(deg); // dynamic initialization of object
  return 0;
}
```

```
Output:
Enter the degree value: 180
In percentage: 50
```
