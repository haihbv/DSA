#include <bits/stdc++.h>

using namespace std;

#define ppi pair<pair<int, int>, int>
#define fi first
#define se second
#define el '\n'

int n, m, a[1005][1005];
bool visited[1005][1005];

int bfs() {
	memset(visited, false, sizeof(visited));
	queue<ppi> q;
	q.push({{1,1}, 0});
	visited[1][1] = true;
	while (!q.empty()) {
		auto it = q.front(); q.pop();
		int i = it.fi.fi, j = it.fi.se, sz = it.se;
		int i1 = i + a[i][j], j1 = j + a[i][j];
		if (i == m && j == n) return sz;
		if (i1 >= 1 && i1 <= m && !visited[i1][j]) {
			q.push({{i1, j}, sz + 1});
			visited[i1][j] = true;
		}
		if (j1 >= 1 && j1 <= n && !visited[i][j1]) {
			q.push({{i, j1}, sz + 1});
			visited[i][j1] = true;
		}
	}
	return -1;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		cin >> m >> n;
		for (int i = 1; i <= m; i++) {
			for (int j = 1; j <= n; j++) {
				cin >> a[i][j];
			}
		}
		cout << bfs() << el;
	}
}
