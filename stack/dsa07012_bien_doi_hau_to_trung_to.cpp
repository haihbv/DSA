#include <bits/stdc++.h>

using namespace std;

#define el '\n'

string solve(string s)
{
	stack<string> st;
	for (int i = 0; i < s.length(); i++)
	{
		if (isalpha(s[i])) st.push(string(1, s[i]));
		else {
			string o1 = st.top(); st.pop(); // C
			string o2 = st.top(); st.pop(); // B
			string res = '(' + o2 + s[i] + o1 + ')';
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
	while (tc--)
	{
		string s;
		cin >> s;
		cout << solve(s) << el;
		// cout << s << el;
	}
}


