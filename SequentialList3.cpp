#include <iostream>
#include "output.cpp"

int LIST_SIZE = 6;

using namespace std;

void initList(int a[])
{
  for (int i = 1; i < 6; i++)
  {
    a[i - 1] = 10 * i;
  }
}

void printList(int a[])
{
  cout << "Lista de números digitados:\n";
  for (int i = 0; i < LIST_SIZE; i++)
  {
    cout << a[i] << endl;
  }
}

void insertAtStart(int a[], int number)
{
  for (int i = LIST_SIZE - 1; i >= 0; i--)
  {
    if (i == LIST_SIZE - 1)
      continue;
    a[i + 1] = a[i];
    if (i == 0)
    {
      a[i] = number;
      break;
    }
  }
}

int main()
{
  printString(5);
  int number;
  cout << "Número para inserir no início da lista:\n";
  cin >> number;

  int a[LIST_SIZE];
  initList(a);

  insertAtStart(a, number);

  printList(a);

  return 0;
}