#include <bits/stdc++.h>

using namespace std;

#define el '\n'

int n, k, s, a[105], X[105];
bool visited[105], ok;

void ql(int i, int bd, int sum) {
	if (ok) return;
	for (int j = bd; j <= n; j++) {
		if (!visited[j] && sum + a[j] <= s) {
			visited[j] = true;
			if (sum + a[j] == s) {
				ok = true;
				return;
			}
			else ql(i + 1, j + 1, sum + a[j]);
			visited[j] = false;
		}
	}
}

int main() {
	cin.tie(0) -> sync_with_stdio(0);
	int tc = 1;
	cin >> tc;
	while (tc--) {
		cin >> n >> k;
		int sum = 0;
		for (int i = 1; i <= n; i++) {
			cin >> a[i];
			sum += a[i];
		}
		memset(visited, false, sizeof(visited));
		s = 0; ok = false;
		if (sum % k != 0) {
			cout << 0;
		} else {
			s = sum / k;
			ql(1, 1, 0);
			if (!ok) cout << 0;
			else cout << 1;
		}
		cout << endl;
	} 
}

