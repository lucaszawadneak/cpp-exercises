#include <iostream>

using namespace std;

typedef struct ContingencyList
{
  int *list;
  int size;
} ContingencyList;

int main()
{
  ContingencyList *contingencyList = new ContingencyList;

  int size;

  cout << "Enter the size of the list: ";
  cin >> size;

  contingencyList->size = size;
  contingencyList->list = new int[size];

  for (int i = 0; i < size; i++)
  {
    contingencyList->list[i] = i;
  }

  for (int i = 0; i < size; i++)
  {
    cout << contingencyList->list[i] << endl;
  }
}