#include <iostream>

using namespace std;
class Node
{
public:
  int data;
  Node *nextNode;
  Node(int data)
  {
    this->data = data;
    this->nextNode = NULL;
  }
  ~Node()
  {
    cout << "\033[31m" << data << " deleted"
         << "\033[0m" << endl;
  }
};

class LinkList
{
public:
  Node *Head;
  Node *Tail;
  LinkList()
  {
    this->Head = nullptr;
    this->Tail = nullptr;
  }

  void insertAtStart(int data)
  {
    Node *latestNode = new Node(data);
    latestNode->nextNode = this->Head;
    this->Head = latestNode;
    return;
  }

  void insertAt(int data, int position)
  {
    if (position < 0)
      return;
    if (position == 1)
      insertAtStart(data);

    Node *temp = this->Head;
    int index = 1;
    while (index < position - 1)
    {
      if (temp->nextNode == NULL)
        return;
      temp = temp->nextNode;
      index++;
    }

    Node *newNode = new Node(data);
    newNode->nextNode = temp->nextNode;
    temp->nextNode = newNode;
  }

  void deleteNode(int position)
  {
    if (position < 0)
      return;

    if (position == 1)
    {
      Node *temp = this->Head;
      this->Head = this->Head->nextNode;
      temp->nextNode = NULL;
      delete temp;
      return;
    }
    Node *curentNode = this->Head;
    Node *prevNode = this->Head;
    int index = 1;
    while (index < position)
    {
      prevNode = curentNode;
      curentNode = curentNode->nextNode;
      if (prevNode->nextNode == NULL)
      {
        cout << "No Node present at position at " << position << endl;
        return;
      }

      index++;
    }

    if (curentNode->nextNode == NULL)
    {
      prevNode->nextNode = NULL;
      this->Tail = prevNode;
    }
    else
    {
      prevNode->nextNode = curentNode->nextNode;
    }

    delete curentNode;
  }

  void displayList()
  {
    Node *startNode = this->Head;
    cout << "------" << endl;
    while (startNode != NULL)
    {
      cout << startNode->data << endl;
      startNode = startNode->nextNode;
    }
    cout << "------" << endl;
  }

  void reverse()
  {
    Node *prev = NULL;
    Node *curr = this->Head;
    Node *next;
    while (curr != NULL)
    {
      next = curr->nextNode;
      curr->nextNode = prev;
      prev = curr;
      curr = next;
    }
    this->Tail = this->Head;
    this->Head = prev;
  }
};

Node *recursiveRev(Node *head)
{
  if (head == NULL || head->nextNode == NULL)
    return head;

  Node *newHead = recursiveRev(head->nextNode);
  head->nextNode->nextNode = head;
  head->nextNode = NULL;
  return newHead;
}
LinkList getRev(LinkList &list)
{
  LinkList rev;
  list.Tail = list.Head;
  list.Head = recursiveRev(list.Head);
  return list;
}

int main()
{
  LinkList node1;
  node1.insertAtStart(4);
  node1.insertAtStart(3);
  node1.insertAtStart(8);
  node1.insertAt(11, 4);
  node1.insertAt(17, 6);
  // node1.displayList();
  // node1.reverse();
  // node1.displayList();

  node1.insertAt(45, 6);
  node1.displayList();
  getRev(node1);
  node1.displayList();
  return 0;
}