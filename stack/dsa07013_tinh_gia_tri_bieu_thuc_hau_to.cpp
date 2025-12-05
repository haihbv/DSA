#include <bits/stdc++.h>

using namespace std;

#define el '\n'

int solve(string s)
{
	stack<int> st;
	for (int i =0; i < s.length(); i++) {
		if (isdigit(s[i])) st.push(stoi(string(1, s[i])));
		else {
			int x1 = st.top(); st.pop();
			int x2 = st.top(); st.pop();
			int res = 0;
			if (s[i] == '-') {
				res = x2 - x1;
			}
			else if (s[i] == '+')
			{
				res = x2 + x1;
			}
			else if (s[i] == '*')
			{
				res = x2 * x1;
			}
			else if (s[i] == '/')
			{
				res = x2 / x1;
			}
			st.push(res);
		}
	}
	return st.top();
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

