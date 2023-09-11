#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class Stack
{
public:
    Node *Head;
    Stack()
    {
        this->Head = NULL;
    }
    bool isEmpty()
    {
        return Head == NULL;
    }
    void push(int data)
    {
        Node *newNode = new Node(data);
        newNode->next = this->Head;
        this->Head = newNode;
    }
    int peek()
    {
        if (isEmpty())
        {
            cout << "Stack is empty";
            return -1;
        }

        return this->Head->data;
    }
    void pop()
    {
        if (isEmpty())
            return;
        Node *temp = Head;
        Head = temp->next;
        delete temp;
    }
};
int main()
{
    Stack s1;
    s1.push(5);
    s1.push(6);
    s1.push(7);
    s1.pop();
    s1.pop();

    cout << s1.peek() << endl;
    return 0;
}