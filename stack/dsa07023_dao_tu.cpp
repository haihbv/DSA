#include <bits/stdc++.h>

using namespace std;

void daotu(string s) {
	stack<string> st;
	stringstream ss(s);
	string tmp;
	while (ss >> tmp) {
		st.push(tmp);
	}
	while (!st.empty())
	{
		string ans = st.top();
		st.pop();
		cout << ans << " ";
	}
	cout << '\n';
}

int main(void) {
	cin.tie(0) -> sync_with_stdio(0);
	int tc = 1;
	cin >> tc;
	cin.ignore();
	while (tc--) {
		string s;
		getline(cin, s);
		daotu(s);
	}
}

