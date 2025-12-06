#include <bits/stdc++.h>

using namespace std;

#define el '\n'

bool isValid(char x, char y)
{
    return (x == '(' && y == ')') ||
           (x == '[' && y == ']') ||
           (x == '{' && y == '}');
}

bool isCheck(string s) {
	stack<char> st;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == '(' || s[i] == '[' || s[i] == '{') st.push(s[i]);
		else {
			if (st.empty()) return false;
			char x = st.top();
			st.pop();
			if (!isValid(x, s[i])) return false;
		}
	}
	return st.empty();
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
		if (!isCheck(s)) cout << "NO" << el;
		else cout << "YES" << el;
	}
}

