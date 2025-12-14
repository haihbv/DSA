#include <bits/stdc++.h>

using namespace std;

#define el '\n'

int n, a[105], X[105];
vector<string> res;

void ql(int i, int bd) {
	for (int j = bd; j <= n; j++) {
		if (a[j] > X[i - 1]) {
			X[i] = a[j];
			if (i >= 2) {
				string ans = "";
				for (int u = 1; u <= i; u++) {
					ans += to_string(X[u]) + " ";
				}
				res.push_back(ans);
			}
			ql(i + 1, j + 1);
		}
	}
}

int main() {
	cin.tie(0) -> sync_with_stdio(0);
	cin >> n;
	X[0] = 0;
	for (int i = 1; i <= n; i++) cin >> a[i];
	ql(1, 1);
	sort(res.begin(), res.end());
	
	for (string x : res) {
		cout << x << el;
	}
}

