#include <bits/stdc++.h>

using namespace std;

#define el '\n'

int solve(string s)
{
	stack<int> st;
	string res = "";
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == '(') st.push(i);
		else {
			if (!st.empty()) {
				char x = s[st.top()]; // '('
				st.pop();
				res.push_back(x);
				res.push_back(s[i]); // s[i] = ')'
			}
		}
	}
	// cout << res << el;
	return res.size();
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

