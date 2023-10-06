#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int value) : data(value), left(nullptr), right(nullptr) {}
};

Node *createTree()
{
    int value;
    Node *newNode = nullptr;
    cout << "Enter data : " << endl;
    cin >> value;
    system("clear");
    if (value == -1)
        return nullptr;
    newNode = new Node(value);

    cout << "Enter left for " << value << endl;
    newNode->left = createTree();
    cout << "Enter right for " << value << endl;
    newNode->right = createTree();
    return newNode;
}

void printTreeInOreder(Node *root)
{
    if (!root)
        return;
    printTreeInOreder(root->left);
    cout << root->data << endl;
    printTreeInOreder(root->right);
}

void printTreePreOreder(Node *root)
{
    if (!root)
        return;
    cout << root->data << endl;
    printTreeInOreder(root->left);
    printTreeInOreder(root->right);
}

void printTreePostOreder(Node *root)
{
    if (!root)
        return;
    printTreeInOreder(root->left);
    printTreeInOreder(root->right);
    cout << root->data << endl;
}

void printTreeLevel(Node *root)
{
    queue<Node *> q;
    q.push(root);

    q.push(nullptr);
    while (!q.empty())
    {
        Node *curr = q.front();
        q.pop();
        if (curr == nullptr)
        {
            if (q.empty())
                return;
            else
            {
                q.push(nullptr);
                cout << endl;
                // continue;
            }
        }
        else
        {
            cout << curr->data << " ";
            if (curr->left != nullptr)
                q.push(curr->left);

            if (curr->right != nullptr)
                q.push(curr->right);
        }
    }
}
void printTree(Node *root)
{
    int type;
    cout << "In order triversal => Enter 1" << endl;
    cout << "Pre order triversal => Enter 2" << endl;
    cout << "Post order triversal => Enter 3" << endl;
    cout << "Post order triversal => Enter 4" << endl;
    cin >> type;
    system("clear");
    switch (type)
    {
    case 1:
        cout << "The in-order triversal" << endl;
        printTreeInOreder(root);
        break;
    case 2:
        cout << "The pre-order triversal" << endl;
        printTreePreOreder(root);
        break;
    case 3:
        cout << "The post-order triversal" << endl;
        printTreePostOreder(root);
        break;
    case 4:
        cout << "The level-order triversal" << endl;
        printTreeLevel(root);
        break;

    default:
        cout << "Enter valid option" << endl;
        break;
    }
}

int main()
{
    Node *root = createTree();
    cout << " The Tree" << endl;

    printTree(root);
    return 0;
}