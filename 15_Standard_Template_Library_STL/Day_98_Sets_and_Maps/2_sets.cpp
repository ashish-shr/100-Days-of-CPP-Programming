// program to demonstrate sets functions

#include <iostream>
#include <set>
using namespace std;

int main()
{
  set<int> s1;
  set<int, greater<int>> s2;
  for (int i = 0; i < 5; i++)
  {
    s1.insert(i + 1);
  }
  for (int i = 0; i < 5; i++)
  {
    s2.insert((i + 1) * 10);
  }
  set<int>::iterator it;
  cout << "Set1 ";
  for (it = s1.begin(); it != s1.end(); it++)
    cout << *it << " ";
  cout << endl;
  cout << "Set2 ";
  for (it = s2.begin(); it != s2.end(); it++)
    cout << *it << " ";
  cout << endl;

  s1.erase(1);
  s2.erase(s2.begin(), s2.find(10));
  cout << "After erasing element, size of set1 is " << s1.size() << endl;
  int val = 4;
  if (s1.find(val) != s1.end())
    cout << "The set1 contains " << val << endl;
  else
    cout << "The set1 does not contains " << val << endl;
  cout << "Elements of set1 ";
  for (it = s1.begin(); it != s1.end(); it++)
    cout << *it << " ";
  cout << endl;
  cout << "Elements of set2 ";
  for (it = s2.begin(); it != s2.end(); it++)
    cout << *it << " ";
  cout << endl;

  s1.clear();
  if (s1.empty() == true)
  {
    cout << "set1 is empty now!";
  }
  return 0;
}