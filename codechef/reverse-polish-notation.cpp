#include <iostream>
#include <string>
#include <cctype>
#include <vector>
using namespace std;

int main()
{
	// your code goes here

	int t;
	string exp;
	cin >> t;
	while (t--)
	{
		vector<char> rand;
		vector<char> tor;
		cin >> exp;

		for (int i = 0; i < exp.length(); i++)
		{
			if (isalpha(exp[i]))
			{
				rand.push_back(exp[i]);
			}
			else if (exp[i] == ')')
			{
				rand.push_back(tor.back());
				tor.pop_back();
			}
			else
			{
				if (exp[i] == '(')
					continue;
				tor.push_back(exp[i]);
			}
		}

		string ans;
		for (int i = 0; i < rand.size(); i++)
		{
			ans += rand[i];
		}
		cout << ans << endl;
	}
	return 0;
}
