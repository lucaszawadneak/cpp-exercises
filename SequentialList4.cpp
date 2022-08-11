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

void searchNumber(int a[], int number)
{
  for (int i = 0; i < LIST_SIZE; i++)
  {
    if (a[i] == number)
    {
      printf("Número %d encontrado na posição %d\n", number, i);
      break;
    }
    if (i == LIST_SIZE - 1)
    {
      cout << "Infelizmente não encontramos o número na lista!\n";
    }
  }
}

int main()
{
  printString(5);
  int number;
  cout << "Número para buscar na lista:\n";
  cin >> number;

  int a[LIST_SIZE];
  initList(a);

  searchNumber(a, number);

  return 0;
}