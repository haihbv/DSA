#include <bits/stdc++.h>

using namespace std;

#define el '\n'
#define ll long long

ll strToDec(string s) {
	ll x = 0;
	for (int i = 0; i < s.length(); i++) {
		x = x * 10 + s[i] - '0';
	}
	return x;
}

void solve() {
	int n; cin >> n;
	queue<string> q;
	q.push("1");
	while (!q.empty()) {
		string u = q.front();
		string s1 = u + "0";
		string s2 = u + "1";
		if (strToDec(s1) % n == 0) {
			cout << s1 << el; break;
		}
		if (strToDec(s2) % n == 0) {
			cout << s2 << el; break;
		}
		q.pop();
		q.push(s1);
		q.push(s2);
	}
}

int main() {
	cin.tie(0) -> sync_with_stdio();
	int tc; cin >> tc;
	while (tc--) {
		solve();
	}
}