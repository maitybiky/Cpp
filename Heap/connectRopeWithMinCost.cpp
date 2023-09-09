#include <iostream>
#include <queue>
using namespace std;

int main()
{

    int arr[] = {2, 5, 4, 8, 6, 9};

    int lnt = sizeof(arr) / sizeof(arr[0]);

    priority_queue<int> q;

    for (int i = 0; i < lnt; i++)
    {
        q.push(-arr[i]);
    }
    int cost = 0;
    while (q.size() > 1)
    {
        int f = -q.top();
        q.pop();
        int l = -q.top();
        q.pop();
        cost += f + l;
        q.push(-f - l);
    }
    cout << "cost " << cost << endl;
    return 0;
}