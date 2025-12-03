#include "bits/stdc++.h"
#define el '\n'

using namespace std;

int n, m, color[1005];
vector<int> adj[1005];
bool ok;

void dfs(int u)
{
	if (ok)
	{
		return;
	}
	for (int v : adj[u])
	{
		if (color[v] == 0)
		{
			color[v] = 3 - color[u];
			dfs(v);
		}
		else if (color[v] == color[u])
		{
			ok = true;
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
		cin >> n >> m;
		for (int i = 1; i <= n; i++)
		{
			adj[i].clear();
		}
		memset(color, 0, sizeof(color));
		ok = false;
		for (int i = 1; i <= m; i++)
		{
			int x, y;
			cin >> x >> y;
			adj[x].push_back(y);
			adj[y].push_back(x);
		}
		for (int i = 1; i <= n; i++)
		{
			sort(adj[i].begin(), adj[i].end());
		}
		for (int i = 1; i <= n; i++)
		{
			if (color[i] == 0)
			{
				color[i] = 1;
				dfs(i);
			}
		}
		if (!ok)
		{
			cout << "YES" << el;
		}
		else
		{
			cout << "NO" << el;
		}
	}
}

