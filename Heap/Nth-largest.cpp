#include <iostream>
#include <queue>
using namespace std;

int nthLargest(int arr[], int n, int lnt)
{

    priority_queue<int> q;
    int i;
    for (i = 0; i < n; i++)
    {
        q.push(-arr[i]);
    }

    for (i; i < lnt; i++)
    {
        if (-q.top() < arr[i])
        {
            q.pop();
            q.push(-arr[i]);
        }
    }
    return -q.top();
}

int main()
{
    int arr[] = {2, 3, 6, 1, 9, 13};
    int length = sizeof(arr) / sizeof(arr[0]);

    cout << nthLargest(arr, 6, length) << endl;

    return 0;
}