#include <iostream>
#include <stack>
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
    cout << "Enter data : " << endl;
    cin >> value;
    if (value == -1)
        return nullptr;
    Node *root = new Node(value);
    cout << "Enter left for " << value << endl;
    root->left = createTree();
    cout << "Enter right for " << value << endl;
    root->right = createTree();

    return root;
}
void iterativePreOrder(Node *root)
{
    stack<Node *> s;
    // s.push(root);
    Node *temp = root;
    while (true)
    {
        cout << temp->data << " ";
        if (temp->left != nullptr)
        {
            s.push(temp);
            temp = temp->left;
        }
        else
        {
            if (temp->right != nullptr)
            {
                temp = temp->right;
            }
            else
            {
                if (s.empty())
                    break;
                temp = s.top()->right;
                s.pop();
            }
        }
    }
    cout << endl;
}

void iterativeInOrder(Node *root)
{

    stack<Node *> s;

    Node *temp = root;
    while (true)
    {
        if (temp->left != nullptr)
        {
            s.push(temp);
            temp = temp->left;
        }
        else
        {
            cout << temp->data << " ";
            if (temp->right != nullptr)
            {
                temp = temp->right;
            }
            else
            {
                if (s.empty())
                    break;
                cout << s.top()->data << " ";
                temp = s.top()->right;
                s.pop();
            }
        }
    }
    cout << endl;
}

void iterativePostOrder(Node *root)
{
    stack<Node *> s1, s2;

    Node *temp;
    s1.push(root);
    while (!s1.empty())
    {
        temp = s1.top();
        s1.pop();

        s2.push(temp);
        if (temp->left != nullptr)
            s1.push(temp->left);
        if (temp->right != nullptr)
            s1.push(temp->right);
    }
    while (!s2.empty())
    {
        cout << s2.top()->data << " ";
        s2.pop();
    }

    cout << endl;
}
int main()
{
    Node *root = createTree();
    cout << root->data << endl;
    // iterativePreOrder(root);
    // iterativeInOrder(root);
    iterativePostOrder(root);
    return 0;
}