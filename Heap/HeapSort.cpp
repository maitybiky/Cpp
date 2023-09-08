#include <iostream>
#include <vector>
using namespace std;

void heapify(vector<int> &arr, int lnt, int index)
{
    int bigest = index;
    int lc = index * 2 + 1;
    int rc = index * 2 + 2;

    if (lc < lnt && arr[lc] > arr[bigest])
        bigest = lc;
    if (rc < lnt && arr[rc] > arr[bigest])
        bigest = rc;
    if (bigest != index)
    {
        swap(arr[index], arr[bigest]);
        heapify(arr, lnt, bigest);
    }
}

int main()
{
    vector<int> arr = {12, 11, 13, 5, 6, 7};
    int lnt = arr.size();
    for (int i = lnt / 2 - 1; i >= 0; i--)
    {
        heapify(arr, lnt, i);
    }

    for (int i = lnt - 1; i >= 0; i--)
    {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
    for (int i = 0; i < lnt; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}