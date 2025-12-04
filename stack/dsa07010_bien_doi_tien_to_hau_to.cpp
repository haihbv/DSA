#include <bits/stdc++.h>

using namespace std;

#define el '\n'

string s;

string solve(string s)
{
	stack<string> st;
	for (int i = s.length() - 1; i >= 0; i--)
	{
		if (isalpha(s[i])) st.push(string(1, s[i]));
		else
		{
			string o1 = st.top(); st.pop();
			string o2 = st.top(); st.pop();
			string res = o1 + o2 + s[i];
			st.push(res);
		}
	}
	return st.top();
}


int main()
{
	cin.tie(0)->sync_with_stdio(0);
	int tc=1;
	cin >> tc;
	cin.ignore();
	while (tc--) {
		cin >> s;
		cout << solve(s) << el;
	}	
}


