// Overloading insertion and extraction operators

#include <iostream>
using namespace std;

class test
{
  int length, breadth;

public:
  // friend functions for overloading >> and << operators
  friend void operator>>(istream &in, test &t);
  friend void operator<<(ostream &out, test &t);
};

// overloading >> operator
void operator>>(istream &in, test &t)
{
  in >> t.length >> t.breadth;
}

// overloadingn << operator
void operator<<(ostream &out, test &t)
{
  out << "Length: " << t.length << " Breadth: " << t.breadth << endl;
}

int main()
{
  test t1, t2;
  cout << "Enter length and breadth for t1: ";
  cin >> t1; // calling overloaded >> operator
  cout << "Enter length and breadth for t2: ";
  cin >> t2;                      // calling overloaded >> operator
  cout << "Values of t1: " << t1; // calling overloaded << operator
  cout << "Values of t2: " << t2; // calling overloaded << operator
  return 0;
}