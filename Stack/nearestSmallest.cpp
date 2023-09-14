#include <iostream>
#include <vector>
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
    int arr[] = {6, 11, 3, 7, 4, 13, 5};
    vector<int> ans;
    for (int i = 0; i < 7; i++)
    {
        while (!s1.isEmpty() && s1.peek() >= arr[i])
        {
            s1.pop();
        }

        if (s1.isEmpty())
        {
            ans.push_back(-1);
        }
        else
        {
            ans.push_back(s1.peek());
        }
        s1.push(arr[i]);
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " " << endl;
    }

    return 0;
}