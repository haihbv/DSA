#include <bits/stdc++.h>

using namespace std;

#define el '\n'
#define ppi pair<pair<int, int>, int>
#define fi first
#define se second

int s1, s2, t1, t2;

int dx[] = {2, 2, 1, 1, -1, -1, -2, -2};
int dy[] = {-1, 1, -2, 2, -2, 2, -1, 1};

bool visited[10][10];
 
int bfs() {
	memset(visited, false, sizeof(visited));
	queue<ppi> q;
	q.push({{s1, s2}, 0});
	visited[s1][s2] = true;
	while (!q.empty()) {
		auto it = q.front(); q.pop();
		int i = it.fi.fi, j = it.fi.se, len = it.se;
		if (i == t1 && j == t2) return len;
		for (int k = 0; k < 8; k++) {
			int i1 = i + dx[k], j1 = j + dy[k];
			if (i1 >= 1 && i1 <= 8 && j1 >= 1 && j1 <= 8 && !visited[i1][j1])
			{
				q.push({{i1, j1}, len + 1});
				visited[i1][j1] = true;
			}
		}
	}
	return -1;
}

int main() {
	cin.tie(0) -> sync_with_stdio(0);
	int tc = 1;
	cin >> tc;
	cin.ignore();
	while (tc--) {
		string s, t;
		cin >> s >> t;
		s1 = s[1] - '0', s2 = s[0] - 'a' + 1;
		t1 = t[1] - '0', t2 = t[0] - 'a' + 1; 
		cout << bfs() << el;
	}
}

