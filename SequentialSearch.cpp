#include <iostream>

using namespace std;

int main()
{
  char searchChar;
  char nome[23] = "LucasCassilhaZawadneak";
  bool found = false;

  cout << "Digite uma letra para buscar no nome Lucas Cassilha Zawadneak:\n";
  cin >> searchChar;

  for (int i = 0; i < 23; i++)
  {
    if (nome[i] == searchChar)
    {
      found = true;
      cout << "A letra " << searchChar << " foi encontrada na posição " << i << " do nome.\n";
    }
  }

  if (found == false)
  {
    cout << "A letra " << searchChar << " não foi encontrada no nome.\n";
  }
  return 0;
}