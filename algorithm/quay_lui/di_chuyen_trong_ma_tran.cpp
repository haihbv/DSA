#include <bits/stdc++.h>

using namespace std;

#define el '\n'

int m, n, a[105][105], cnt;

void ql(int i, int j) {
	if (i == m && j == n) {
		++cnt;
	}
	if (i + 1 <= m) {
		ql(i + 1, j);
	}
	if (j + 1 <= n) {
		ql(i, j + 1);
	}
}

int main() {
	cin.tie(0) -> sync_with_stdio(0);
	int tc;
	cin >> tc;
	while (tc--) {
		cnt = 0;
		cin >> m >> n;
		for (int i = 1; i <= m; i++) {
			for (int j = 1; j <= n; j++) {
				cin >> a[i][j];
			}
		}
		ql(1, 1);
		cout << cnt << el;
	}
}

