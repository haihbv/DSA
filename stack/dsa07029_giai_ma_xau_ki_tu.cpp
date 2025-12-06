#include <bits/stdc++.h>

using namespace std;

#define el '\n'

string solve(string s)
{
	stack<string> st;
	string curr = "";
	for (int i = s.length() - 1; i >= 0; i--) {
		if (s[i] == ']') st.push("]");
		else if (isalpha(s[i])) st.push(string(1, s[i]));
		else if (s[i] == '[') {
			string tmp = "";
			
			while (!st.empty() && st.top() != "]") {
				tmp += st.top(); st.pop();
			}
			st.pop(); // bo dau ']'
			// cout << "tmp: " << tmp << el;
			st.push(tmp);
		} else if (isdigit(s[i])) {
			int k = 0, q = 1;
			while (i >= 0 && isdigit(s[i])) {
				k += (s[i] - '0') * q;
				q *= 10;
				i--;
			}
			i++;
			
			string s1 = st.top(); st.pop();
			// cout << "s1: " << s1 << el;
			string s2 = "";
			while (k--) {
				s2 += s1;
				// cout << "k: " << k << "s2: " << s2 << el;
			}
			st.push(s2);
		}
	}
	string res = "";
	while (!st.empty()) {
		res += st.top(); st.pop();
	}
	return res;
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


