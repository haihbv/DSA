#include <bits/stdc++.h>

#define el '\n'

std::string solve(std::string s) {
	std::stack<std::string> st;
	for (int i = s.length() - 1; i >= 0; --i) {
		if (isalpha(s[i])) st.push(std::string(1, s[i]));
		else
		{
			std::string o1 = st.top(); st.pop();
			std::string o2 = st.top(); st.pop();
			std::string ans = '(' + o1 + s[i] + o2 + ')';
			st.push(ans);
		}
	}
	return st.top();
}

int main(void) {
	std::cin.tie(0)->sync_with_stdio(0);
	int tc=1;
	std::cin >> tc;
	std::cin.ignore();
	while (tc--) {
		std::string s;
		std::cin >> s;
		std::cout << solve(s) << el;
	}
}

