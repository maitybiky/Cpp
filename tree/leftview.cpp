#include <iostream>
#include <unordered_map>
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
    cout << "Enter data : " << endl;
    int data;
    cin >> data;
    if (data == -1)
        return nullptr;
    system("clear");
    Node *root = new Node(data);
    cout << "Left of " << root->data << endl;
    root->left = createTree();
    cout << "Right of " << root->data << endl;
    root->right = createTree();
    return root;
}
bool isNotExist(unordered_map<int, int> map, int key)
{
    return (map.find(key) == map.end());
}
void leftView(Node *root, unordered_map<int, int> &map, int level = 1)
{
    if (root == nullptr)
        return;

    if (isNotExist(map, level))
    {
        map[level] = root->data;
    }
    leftView(root->left, map, level + 1);
    leftView(root->right, map, level + 1);
}

int main()
{
    unordered_map<int, int> map;
    stack<int> final;
    Node *tree = createTree();
    leftView(tree, map);
    for (const auto &pair : map)
    {
        final.push(pair.second);
    }
    while (!final.empty())
    {
        cout << final.top() << endl;
        final.pop();
    }

    return 0;
}