#include <iostream>
#include <cstring>
#include "output.cpp"

using namespace std;

int mediaDeDois(int a, int b)
{
  return (a + b) / 2;
  ;
}

int main()
{
  int media;
  char *stringMedia;

  struct notas
  {
    int matricula;
    int nota1;
    int nota2;
  };

  struct notas aNotas, *pNotas;

  pNotas = &aNotas;
  pNotas->matricula = 123456789;
  pNotas->nota1 = 7;
  pNotas->nota2 = 9;

  media = mediaDeDois(pNotas->nota1, pNotas->nota2);

  printString(3);
  printf("Aluno com matrícula %d\n", pNotas->matricula);
  printf("A média foi de %d\n", media);

  cout << "\n\n";
  return 0;
}