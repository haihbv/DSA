#include <bits/stdc++.h>

using namespace std;

#define el '\n'
#define pi pair<int, int>
#define fi first
#define se second

bool used[100005];

int bfs(int s, int t) {
	memset(used, false, sizeof(used));
	queue<pi> q;
	q.push({s, 0});
	used[s] = true;
	while (!q.empty()) 
	{
		auto it = q.front(); q.pop();
		int x = it.fi, thao_tac = it.se;
		
		if (x == t) 
		{
			return thao_tac;
		}
		
		// -1
		if (x - 1 >= 1 && !used[x-1]) {
			q.push({x - 1, thao_tac + 1});
			used[x - 1] = true;
		}
		
		// *2
		if (x <= t && !used[x * 2]) {
			q.push({x * 2, thao_tac + 1});
			used[x * 2] = true;
		}
	}
	return -1;
}

int main() {
	cin.tie(0)->sync_with_stdio(0);
	int tc = 1;
	cin >> tc;
	while (tc--) 
	{
		int s, t;
		cin >> s >> t;
		cout << bfs(s, t) << el;
	}
}

