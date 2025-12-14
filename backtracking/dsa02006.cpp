#include <bits/stdc++.h>

using namespace std;

int n, k, a[105], X[105];
bool ok;

void ql(int i, int bd, int sum) {
	for (int j = bd; j <= n; j++) {
		if (sum + a[j] <= k) {
			X[i] = a[j];
			if (sum + a[j] == k) {
				ok = true;
				cout << "[";
				for (int u = 1; u <= i; u++) {
					cout << X[u];
					if (u != i) cout << " ";
				}
				cout << "] ";
			}
			else {
				ql(i + 1, j + 1, sum + a[j]);
			}
		} 
	}
}

int main() {
	cin.tie(0) -> sync_with_stdio(0);
	int tc;
	cin >> tc;
	while (tc--) {
		cin >> n >> k;
		for (int i = 1; i <= n; i++) {
			cin >> a[i];
		}
		sort(a + 1, a + n + 1);
		
		ok = false;
		ql(1, 1, 0);
		
		if (!ok) cout << -1;
		cout << '\n';
	}
}

