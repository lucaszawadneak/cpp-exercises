#include <iostream>

using namespace std;

struct node
{
  int number;
  node *prev;
  node *next;
};

int main()
{
  node *head = NULL;
  node *tail = NULL;
  node *temp = NULL;

  int choice = 0;
  while (choice != 4)
  {
    cout << "1. Insert" << endl;
    cout << "2. Insert at start" << endl;
    cout << "3. Delete" << endl;
    cout << "4. Display" << endl;
    cout << "5. Display from tail" << endl;
    cout << "6. Exit" << endl;
    cout << "Enter your choice : ";
    cin >> choice;
    switch (choice)
    {
    case 1:
      temp = new node;
      cout << "Enter the number to insert : ";
      cin >> temp->number;
      temp->next = NULL;
      if (head == NULL)
      {
        head = temp;
        tail = temp;
        temp = NULL;
      }
      else
      {
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
      }
      break;
    case 2:
      temp = new node;
      cout << "Enter the number to insert : ";
      cin >> temp->number;
      temp->next = NULL;
      if (head == NULL)
      {
        head = temp;
        tail = temp;
        temp = NULL;
      }
      else
      {
        head->prev = temp;
        temp->prev = NULL;
        temp->next = head;
        head = temp;
      }
      break;
    case 3:
      temp = head;
      head = head->next;
      head->prev = NULL;
      delete temp;
      break;
    case 4:
      temp = head;
      while (temp != NULL)
      {
        cout << temp->number << "\t";
        temp = temp->next;
      }
      cout << endl;
      break;
    case 5:
      temp = tail;
      while (temp != NULL)
      {
        cout << temp->number << "\t";
        temp = temp->prev;
      }
      cout << endl;
      break;
    case 6:
      exit(0);
      break;
    default:
      cout << "Please enter valid choice.." << endl;
    }
  }
  return 0;
}