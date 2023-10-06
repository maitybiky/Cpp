#include <iostream>

using namespace std;

class q
{
private:
    int r;
    int f;
    int cap;
    int *arr;

public:
    q(int capacity)
    {
        cap = capacity;
        r = -1;
        f = -1;
        arr = new int[cap];
    }
    void enqueue(int data)
    {

        if (isFull())
        {
            cout << "Queue is full " << endl;
            return;
        }
        if (f == -1)
            f = 0;
        r = (r + 1) % cap;
        arr[r] = data;
        cout << data << " id added to queue" << endl;
    }
    int dequeue()
    {
        if (f == -1)
        {
            cout << "Queue is Empty";
            return -1;
        }
        int d = arr[f];
        if (f == r)
        {
            f = -1;
            r = -1;
        }
        else
        {
            f = (f + 1) % cap;
        }
        cout << d << " is removed!" << endl;
        return d;
    }
    int getFront()
    {
        return arr[f];
    }
    void print()
    {
        if (f == -1)
            cout << "Nothing to print!";
        cout << "Front :" << f << "Rear :" << r << endl;
        for (int i = f; i <= r; i++)
        {
            cout << arr[i] << " ";
        }
    }

private:
    bool isFull()
    {
        return (r + 1) % cap == f;
    }
};

int main()
{
    q mq(4);
    mq.enqueue(5);
    mq.enqueue(7);
    mq.enqueue(9);
    mq.enqueue(11);
    mq.dequeue();
    mq.dequeue();
    mq.dequeue();
    mq.dequeue();
    mq.dequeue();
    mq.print();

    return 0;
}