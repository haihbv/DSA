#include <bits/stdc++.h>

#define el '\n'

using namespace std;

int n, m, bd;
vector<int> adj[100005];
vector<pair<int, int>> res;
bool visited[100005];
int cnt = 0;

void dfs(int u)
{
	++cnt;
	visited[u] = true;
	for (int v : adj[u])
	{
		if (!visited[v])
		{
			res.push_back({u, v});
			dfs(v);
		}
	}
}

int main()
{
	cin.tie(0) -> sync_with_stdio(0);
	int tc = 1;
	cin >> tc;
	while (tc--)
	{
		cin >> n >> m >> bd;
		for (int i = 1; i <= n; i++)
		{
			adj[i].clear();
		}
		cnt = 0;
		res.clear();
		memset(visited, false, sizeof(visited));
		for (int i = 1; i <= m; i++)
		{
			int x, y; cin >> x >> y;
			adj[x].push_back(y);
			adj[y].push_back(x);
		}
		dfs(bd);
		if (res.size() == n - 1)
		{
			for (pair<int, int> edge : res)
			{
				cout << edge.first << " " << edge.second << el;
			}
		}
		else
		{
			cout << -1 << el;
		}
	}
}

