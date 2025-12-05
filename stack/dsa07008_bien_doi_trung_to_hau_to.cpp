#include <bits/stdc++.h>

#define el '\n'

int pre(char c) {
	if (c == '^') return 3;
	if (c == '*' || c == '/') return 2;
	if (c == '+' || c == '-') return 1;
	return 0;
}

std::string solve(std::string s) {
	std::stack<char> st;
	std::string ans = "";
	for (int i = 0; i < s.length(); i++) {
		char c = s[i];
		if (c == '(') st.push(c);
		else if (isalpha(c)) ans += c;
		else if (c == ')') {
			while (st.top() != '(') {
				ans += st.top();
				st.pop();
			}
			st.pop();
		} else {
			while (!st.empty() && pre(st.top()) >= pre(c)) {
				ans += st.top();
				st.pop();
			}
			st.push(c);
		}
	}
	while (!st.empty())
	{
		ans += st.top();
		st.pop();
	}
	return ans;
}

signed main() {
	std::cin.tie(0) -> sync_with_stdio();
	int tc = 1;
	std::cin >> tc;
	std::cin.ignore();
	while (tc--) {
		std::string s;
		std::cin >> s;
		std::cout << solve(s) << el;
	}
}

