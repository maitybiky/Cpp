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

class Linklist
{
public:
    Node *Head;
    Node *Tail;
    Linklist()
    {
        this->Head = NULL;
        this->Tail = NULL;
    }
    void insert(int data)
    {
        Node *newNode = new Node(data);
        if (!this->Head && !this->Tail)
        {
            this->Head = newNode;
            this->Tail = newNode;
        }
        else
        {
            Node *temp = this->Head;
            while (temp->next)
            {
                temp = temp->next;
            }
            temp->next = newNode;
            this->Tail = newNode;
        }
    }

    Node *iscircle()
    {
        Node *slow = this->Head;
        Node *fast = this->Head;
        while (fast)
        {
            fast = fast->next->next;
            slow = slow->next;
            if (fast == slow)
            {
                cout << fast->data << "lgl";
                return fast;
            }
        }

        return NULL;
    }

    void breakLoop()
    {

        Node *cross = iscircle();
        cout << cross->next->data << endl;
        if (!cross)
        {
            cout << "No loop detected." << endl;
            return;
        }
        cout << "Loop detected. Breaking the loop." << endl;
        Node *Head = this->Head;
        Node *prev;

        while (Head != cross)
        {
            prev = cross;
            Head = Head->next;
            cross = cross->next;
        }
        if (prev)
            prev->next = nullptr;
        else
            this->Head = nullptr;

        return;
    }

    Node *getNode(int pos)
    {
        int i = 1;
        Node *temp = this->Head;
        while (i != pos)
        {
            temp = temp->next;
            i++;
        }
        return temp;
    }
    void print()
    {
        Node *temp = this->Head;
        int i = 0;
        while (temp && i < 10)
        {
            cout << temp->data << " ";
            temp = temp->next;
            i++;
        }
    }
};

int main()
{
    Linklist LL;
    LL.insert(4);
    LL.insert(6);
    LL.insert(3);
    LL.insert(9);
    LL.print();
    LL.getNode(4)->next = LL.getNode(3);
    if (LL.iscircle())
        cout << "true" << endl;
    else
        cout << "no" << endl;
    LL.print();
    LL.breakLoop();
    if (LL.iscircle())
        cout << "true" << endl;
    else
        cout << "no" << endl;
    LL.print();
    return 0;
}