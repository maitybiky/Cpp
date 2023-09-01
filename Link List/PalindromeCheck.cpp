#include <iostream>
using namespace std;

class Node
{
public:
    char data;
    Node *next;
    Node(char d)
    {
        this->data = d;
        this->next = NULL;
    }
};

class Linklist
{
public:
    Node *Head;
    Node *Tail;
    Linklist(char data)
    {
        Node *newNode = new Node(data);
        this->Head = newNode;
        this->Tail = newNode;
    }
    void insert(char data)
    {
        Node *newNode = new Node(data);
        this->Tail->next = newNode;
        this->Tail = newNode;
        return;
    }
    bool isPalindrom()
    {
        if (!this->Head || !this->Head->next)
            return true;
        Node *curr = this->Head;
        Node *mid = this->midNode(this->Head);
        Node *rev = this->reverse(mid);
        while (rev->next)
        {
            if (curr->data == rev->data)
                return true;
            else
                return false;
            curr = curr->next;
            rev = rev->next;
        }

        return false;
    }
    Node *midNode(Node *Head)
    {
        Node *slow = Head;
        Node *fast = Head;
        while (fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
    Node *reverse(Node *Head)
    {
        if (Head == NULL || Head->next == NULL)
            return Head;
        Node *newHead = reverse(Head->next);
        Head->next->next = Head;
        Head->next = NULL;
        return newHead;
    }
    void print()
    {
        Node *temp = this->Head;
        while (temp)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
};
void print(Node *Head)
{
    while (Head)
    {
        cout << Head->data << " ";
        Head = Head->next;
    }
}
int main()
{
    Linklist LL('a');
    LL.insert('b');
    LL.insert('c');
    LL.insert('d');
    LL.insert('c');
    LL.insert('b');
    LL.insert('x');
    LL.print();
    if (LL.isPalindrom())
        cout << "yes";
    else
        cout << "nope";

    // print(LL.reverse(LL.Head));
    return 0;
}