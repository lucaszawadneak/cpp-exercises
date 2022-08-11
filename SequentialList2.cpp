#include <iostream>
#include "output.cpp"

using namespace std;

int main()
{
  printString(5);
  int number;
  cout << "Número para inserir na lista:\n";
  cin >> number;

  int a[6];
  for (int i = 1; i < 6; i++)
  {
    a[i - 1] = 10 * i;
  }

  a[5] = number;

  cout << "Lista de números digitados:\n";
  for (int i = 0; i < 6; i++)
  {
    cout << a[i] << endl;
  }
  return 0;
}