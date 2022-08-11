#include <iostream>
#include "output.cpp"

using namespace std;

int main()
{
  printString(5);
  cout << "Digite os números para inserir na lsita:\n";

  int a[5];
  for (int i = 0; i < 5; i++)
  {
    cin >> a[i];
  }

  cout << "Lista de números digitados:\n";
  for (int i = 0; i < 5; i++)
  {
    cout << a[i] << endl;
  }
  return 0;
}