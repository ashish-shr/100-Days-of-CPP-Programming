// program to demonstrate stack functions

#include <iostream>
#include <stack>
using namespace std;

int main()
{
  stack<int> s;
  for (int i = 0; i < 5; i++)
  {
    s.push(i + 1);
  }
  cout << "The size of stack is " << s.size() << endl;
  cout << "The topmost element of the stack is " << s.top() << endl;
  s.pop();
  s.pop();
  cout << "The elements of the stack after pop operation ";
  while (!s.empty())
  {
    cout << s.top() << ' ';
    s.pop();
  }
  return 0;
}