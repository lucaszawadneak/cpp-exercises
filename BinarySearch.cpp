#include <iostream>
using namespace std;

#define SIZE 23

void bubble_sort(char *array)
{
  int aux;
  for (int i = 0; i < SIZE; i++)
  {
    for (int j = 0; j < SIZE; j++)
    {
      if (array[j] > array[j + 1])
      {
        aux = array[j];
        array[j] = array[j + 1];
        array[j + 1] = aux;
      }
    }
  }
}

void binary_search(char *array, int size, char searchValue)
{
  int middle = size / 2;
  char next[middle];

  cout << "Meio: " << middle << endl;

  cout << array[middle] << endl;

  if (array[middle] == searchValue)
  {
    cout << searchValue << " encontrado!" << endl;
    return;
  }
  else if (searchValue > array[middle])
  {
    cout << "Maior que o meio" << endl;
    for (int i = 0; i < middle + 1; i++)
    {
      next[i] = array[i + middle + 1];
      cout << next[i];
    }
    cout << endl;
  }
  else
  {
    cout << "Menor que o meio" << endl;
    for (int i = 0; i < middle; i++)
    {
      next[i] = array[i];
    }
  }

  if (middle == 0)
  {
    cout << searchValue << " não encontrado." << endl;
    return;
  }
  binary_search(next, middle, searchValue);
}

int main()
{
  char searchChar;
  char nome[SIZE] = "lucascassilhazawadneak";
  bool found = false;

  cout << "Digite uma letra para buscar no nome Lucas Cassilha Zawadneak:\n";
  cin >> searchChar;

  bubble_sort(nome);

  for (int i = 0; i < SIZE; i++)
  {
    cout << nome[i];
  }

  cout << endl;

  binary_search(nome, SIZE, searchChar);
  return 0;
}