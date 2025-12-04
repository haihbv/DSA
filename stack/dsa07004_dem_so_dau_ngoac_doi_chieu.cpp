#include <bits/stdc++.h>

using namespace std;

#define el '\n'
string s;

int solve(string s)
{
	stack<int> st;
	int count = 0;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == '(') st.push(i);
		else // truong hop )
		{
			if (st.empty())
			{
				++count;
				st.push(i);
			}
			else
			{
				st.pop();
			}
		}
	}
	count += st.size() / 2;
	return count;
}

int main()
{
	cin.tie(0) -> sync_with_stdio(0);
	int tc = 1;
	cin >> tc;
	cin.ignore();
	while (tc--)
	{
		cin >> s;
		cout << solve(s) << el;
	}
}


