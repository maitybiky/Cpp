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
    int data;
    Node *Tail;
    LinkList(int data)
    {
        Node *temp = new Node(data);
        temp->nextNode = temp;
        this->Tail = temp;
    }

    void insertAfter(int refferenceData, int newData)
    {
        Node *temp = this->Tail;
        while (temp->data != refferenceData)
        {
            temp = temp->nextNode;
            if (temp == this->Tail)
            {
                cout << refferenceData << " Not found!" << endl;
            }
        }

        Node *newNode = new Node(newData);
        newNode->nextNode = temp->nextNode;
        temp->nextNode = newNode;
        this->Tail = newNode;
        return;
    }

    void insertBefore(int refferenceData, int data)
    {
        Node *prev;
        Node *curr = this->Tail;

        do
        {
            prev = curr;
            curr = curr->nextNode;
        } while (curr->data != refferenceData);

        Node *newNode = new Node(data);
        prev->nextNode = newNode;
        newNode->nextNode = curr;
        this->Tail = newNode;
    }

    void remove(int referenceData)
    {
        Node *curr = this->Tail;
        Node *prev;

        do
        {
            prev = curr;
            curr = curr->nextNode;
        } while (curr->data != referenceData);
        prev->nextNode = curr->nextNode;
        curr->nextNode = NULL;
        delete curr;
    }
    void displayList()
    {
        Node *startNode = this->Tail;
        cout << " - ";

        do
        {
            cout << startNode->data << " - ";
            startNode = startNode->nextNode;
        } while (startNode != this->Tail);
        cout << endl;
    }
};

int main()
{
    LinkList node1(67);
    node1.insertAfter(67, 69);
    node1.insertAfter(69, 23);
    node1.insertAfter(23, 2);
    node1.insertAfter(69, 7);
    node1.displayList();
    node1.insertBefore(67, 21);
    node1.displayList();
    node1.remove(67);
    node1.displayList();
    return 0;
}