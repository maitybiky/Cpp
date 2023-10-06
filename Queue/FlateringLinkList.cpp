#include <iostream>
#include <queue>
using namespace std;

class Node
{
public:
    Node *next;
    Node *down;
    int data;
    Node(int data, Node *next, Node *down)
    {
        this->data = data;
    }
};

class LinkList
{
public:
    Node *Head;
    Node *Tail;
    LinkList()
    {
        Head = NULL;
    }
    void insertArm(int data)
    {
        Node *newNode = new Node(data);
        if (!Head)
        {
            Tail = newNode;
            Head = newNode;
            return;
        }
        Tail->next = newNode;
        Tail = newNode;
    }

    void insertLeg(int data)
    {
        Node *newNode = new Node(data);
        if (!Head)
        {
            Tail = newNode;
            Head = newNode;
            return;
        }
        Tail->next = newNode;
        Tail = newNode;
    }
};
int main()
{

    return 0;
}