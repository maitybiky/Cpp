#include <iostream>
#include <string>
using namespace std;

class Node
{
public:
    char data;
    Node *next;

    Node(char data)
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
    void push(char data)
    {
        Node *newNode = new Node(data);
        newNode->next = this->Head;
        this->Head = newNode;
    }
    char peek()
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
    void print()
    {
        Node *temp = Head;
        while (temp)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
};

bool checkClosing(char o, char c)
{
    return (o == '(' && c == ')') || (o == '{' && c == '}') || (o == '[' && c == ']');
}
bool isOpening(char p)
{
    return p == '(' || p == '{' || p == '[';
}
bool isOk(string s)
{
    Stack s1;
    for (int i = 0; i < s.length(); i++)
    {
        if (isOpening(s[i]))
            s1.push(s[i]);
        else
        {
            if (!checkClosing(s1.peek(), s[i]))
            {

                return false;
            }
            s1.pop();
        }
        s1.print();
        cout << endl;
    }
    return true;
}

int main()
{
    string s1 = "[{()}]";
    string s2 = "[{())]";

    if (isOk(s1))
        cout << "ok" << endl;
    else
        cout << "no" << endl;

    if (isOk(s2))
        cout << "ok" << endl;
    else
        cout << "no" << endl;
    return 0;
}