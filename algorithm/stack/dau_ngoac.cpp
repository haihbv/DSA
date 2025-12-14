#include <bits/stdc++.h>

using namespace std;
#define el '\n'

bool check(string s) {
	stack<int> st;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == '(') st.push(i);
		else if (s[i] == ')'){
			int j = st.top();
			if (i - j == 2) return true;
			else if (s[j + 1] == '(' && s[i - 1] == ')') return true;
			else st.pop();
		}
	}
	return false;
}

int main() {
	cin.tie(0) -> sync_with_stdio(0);
	int tc = 1;
	cin >> tc;
	cin.ignore();
	while (tc--)
	{
		string s;
		getline(cin , s);
		if (check(s)) cout << "Yes" << el;
		else cout << "No" << el;
	}
}

