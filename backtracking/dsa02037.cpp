#include <bits/stdc++.h>

using namespace std;

#define el '\n'

int n, a[105], X[105];
vector<string> v;

bool nt(int n) {
	if (n < 2) return false;
	for (int i = 2; i <= sqrt(n); i++) {
		if (n%i==0) return false;
	}
	return true;
}

void ql(int i, int bd, int sum) {
	for (int j = bd; j <= n; j++) {
		X[i] = a[j];
		if (nt(sum + a[j])) {
			string s = "";
			for (int u = 1; u <= i; u++) {
				s += (to_string)(X[u]) + " ";
			}
			v.push_back(s);
		}
		ql(i + 1, j + 1, sum + a[j]);
	}
}

int main() {
	cin.tie(0) -> sync_with_stdio(0);
	int tc; cin >> tc;
	while (tc--) {
		cin >> n;
		for (int i = 1; i <= n; i++) cin >> a[i];
		sort(a + 1, a + n + 1, greater<int>());
		ql(1, 1, 0);
		sort(v.begin(), v.end());
		for (string res : v) {
			cout << res << el;
		}
	}
}

