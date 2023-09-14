#include <iostream>
#include <stack>
#include <string>
using namespace std;

int prec(char op)
{
    if (op == '^')
        return 3;
    if (op == '*' || op == '/')
        return 2;
    if (op == '+' || op == '-')
        return 1;
    return 0;
}

int main()
{
    string s1 = "a+b*c-d/e";
    stack<char> s;
    for (int i = 0; i < s1.length(); i++)
    {
        char curr = s1[i];
        if (curr == '+' || curr == '-' || curr == '*' || curr == '/')
        {
            if (s.empty())
                s.push(curr);
            else
            {
                if (prec(s.top()) >= prec(curr))
                {
                    cout << s.top();
                    s.pop();
                    s.push(curr);
                }
                else
                {
                    s.push(curr);
                }
            }
        }
        else if (curr == '(')
        {
            s.push('(');
        }
        else if (curr == ')')
        {
            while (s.top() != '(')
            {
                cout << s.top();
                s.pop();
            }
            s.pop();
        }
        else
        {
            cout << curr;
        }
    }
    while (!s.empty())
    {
        cout << s.top();
        s.pop();
    }

    return 0;
}