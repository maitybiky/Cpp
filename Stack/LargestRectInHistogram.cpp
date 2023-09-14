#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main()
{
    stack<int> s1;
    stack<int> s2;
    vector<int> arr = {4, 2, 1, 5, 6, 3, 2, 4, 2};
    vector<int> l;
    vector<int> r;

    for (int i = 0; i < arr.size(); i++)
    {
        while (!s1.empty() && arr[s1.top()] >= arr[i])
        {
            s1.pop();
        }

        if (s1.empty())
        {
            l.push_back(-1);
        }
        else
        {
            l.push_back(s1.top());
        }
        s1.push(i);
    }

    for (int i = arr.size() - 1; i >= 0; i--)
    {
        while (!s2.empty() && arr[s2.top()] >= arr[i])
        {
            s2.pop();
        }

        if (s2.empty())
        {
            r.insert(r.begin(), arr.size());
        }
        else
        {
            r.insert(r.begin(), s2.top());
        }
        s2.push(i);
    }

       int max = -1;
    for (int i = 0; i < r.size(); i++)
    {
        int area = ((r[i] - l[i]) - 1) * arr[i];
        if (area > max)
            max = area;
    }
    cout << max << endl;
    return 0;
}