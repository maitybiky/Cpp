#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    unordered_set<int> s;
    s.insert(4);
    s.insert(2);
    s.insert(7);
    s.insert(3);
    s.erase(2);
    for (auto data = s.begin(); data != s.end(); data++)
    {
        cout << *data << " .. " << endl;
    }
    return 0;
}