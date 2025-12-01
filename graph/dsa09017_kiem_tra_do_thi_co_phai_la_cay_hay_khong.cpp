#include <bits/stdc++.h>
#define el '\n'

using namespace std;

int n;
vector<int> adj[1005];
bool visited[1005];
int cnt;

void dfs(int u)
{
	++cnt;
	visited[u] = true;
	for (int v : adj[u])
	{
		if (!visited[v])
		{
			dfs(v);
		}
	}
}

bool check()
{
	dfs(1);
	return cnt == n;
}

int main()
{
	cin.tie(0) -> sync_with_stdio(0);
	int tc = 1;
	cin >> tc;
	while (tc--)
	{
		cin >> n;
		cnt = 0;
		for (int i = 1; i <= n; i++) {
			adj[i].clear();
		}
		memset(visited, false, sizeof(visited));
		int m = n - 1;
		for (int i = 1; i <= m; i++)
		{
			int x, y;
			cin >> x >> y;
			adj[x].push_back(y);
			adj[y].push_back(x);
		}
		if (check()) {
			cout << "YES" << el;
		}
		else {
			cout << "NO" << el;
		}
	}
}

