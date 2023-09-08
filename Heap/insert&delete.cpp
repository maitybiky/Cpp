#include <iostream>
#include <vector>
using namespace std;

class Heap
{
private:
    vector<int> heap;

    void heapifyUp(int index)
    {
        int pInd = index / 2;
        while (index > 0 && heap[index] > heap[pInd])
        {
            swap(heap[index], heap[pInd]);
            index = pInd;
            pInd = index / 2;
        }
    }
    void heapifyDown(int index = 0)
    {

        int lc = index * 2 + 1;
        int rc = index * 2 + 2;
        int bigInd = index;
        if (lc < heap.size() && heap[lc] > heap[rc])
            bigInd = lc;
        if (rc < heap.size() && heap[rc] > heap[lc])
            bigInd = rc;
        if (bigInd == index)
            return;
        swap(heap[index], heap[bigInd]);
        heapifyDown(bigInd);
    }

public:
    void insert(int data)
    {
        heap.push_back(data);
        heapifyUp(heap.size() - 1);
    }
    void pop()
    {
        heap[0] = heap.back();
        heap.pop_back();
        heapifyDown();
    }
    void display()
    {
        int l = 0;
        while (l < heap.size())
        {
            cout << heap[l] << endl;
            l++;
        }
    }
};

int main()
{
    Heap h1;
    h1.insert(4);
    h1.insert(5);
    h1.insert(11);
    h1.insert(1);
    h1.insert(7);
    h1.insert(34);
    h1.insert(2);
    h1.pop();
    h1.display();
    return 0;
}