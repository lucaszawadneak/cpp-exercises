#include <iostream>

using namespace std;

void clearScreen()
{
  cout << "\033[2J\033[1;1H";
}

int main()
{
  clearScreen();

  cout << "╔══════════════════════════════════════╗\n";
  cout << "║ Leonardo Xavier da Silva GRR20204488 ║\n";
  cout << "║ Lucas Cassilha Zawadneak GRR20200141 ║\n";
  cout << "║ Universidade Federal do Paraná       ║\n";
  cout << "║ Estrutura de Dados I                 ║\n";
  cout << "╚══════════════════════════════════════╝\n";

  cout << "\n\n";

  cout << "╔══════════════════════════════════════╗\n";
  cout << "║ Atividade 1                          ║\n";
  cout << "╚══════════════════════════════════════╝\n";

  cout << "\n\n";

  return 0;
}