#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    int arr[] = {2, 7, 21, -3, 11, -14};
    int sum = 30;
    int s = -1;
    int e = -1;
    int curr = 0;
    unordered_map<int, int> set;
    for (int i = 0; i < 6; i++)
    {
        curr += arr[i];
        if (curr == sum)
        {
            s = 0;
            e = i;
            break;
        }
        if (set.find(curr - sum) != set.end())
        {
            s = set.at(curr - sum) + 1;
            e = i;
            break;
        }

        set.insert({curr, i});
    }
    if (e < 0)
        cout << "not found";
    else
        cout << s << " " << e << " " << endl;
    return 0;
}