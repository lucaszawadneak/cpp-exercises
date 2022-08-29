#include <iostream>

using namespace std;

typedef struct Stack
{
  int list[5];
  int totalElem;
} Stack;

typedef struct Queue
{
  int list[5];
  int totalElem;
} Queue;

void pushToStack(Stack *stack, int elem)
{
  if (stack->totalElem == 5)
  {
    cout << "Stack is full" << endl;
  }
  else
  {
    stack->list[stack->totalElem] = elem;
    stack->totalElem++;
  }
}

void popFromStack(Stack *stack)
{
  if (stack->totalElem == 0)
  {
    cout << "Stack is empty" << endl;
  }
  else
  {
    stack->list[stack->totalElem] = 0;
    stack->totalElem--;
  }
}

void pushToQueue(Queue *queue, int elem)
{
  if (queue->totalElem == 5)
  {
    cout << "Queue is full" << endl;
  }
  else
  {
    queue->list[queue->totalElem] = elem;
    queue->totalElem++;
  }
}

int main()
{
  Stack *stack = new Stack;
  Queue *queue = new Queue;
  cout << "Insira os 5 elementos na pilha:\n";

  for (int i = 0; i < 5; i++)
  {
    int elem;
    cin >> elem;
    pushToStack(stack, elem);
  }

  cout << "Elementos da pilha: \n";
  for (int i = 0; i < 5; i++)
  {
    cout << i << " - " << stack->list[i] << endl;
  }

  cout << "Passando para a fila..." << endl;

  for (int i = 4; i >= 0; i--)
  {
    pushToQueue(queue, stack->list[i]);
  }

  cout << "Elementos da fila: \n";
  for (int i = 0; i < 5; i++)
  {
    cout << i << " - " << queue->list[i] << endl;
  }
}