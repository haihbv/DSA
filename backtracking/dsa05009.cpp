#include <bits/stdc++.h>

using namespace std;

#define el '\n'

int n, s, a[105], X[105];
bool ok;

void ql(int i, int bd, int sum) {
	if (ok) return;
	for (int j = bd; j <= n; j++) {
		if (sum + a[j] <= s) {
			X[i] = a[j];
			if (sum + a[j] == s) {
				ok = 1;
				cout << "YES" << endl;
				return;
			}
			else ql(i + 1, j + 1, sum + a[j]);
		}
	}
}

int main() {
	cin.tie(0) -> sync_with_stdio(0);
	int tc;
	cin >> tc;
	while (tc--) {
		cin >> n;
		s = 0; ok = false;
		for (int i = 1; i <= n; i++) {
			cin >> a[i];
			s += a[i]; 
		}
		if (s % 2 != 0) {
			cout << "NO" << el;
		}
		else {
			ql(1, 1, 0);
		}
	}
}

