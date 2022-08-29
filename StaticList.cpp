#include <iostream>

#define MAX_VECTOR 5

using namespace std;
typedef struct Vetor
{
  int vetor[MAX_VECTOR];
  int start, end;
} Vetor;

void inicializa_vetor(Vetor *v)
{
  v->start = 0;
  v->end = MAX_VECTOR - 1;

  for (int i = 0; i < MAX_VECTOR; i++)
  {
    v->vetor[i] = 0;
  }
}

void insere_vetor(Vetor *v, int dado)
{
  for (int i = 0; i < MAX_VECTOR; i++)
  {
    if (v->vetor[i] == 0)
    {
      v->vetor[i] = dado;
      return;
    }
  }

  cout << "VETOR CHEIO\n";
}

void acha_vetor(Vetor *v, int dado)
{
  for (int i = 0; i < MAX_VECTOR; i++)
  {
    if (v->vetor[i] == dado)
    {
      cout << "DADO ENCONTRADO NA POSIÇÃO: " << i << endl;
      break;
    }
  }

  // cout << "DADO NÃO ENCONTRADO\n";
}

void exclui_vetor(Vetor *v, int dado)
{
  for (int i = 0; i < MAX_VECTOR; i++)
  {
    if (v->vetor[i] == dado)
    {
      v->vetor[i] = 0;
      for (int y = i; y < MAX_VECTOR; y++)
      {
        v->vetor[y] = v->vetor[y + 1];
      }
      break;
    }
  }

  // cout << "DADO NÃO ENCONTRADO\n";
}

void imprime_vetor(Vetor *v)
{
  for (int i = 0; i < MAX_VECTOR; i++)
  {
    cout << v->vetor[i] << endl;
  }
}

int main()
{
  Vetor v;
  inicializa_vetor(&v);

  imprime_vetor(&v);

  insere_vetor(&v, 1);
  insere_vetor(&v, 2);
  insere_vetor(&v, 3);
  insere_vetor(&v, 4);
  insere_vetor(&v, 5);

  cout << "\n";

  imprime_vetor(&v);

  acha_vetor(&v, 3);
  acha_vetor(&v, 5);

  exclui_vetor(&v, 3);
  exclui_vetor(&v, 5);

  imprime_vetor(&v);

  return 0;
}