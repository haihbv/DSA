#include <bits/stdc++.h>

using namespace std;

#define el '\n'

int solve(string s)
{
	stack<int> st;
	st.push(-1);
	int ans = 0;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == '(') st.push(i);
		else
		{
			if (!st.empty()) st.pop();
			if (st.empty()){
				st.push(i);
			}
			else
			{
				ans = max(ans, i - st.top());
			}
		}
	}
	return ans;
}

int main()
{
	cin.tie(0) -> sync_with_stdio(0);
	int tc = 1;
	cin >> tc;
	cin.ignore();
	while (tc--)
	{
		string s;
		cin >> s;
		cout << solve(s) << el;
	}
}

