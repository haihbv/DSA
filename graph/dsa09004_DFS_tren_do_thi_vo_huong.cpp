#include "bits/stdc++.h"

using namespace std;

#define el '\n'

vector<int> adj[1005];
bool visited[1005];

void dfs(int u)
{
	cout << u << " ";
	visited[u] = true;
	for (int v : adj[u]) // duyet tat ca dinh ke xung quanh dinh u
	{
		if (!visited[v])
		{
			dfs(v);	
		}	
	}
}

int main()
{
	cin.tie(0) -> sync_with_stdio(0);
	int tc; cin >> tc;
	while (tc--)
	{
		memset(visited, false, sizeof(visited));
		int n, m, st;
		cin >> n >> m >> st;
		for (int i = 1; i <= n; i++)
		{
			adj[i].clear();
		}
		for (int i = 0; i < m; i++)
		{
			int x, y; cin >> x >> y;
			adj[x].push_back(y);
			adj[y].push_back(x);
		}
		for (int i = 1; i <= n; i++)
		{
			sort(adj[i].begin(), adj[i].end());
		}
		dfs(st); cout << el;
	}
}

