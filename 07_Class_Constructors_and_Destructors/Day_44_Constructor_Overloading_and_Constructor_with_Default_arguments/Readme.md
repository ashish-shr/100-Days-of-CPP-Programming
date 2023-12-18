# ⚡Constructor Overloading and Constructor with default arguments

## Constructor Overloading

- Constructors can be overloaded in a similar way as function overloading.
- Overloaded constructors have the same name (name of the class) but the different number of arguments.
- Depending upon the number and type of arguments passed, the corresponding constructor is called.

#### Example

```cpp
// Program to demonstrate Constructor Overloading

#include <iostream>
using namespace std;

class volume
{
  float length, breadth, height;

public:
  volume() // default constructor
  {
    cout << "default constructor called..." << endl;
    cout << "not defined" << endl;
  }

  volume(float l) // constructor with 1 argument
  {
    cout << "constructor with 1 argument called..." << endl;
    length = l;
    cout << "Volume of cube: " << length * length * length << endl;
  }

  volume(float l, float b, float h) // constructor with 3 arguments
  {
    cout << "constructor with 3 arguments called..." << endl;
    length = l, breadth = b, height = h;
    cout << "Volume of cuboid: " << length * breadth * height << endl;
  }
};

int main()
{
  volume v;               // default constructor will be invoked
  volume cube(3);         // constructor with 1 argument will be invoked
  volume cuboid(3, 2, 1); // constructor with 3 arguments will be invoked
  return 0;
}
```

```
Output:
default constructor called...
not defined
constructor with 1 argument called...
Volume of cube: 27
constructor with 3 arguments called...
Volume of cuboid: 6
```

## Constructor with default arguments

- Default arguments of the constructor are those which are provided in the constructor declaration.
- If the values are not provided when calling the constructor the constructor uses the default arguments automatically.

#### Example

```cpp
// Program to demonstrate Constructor with default arguments

#include <iostream>
using namespace std;

class complex
{
  int real, imag;

public:
  complex(int r, int i = 0) // constructor with default arguments
  {
    real = r;
    imag = i;
  }

  void show(void)
  {
    cout << "Complex number is ";
    cout << real << "+" << imag << "i" << endl;
  }
};

int main()
{
  complex c1(8);
  c1.show();
  complex c2(3, 21);
  c2.show();
  return 0;
}
```

```
Output:
Complex number is 8+0i
Complex number is 3+21i
```
