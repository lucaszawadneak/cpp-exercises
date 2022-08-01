#include <iostream>
#include "output.cpp"

using namespace std;

int main()
{
  int v[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int i, *p;
  p = v;

  printString(3);

  for (i = 0; i < 10; i++)
  {
    cout << *p << endl;
    p++;
  };

  return 0;
}