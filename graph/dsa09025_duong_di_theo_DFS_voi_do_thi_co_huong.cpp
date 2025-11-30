#include <bits/stdc++.h>

using namespace std;

#define el '\n'

int n, m, bd, kt;

#define MAX 1005

vector<int> adj[MAX];
bool visited[MAX];
int parent[MAX];

void dfs(int u)
{
	visited[u] = true;
	// cout << u << el;
	for (int v : adj[u])
	{
		if (!visited[v])
		{
			parent[v] = u; 
			dfs(v);
		}
	}
}

int main()
{
	cin.tie(0) -> sync_with_stdio(0);
	int tc;
	cin >> tc;
	while (tc--)
	{
		cin >> n >> m >> bd >> kt;
		for (int i = 1; i <= n; i++)
		{
			adj[i].clear();
		}
		memset(visited, false, sizeof(visited));
		for (int i = 1; i <= m; i++)
		{
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
		}
		dfs(bd);
		if (visited[kt])
		{
			vector<int> path;
			while (kt != bd)
			{
				path.push_back(kt);
				kt = parent[kt];
			}
			path.push_back(kt);
			reverse(path.begin(), path.end());
			for (int x : path)
			{
				cout << x << " ";
			}
			cout << el;
		}
		else
		{
			cout << -1 << el;
		}
	}
}

