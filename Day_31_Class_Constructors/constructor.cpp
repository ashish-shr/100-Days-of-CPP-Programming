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
  student demo;
  return 0;
}