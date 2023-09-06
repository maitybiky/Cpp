#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    int arr[] = {3, 5, 3};

    // naive solution
    int count = 0;
    bool detect;
    for (int i = 0; i < 3; i++)
    {

        detect = false;
        for (int j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
                detect = true;
        }
        if (!detect)
            count++;
    }
    cout << count << "  ff" << endl;

    //? Optimised solution with hashmap

    unordered_set<int> set;
    for (int i = 0; i < 3; i++)
    {
        set.insert(arr[i]);
    }
    cout << set.size() << endl;
    return 0;
}