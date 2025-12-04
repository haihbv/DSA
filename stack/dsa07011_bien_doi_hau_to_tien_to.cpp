#include <bits/stdc++.h>

#define el '\n'

std::string solve(std::string s) {
	std::stack<std::string> st;
	for (int i = 0; i < s.length(); ++i) {
		if (isalpha(s[i])) st.push(std::string(1, s[i]));
		else {
			std::string o1 = st.top(); st.pop(); // B, D, -CD
			std::string o2 = st.top(); st.pop(); // A, C, +AB
			std::string ans = s[i] + o2 + o1;
			st.push(ans); // +AB, -CD, *+AB-CD
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

