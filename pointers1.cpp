#include <iostream>

using namespace std;

int main()
{
  int v[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int i, *p;
  p = v;

  for (i = 0; i < 10; i++)
  {
    cout << *p << endl;
    p++;
  };

  return 0;
}