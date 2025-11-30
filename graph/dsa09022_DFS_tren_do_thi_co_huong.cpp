#include <bits/stdc++.h>

using namespace std;

#define el '\n'

int n, m, bd;

vector<int> adj[1005];
bool visited[1005];

void dfs(int u)
{
	visited[u] = true;
	cout << u << " ";
	for (int v : adj[u])
	{
		if (!visited[v])
		{
			dfs(v);
		}
	}
}

signed main(void)
{
	cin.tie(0) -> sync_with_stdio(0);
	int tc;
	cin >> tc;
	while (tc--)
	{
		cin >> n >> m >> bd;
		memset(visited, false, sizeof(visited));
		for (int i = 1; i <= n; i++)
		{
			adj[i].clear();
		}
		for (int i = 1; i <= m; i++)
		{
			int x, y;
			cin >> x >> y;
			adj[x].push_back(y);
		}
		for (int i = 1; i <= n; i++)
		{
			sort(adj[i].begin(), adj[i].end());
		}
		dfs(bd);
		cout << el;
	}
}
