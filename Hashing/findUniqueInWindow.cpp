#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    int arr[] = {3, 6, 2, 2, 3, 4, 6, 3, 3, 5, 2};
    int k = 4;
    unordered_map<int, int> mp;

    for (int i = 0; i < k; i++)
    {
        mp[arr[i]]++;
    }
    cout << mp.size() << endl;
    for (int i = k; i < 11; i++)
    {
        if (mp[arr[i - k]] == 1)
            mp.erase(arr[i - k]);
        else
            mp[arr[i - k]]--;
        mp[arr[i]]++;
        cout << mp.size() << endl;
    }

    // for (const auto &pair : mp)
    // {
    //     std::cout << "Key: " << pair.first << ", Value: " << pair.second << std::endl;
    // }
    return 0;
}