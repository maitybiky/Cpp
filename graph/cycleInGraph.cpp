#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main()
{
    vector<int> adj[8];
    adj[1] = {2, 5};
    adj[2] = {1, 3};
    adj[3] = {2, 7};
    adj[5] = {1, 6};
    adj[6] = {5};
    adj[7] = {3};
    queue<pair<int, int>> q;
    int vis[8] = {0};
    q.push({-1, 1});
    vis[1] = 1;
    bool loopDetected = false;
    while (!q.empty() && !loopDetected)
    {

        int parent = q.front().first;
        int node = q.front().second;

        q.pop();

        for (auto it : adj[node])
        {
            cout << "it " << it << endl;

            if (it != parent)
            {
                if (vis[it] == 1)
                {

                    loopDetected = true;
                    break;
                }

                q.push({node, it});
                vis[it] = 1;
            }
        }
    }

    if (loopDetected)
        cout << "loop detected " << endl;
    else
        cout << "NO loop detected " << endl;
    return 0;
}