#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Solution
{
public:
    int orangesRotting(vector<vector<int>> &grid)
    {
        int time = 0;
        int r = grid.size();
        int c = grid[0].size();
        vector<vector<int>> isVisited(r, vector<int>(c, 0)); // Initialize isVisited
        queue<pair<pair<int, int>, int>> q;
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (grid[i][j] == 2)
                {
                    q.push({{i, j}, time});
                }
            }
        }
        while (!q.empty())
        {
            int rw = q.front().first.first;
            int cl = q.front().first.second;
            int t = q.front().second;
            time = max(time, t);
            isVisited[rw][cl] = 1;
            q.pop();
            if (rw > 0 && isVisited[rw - 1][cl] != 1 && grid[rw - 1][cl] == 1)
            {
                q.push({{rw - 1, cl}, t + 1});
                isVisited[rw - 1][cl] = 1;
            }
            if (rw + 1 < r && isVisited[rw + 1][cl] != 1 && grid[rw + 1][cl] == 1)
            {
                q.push({{rw + 1, cl}, t + 1});
                isVisited[rw + 1][cl] = 1;
            }
            if (cl + 1 < c && isVisited[rw][cl + 1] != 1 && grid[rw][cl + 1] == 1)
            {
                q.push({{rw, cl + 1}, t + 1});
                isVisited[rw][cl + 1] = 1;
            }
            if (cl > 0 && isVisited[rw][cl - 1] != 1 && grid[rw][cl - 1] == 1)
            {
                q.push({{rw, cl - 1}, t + 1});
                isVisited[rw][cl - 1] = 1;
            }
        }
        // Check if there are any fresh oranges left
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (grid[i][j] == 1 && isVisited[i][j] != 1)
                    return -1;
            }
        }
        return time;
    };
};

int main()
{
    vector<vector<int>> grid = {{2, 2}, {1, 1}, {0, 0}, {1, 0}, {2, 0}};
    Solution s1;
    cout << "ans " << s1.orangesRotting(grid) << endl;

    return 0;
}
