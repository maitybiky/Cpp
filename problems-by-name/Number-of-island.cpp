#include <iostream>
#include <map>
using namespace std;
void masrkAsVisited(int i, int j, map<string, bool> &isVisited, bool arr[][10])
{
    string key = to_string(i) + ":" + to_string(j);

    if (i < 0 || i >= 10 || j < 0 || j >= 10 || !arr[i][j] || isVisited[key])
        return;

    isVisited[key] = 1;

    int top = j - 1;
    int bottom = j + 1;
    int left = i - 1;
    int right = i + 1;
    // top left corner
    masrkAsVisited(left, top, isVisited, arr);
    // left side
    masrkAsVisited(left, j, isVisited, arr);
    // bottom left
    masrkAsVisited(left, bottom, isVisited, arr);
    // up
    masrkAsVisited(i, top, isVisited, arr);
    // bottom
    masrkAsVisited(i, bottom, isVisited, arr);
    // top right
    masrkAsVisited(right, top, isVisited, arr);
    // right side
    masrkAsVisited(right, j, isVisited, arr);
    // bottom right
    masrkAsVisited(right, bottom, isVisited, arr);
};

int main()
{

    bool arr[10][10] = {
        {0, 0, 0, 1, 1, 0, 0, 0, 1, 1},
        {0, 0, 0, 1, 0, 0, 0, 0, 1, 1},
        {0, 0, 0, 1, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 1, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 1, 1},

    };

    map<string, bool>
        isVisited;
    int islands = 0;
    for (int i = 0; i < 10; i++)
    {

        for (int j = 0; j < 10; j++)
        {
            int isLand = arr[i][j];
            if (isLand == 1)
            {
                cout << "+";
            }
            else
            {
                cout << ".";
            }
            string key = to_string(i) + ":" + to_string(j);
            if (isLand && !isVisited[key])
            {
                islands++;
                // isVisited[key] = 1;
                masrkAsVisited(i, j, isVisited, arr);
            };
        };
        cout << endl;
    };
    cout << islands << endl;
    return 0;
}