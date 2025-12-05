#include <bits/stdc++.h>

#define el '\n'

using namespace std;

int solve(string s)
{
	stack<int> st;
	for (int i = s.length() - 1; i >= 0; i--)
	{
		if (isdigit(s[i])) st.push(stoi(string(1, s[i])));
		else {
			int x1 = st.top(); st.pop();
			int x2 = st.top(); st.pop();
			int res;
			if (s[i] == '-')
			{
				res = x1 - x2;
			}
			else if (s[i] == '+')
			{
				res = x1 + x2;
			}
			else if (s[i] == '*')
			{
				res = x1 * x2;
			}
			else if (s[i] == '/')
			{
				res = x1 / x2;
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
	while (tc--) {
		string s;
		cin >> s;
		cout << solve(s) << el;
	}
}

