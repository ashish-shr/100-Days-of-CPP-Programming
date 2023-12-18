# ⚡The Class Constructors

## Class Constructors

- Class constructors are the special member function whose name is same as that of the class.
- Constructors are used to initialize the member of the objects.
- Constructors does not have any return type at all, not even void.
- Constructors are automatically invoked whenever an object is created.

#### Example

```cpp
#include <iostream>
using namespace std;

class student
{
  public:
    // constructor
    student()
    {
      cout<<"I am a constructor"<<endl;
    }
};

int main()
{
  student demo; //gives output: I am a constructor
  return 0;
}
```

Here, student() is a constructor, which is also a member function of class student. So, when object demo is created, the constructor student() is invoked automatically. Thus, "I am a constructor" is displayed.
